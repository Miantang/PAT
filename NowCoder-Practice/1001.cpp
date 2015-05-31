#include <iostream>
#include <fstream>
#include <string>
#include <cmath>
using namespace std;
const string TH("0123456789ABC");
int main() {
    #ifndef ONLINE_JUDGE
        // ifstream cin("i.txt");
        // ofstream cout("o.txt");
        freopen("i.txt", "r", stdin);
        freopen("o.txt", "w", stdout);
    #endif
    int r, g, b;
    scanf("%d%d%d", &r, &g, &b);
    // printf("%d %c", r/13, TH[r/13]);
    printf("#%c%c%c%c%c%c", TH[r/13], TH[r%13], TH[g/13], TH[g%13], TH[b/13], TH[b%13]);
    return 0;
}
