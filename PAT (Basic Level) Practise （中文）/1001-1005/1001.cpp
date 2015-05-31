//6 min
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
    int n;
    int index = 0;
    scanf("%d", &n);
    while(n != 1)
    {
        if(n%2 == 0)
        {
            n = n/2;
        }
        else
        {
            n = (3*n+1)/2;
        }
        index++;
    }
    printf("%d", index);
    return 0;
}
