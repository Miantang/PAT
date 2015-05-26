#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main() {
    #ifndef ONLINE_JUDGE
//        ifstream cin("i.txt");
//        ofstream cout("o.txt");
         freopen("i.txt", "r", stdin);
         freopen("o.txt", "w", stdout);
    #endif
    int c1, c2;
    scanf("%d%d", &c1, &c2);
    int t = int(((double)c2 - (double)c1)/100.0 + 0.5);
    int ss = t%60;
    int mm = (t/60)%60;
    int hh = (t/60)/60; 
    printf("%02d:%02d:%02d", hh, mm, ss);
    return 0;
}
