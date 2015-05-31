#include <iostream>
#include <fstream>
#include <cstdio>
#include <cstdlib>
using namespace std;
int main() {
    #ifndef ONLINE_JUDGE
        // ifstream cin("i.txt");
        // ofstream cout("o.txt");
        freopen("i.txt", "r", stdin);
        freopen("o.txt", "w", stdout);
    #endif

    int num;
    int a1 = 0, a2 = 0, a3 = 0, a4 = 0, a5 = 0;
    int suma4 = 0;
    bool flag = true, hasA2 = false;
    int N;scanf("%d", &N);
    while(scanf("%d", &num) != EOF)
    {
        if(num%5 == 0)
        {
            if(num%2 == 0)
                a1 += num;
        }
        else if(num%5 == 1)
        {
            hasA2 = true;
            if(flag)
            {
                a2 += num; flag = false;
            }
            else
            {
                a2 -= num; flag = true;
            }
                 
        }
        else if(num%5 == 2)
        {
            a3++;                 
        }
        else if(num%5 == 3)
        {
            a4++; 
            suma4 += num;                
        }
        else
        {
            if(num >= a5)
                a5 = num;
        }
    }
    if(a1 == 0) printf("N ");
    else printf("%d ", a1);

    if(!hasA2) printf("N ");
    else printf("%d ", a2);

    if(a3 == 0) printf("N ");
    else printf("%d ", a3);

    if(a4 == 0) printf("N ");
    else printf("%.1f ", (double)suma4/(double)a4);

    if(a5 == 0) printf("N");
    else printf("%d", a5);
    return 0;
}
