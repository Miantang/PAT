#include <iostream>
#include <fstream>
#include <cstdio>
#include <cmath>
using namespace std;
bool isPrime(int& a)
{
    if(a == 1)
        return false;
    for(int i = 2; i <= sqrt(a); ++i)
    {
        if(a%i == 0)
            return false;
    }
    return true;
}
int main() {
    #ifndef ONLINE_JUDGE
        // ifstream cin("i.txt");
        // ofstream cout("o.txt");
        freopen("i.txt", "r", stdin);
        freopen("o.txt", "w", stdout);
    #endif
    int N;
    scanf("%d", &N);
    int last = 2, res = 0;
    for(int i = 3; i <= N; i = i+2)
    {
        if(isPrime(i))
        {
            if(i - last == 2)
            {
                res++;
            }
            last = i;
        }
    }
    printf("%d\n", res);
    return 0;
}
