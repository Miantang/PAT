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
    string in;
    cin >> in;
    int num[10]  = {0};
    for(string::iterator i = in.begin(); i != in.end(); ++i)
    {
        num[*i-'0']++;
    }
    for(int j = 0; j < 10; ++j)
    {
        if(num[j] != 0)
            cout << j << ':' << num[j] << endl;
    }
        
    return 0;
}
