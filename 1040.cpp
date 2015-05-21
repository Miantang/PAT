//35min 17'
#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
#include <cstdio>
#include <algorithm>
using namespace std;

int main() {
    #ifndef ONLINE_JUDGE
        ifstream cin("i.txt");
        ofstream cout("o.txt");
        // freopen("i.txt", "r", stdin);
        // freopen("o.txt", "w", stdout);
    #endif

    string line;
    cin >> line;
    string::iterator indexA , lastIndexA;
    int countP = 0,  sum = 0;
    
    for(string::iterator i = line.begin(); i != line.end(); ++i)
    {

    }
    indexA = find(line.begin(), line.end(), 'A');
    lastIndexA = line.begin();
    int countT = count(line.begin(), line.end(), 'T');
    while(indexA != line.end())
    {
        countP += count(lastIndexA, indexA, 'P');
        countT -= count(lastIndexA, indexA, 'T');
        sum += countP*countT;
        *indexA = '#';
        lastIndexA = indexA;
        indexA = find(indexA+1, line.end(), 'A');
    }

    cout << (sum%1000000007) << endl;
    return 0;
}
