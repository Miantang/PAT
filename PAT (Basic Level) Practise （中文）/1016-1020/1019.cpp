#include <iostream>
#include <fstream>
#include <string>
#include <cstdio>
#include <algorithm>
#include <map>
using namespace std;
int r(int a)
{
    return (a%10)*1000 + (a/10%10)*100 + (a/100%10)*10 + a/1000%10;
}
void Sort(int& a)
{
    int temp[4];
    temp[0] = a%10;
    temp[1] = a/10%10;
    temp[2] = a/100%10;
    temp[3] = a/1000%10;
    sort(temp, temp+4);
    a = temp[0]*1000 + temp[1]*100 + temp[2]*10 + temp[3];
    return;
}
int main() {
    #ifndef ONLINE_JUDGE
        ifstream cin("i.txt");
        // ofstream cout("o.txt");
        freopen("i.txt", "r", stdin);
        freopen("o.txt", "w", stdout);
    #endif
    int num;
    scanf("%d", &num);
    if(num%1111 == 0)
    {
        printf("%04d - %04d = 0000\n", num, num);
    }
    else if(num == 6174)
    {
        Sort(num);
        printf("%04d - %04d = %04d\n", r(num), num, r(num) - num);
    }else
    {
        while(num != 6174)
        {
            Sort(num);
            printf("%04d - %04d = %04d\n", r(num), num, r(num) - num);
            num = r(num) - num;
        }
    }

    return 0;
}
