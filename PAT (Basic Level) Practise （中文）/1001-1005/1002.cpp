#include <iostream>
#include <fstream>
#include <cstdio>
#include <sstream>
using namespace std;
string PY[10] = {"ling", "yi", "er", "san", "si", "wu", "liu", "qi", "ba", "jiu"};
int main() {
    #ifndef ONLINE_JUDGE
        ifstream cin("i.txt");
        ofstream cout("o.txt");
        // freopen("i.txt", "r", stdin);
        // freopen("o.txt", "w", stdout);
    #endif
    string n;
    cin >> n;
    int sum = 0;
    for(string::iterator i = n.begin(); i != n.end(); ++i)
    {
        sum += int(*i-'0');
    }
    stringstream s;
    s << sum;
    string res = s.str();
    for(string::iterator i = res.begin(); i != res.end(); ++i)
    {
        if(i != res.begin())
            cout << ' ';
        cout << PY[int(*i - '0')];
    }
    return 0;
}
