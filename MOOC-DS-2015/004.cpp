#include <iostream>
#include <fstream>
#include <cstdio>
#include <cstdlib>
#include <sstream>
#include <string>
#include <algorithm>
using namespace std;
int main() {
    #ifndef ONLINE_JUDGE
        // ifstream cin("i.txt");
        // ofstream cout("o.txt");
        freopen("i.txt", "r", stdin);
        freopen("o.txt", "w", stdout);
    #endif
    string num, res;
    cin >> num;
    int flag = 0;
    for(string::iterator i = num.begin(); i !=num.end(); ++i)
    {
         int dig = int(*i - '0')*2;
         if(dig >= 10)
         {

            res += char(dig%10 + '0' + flag);
            if(dig%10+flag >= 10)
            {
                flag = 2;
            }
            else
                flag = 1;
         }
         else
         {
            res += char(dig%10 + '0'+ flag);
            if(dig%10+flag >= 10)
            {
                flag = 1;
            }
            else
                flag = 0;
         } 
    }
    string tnum(num), temres(res);
    sort(tnum.begin(), tnum.end());
    sort(temres.begin(), temres.end());
    if(tnum == temres)
    {
        printf("Yes\n");
    }
    else
    {
        printf("No\n");
    }
    printf("%s\n", res.c_str());
    return 0;
}
