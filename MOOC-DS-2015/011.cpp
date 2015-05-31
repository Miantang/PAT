#include <iostream>
#include <fstream>
#include <cstdio>
using namespace std;
int main() {
    #ifndef ONLINE_JUDGE
        // ifstream cin("i.txt");
        // ofstream cout("o.txt");
        freopen("i.txt", "r", stdin);
        freopen("o.txt", "w", stdout);
    #endif
    int N, in;
    int max = 0,now = 0;
    int first , last;
    scanf("%d", &N);
    while(scanf("%d", &in) != EOF)
    {
        now += in;
        if (now > max) 
        {
            max = now;
        }
        if (now < 0) 
        {
            now = 0;
        }
    }
    printf("%d\n", max);
    return 0;
}
