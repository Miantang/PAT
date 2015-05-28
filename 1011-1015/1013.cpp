#include <iostream>
#include <fstream>
#include <cstdio>
#include <cmath>
using namespace std;
bool isPrime(long& a)
{
    if(a == 1)
        return false;
    if(a == 2)
        return true;
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
    int M, N;
    scanf("%d%d", &M, &N);
    int index = 1;
    int prindex = 0;
    bool first = true;
    for(long i = 2; i <= 1000000; ++i) // 10000 prime is 104729
    {
        if(isPrime(i))
        {
            prindex++;
            if(prindex >= M && prindex <= N)
            {
                if(index == 10)
                {
                    printf("\n");
                    index = 1;
                }
                else
                {
                    if(!first)
                    {
                        printf(" ");
                        index++;
                    }
                    else
                        first = false;
                }
                printf("%d", i);
            }
            if(prindex == N)
                break;
        }
    }
    return 0;
}
