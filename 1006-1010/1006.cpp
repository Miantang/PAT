#include <iostream>
#include <fstream>
#include <cstdio>
#include <cmath>
using namespace std;
char IN[2] = {'S', 'B'};
int main() {
    #ifndef ONLINE_JUDGE
        ifstream cin("i.txt");
        ofstream cout("o.txt");
        // freopen("i.txt", "r", stdin);
        // freopen("o.txt", "w", stdout);
    #endif
    string num;
    string res;
    // scanf("%d", &num);
    cin >> num;
    int index = 0;
    for(string::reverse_iterator i = num.rbegin(); i != num.rend(); ++i)
    {
        if(i == num.rbegin())
        {
            for(int j = 1; j <= int(*i-'0');++j)
                res.push_back(char(j+'0'));
        }
        else
        {
            string temp(int(*i-'0'), IN[index]);
            res.insert(0, temp);
            index++;
        }
    }
    cout << res ;
    return 0;
}
