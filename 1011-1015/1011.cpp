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

    int N;
    scanf("%d", &N);
    int a, b;
    long c;
    for(int i = 1; i <= N; ++i)
    {
        scanf("%d%d%d", &a, &b, &c);
        if(a + b > c)
            printf("Case #%d: true\n", i);
        else
            printf("Case #%d: false\n", i);
    }
    return 0;
}
