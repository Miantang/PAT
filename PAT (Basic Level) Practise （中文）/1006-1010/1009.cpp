#include <iostream>
#include <fstream>
#include <cstdio>
#include <string>
#include <vector>
using namespace std;
int main() {
    #ifndef ONLINE_JUDGE
        ifstream cin("i.txt");
        ofstream cout("o.txt");
        // freopen("i.txt", "r", stdin);
        // freopen("o.txt", "w", stdout);
    #endif
    string temp;
    vector<string> v;
    while(cin >> temp)
    {
        v.push_back(temp);
    }
    for (std::vector<string>::reverse_iterator i = v.rbegin(); i != v.rend(); ++i) 
    {
        if(i != v.rbegin())
            cout << ' ';
        cout << *i;
    }
    return 0;
}
