//14min15s
#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
using namespace std;

int main() {
    #ifndef ONLINE_JUDGE
        ifstream cin("i.txt");
        ofstream cout("o.txt");
    #endif
    

    size_t N, line;
    char c;
    cin >> N >> c;
    if (N%2 == 1) 
        line = N/2 +1;
    else
        line = N/2;
    for (size_t i = 0; i < line; ++i) 
    {
        if(i == 0 || i == line - 1)
        {
            string s(N, c);
            cout << s << endl;
        }
        else
        {
            string s;
            s += c;
            s.append(N-2, ' ');
            s += c;
            cout << s << endl;
        }
            
    }
    return 0;
}
