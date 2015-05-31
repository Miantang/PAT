#include <iostream>
#include <fstream>
#include <string>
#include <cstdio>
using namespace std;
int main() {
    #ifndef ONLINE_JUDGE
        ifstream cin("i.txt");
        ofstream cout("o.txt");
        // freopen("i.txt", "r", stdin);
        // freopen("o.txt", "w", stdout);
    #endif

    string A;
    int B;
    cin >> A >> B;
    string res;
    int resB = 0;
    size_t size = A.size();
    for(size_t i = 0; i < size;++i)
    {
        int tem = resB*10 + A[i] - '0';
        res += char(tem/B + '0');
        resB = tem%B;
    }
    if(res[0] == '0' && res.size() > 1)
        res.erase(0,1);
    cout << res << ' ' << resB;

    return 0;
}
