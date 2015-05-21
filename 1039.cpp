//23min
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
    string buy, need;
    cin >> buy >> need;

    size_t index = 0;
    for (string::iterator i = need.begin(); i != need.end(); ++i) 
    {
        index = buy.find(*i);
        if(index != -1)
        {
            buy[index] = '#';
            *i = '#';
        }
    }
    int needcnt = 0, buycnt = 0;
    for (std::string::iterator i = need.begin(); i != need.end(); ++i) 
    {
        if (*i != '#') 
        {
            needcnt++;
        }
    }
    for (std::string::iterator i = buy.begin(); i != buy.end(); ++i) 
    {
        if (*i != '#') 
        {
            buycnt++;
        }
    }
    if (needcnt == 0) 
    {
        cout << "Yes " << buycnt << endl;
    }else
    {
        cout << "No " << needcnt << endl;
    }
    return 0;
}
