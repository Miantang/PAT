#include <iostream>
#include <fstream>
#include <string>
#include <cmath>
using namespace std;

int main() {
    #ifndef ONLINE_JUDGE
        ifstream cin("i.txt");
        ofstream cout("o.txt");
        // freopen("i.txt", "r", stdin);
        // freopen("o.txt", "w", stdout);
    #endif
    string sci, res, real;
    cin >> sci;
    size_t dot = sci.find('.');
    size_t E = sci.find('E');
    real = sci.substr(1, dot-1) + sci.substr(dot+1, E-dot-1);
    int t = stoi(sci.substr(E+1, sci.size()-1));
    if(t < 0)
    {
        string zero(-t, '0');
        zero.insert(1, 1, '.');
        if(sci[0] == '-')
            res += sci[0];
        res += zero + real;
    }
    else if(t > 0)
    {
        int num = t - real.size()+1;
        string zero;
        if(num >= 0)
            zero.append(num, '0');
        else if(num < 0)
            real.insert(t+1, 1, '.');
        if(sci[0] == '-')
            res += sci[0];
        res += real + zero;
    }
    // else
    // {
    //     real.insert(1, 1, '.');
    //     if(sci[0] == '-')
    //         res += sci[0];
    //     res += real;
    // }

    cout << res << endl;
    return 0;
}
