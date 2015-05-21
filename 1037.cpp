//20min
#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
#include <cstdio>
using namespace std;

int main() {
    #ifndef ONLINE_JUDGE
        ifstream cin("i.txt");
        ofstream cout("o.txt");
        freopen("i.txt", "r", stdin);
        freopen("o.txt", "w", stdout);
    #endif
    int gNeed, sNeed, kNeed, gGive, sGive, kGive;
    int leftAll;
    bool flag;
    int outg, outk, outs;
    scanf("%d.%d.%d", &gNeed, &sNeed, &kNeed);
    scanf("%d.%d.%d", &gGive, &sGive, &kGive);

    leftAll = gGive*17*29 + sGive*29 + kGive - (gNeed*17*29 + sNeed*29 + kNeed);
    if (leftAll < 0) 
    {
        flag = true;
        leftAll = -leftAll;
    }else{
        flag = false;
    }
    outk = leftAll % 29;
    outs = (leftAll/29)%17;
    outg = (leftAll/29)/17;
    if(flag)
        printf("-%d.%d.%d\n",outg, outs, outk);
    else
        printf("%d.%d.%d\n",outg, outs, outk);
    return 0;
}
