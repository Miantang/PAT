#include <iostream>
#include <fstream>
#include <string>
#include <cmath>
#include <algorithm>
using namespace std;
bool notZero(int i)
{
    return i != 0;
}
int main() {
    #ifndef ONLINE_JUDGE
        // ifstream cin("i.txt");
        ofstream cout("o.txt");
        freopen("i.txt", "r", stdin);
        // freopen("o.txt", "w", stdout);
    #endif
    int s[10];
    string res;
    for(int i = 0; i < 10; ++i)
    {
        scanf("%d", &s[i]);
    }
    if(s[0] != 0)
    {
        for(int j = 1; j < 10; ++j)
        {
            if(s[j])
            {
                s[j]--;
                cout << j;
                break;
            }
            else
                continue;
        }
    }
    for(int i = 0; i < 10; ++i)
    {
        res.append(s[i], 48+i);
    }
    cout << res;
    return 0;
}
