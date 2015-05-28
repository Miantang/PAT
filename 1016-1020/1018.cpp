#include <iostream>
#include <fstream>
#include <string>
#include <cstdio>
#include <algorithm>
#include <map>
using namespace std;
int cmp(char a, char b)
{
    if(a == 'C' && b == 'J')  return 1;
    else if(a == 'C' && b == 'B')  return -1;
    else if(a == 'J' && b == 'B')  return 1;
    else if(a == 'J' && b == 'C')  return -1; 
    else if(a == 'B' && b == 'C')  return 1;
    else if(a == 'B' && b == 'J')  return -1; 
    else return 0;   
}
int main() {
    #ifndef ONLINE_JUDGE
        ifstream cin("i.txt");
        // ofstream cout("o.txt");
        freopen("i.txt", "r", stdin);
        freopen("o.txt", "w", stdout);
    #endif
    int times;
    cin >> times;
    int countA = 0, countP = 0,countB = 0;
    map<char, int> awin = {{'B', 0}, {'C', 0}, {'J', 0}};
    map<char, int> bwin = {{'B', 0}, {'C', 0}, {'J', 0}};
    // map<char, char> O = {{'B', 'C'}, {'C', 'J'},{'J', 'B'}};
    char A, B;
    for(int i = 0; i < times; ++i)
    {
        // scanf("%c%c", &A, &B);
        cin >> A >> B;
        if(cmp(A, B) == 1)
        {
            countA++;
            awin[A]++;
        }else if(cmp(A, B) == -1)
        {
            countB++;
            bwin[B]++;
        }else
        {
            countP++;
        }
    }
    auto mostA = awin.begin();
    auto mostB = bwin.begin();
    for(auto i = awin.begin(); i != awin.end(); ++i)
    {
        if(i->second > mostA->second)
            mostA = i;
    }
    for(auto i = bwin.begin(); i != bwin.end(); ++i)
    {
        if(i->second > mostB->second)
            mostB = i;
    }
    printf("%d %d %d\n", countA, countP, countB);
    printf("%d %d %d\n", countB, countP, countA);
    printf("%c %c", mostA->first, mostB->first);
    return 0;
}
