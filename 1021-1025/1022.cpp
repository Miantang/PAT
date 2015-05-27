#include <iostream>
#include <fstream>
#include <string>
#include <cmath>
#include <sstream>
using namespace std;

int main() {
    #ifndef ONLINE_JUDGE
        // ifstream cin("i.txt");
        ofstream cout("o.txt");
        freopen("i.txt", "r", stdin);
        // freopen("o.txt", "w", stdout);
    #endif
    int A, B, D;
    scanf("%d%d%d", &A, &B, &D);
    // string res;
    int C = A + B;
    string res;
    do
    {
       // sprintf(rtr, "%d", C%D);
        // stringstream rtr;
        // rtr << C%D;
       // res += rtr.str();
        res.insert(0, to_string(C%D));
        // res.insert(0, rtr.str());
       C = C/D;
    }
    while(C);
    cout << res ;

    return 0;
}
