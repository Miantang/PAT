#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main() {
    #ifndef ONLINE_JUDGE
        ifstream cin("i.txt");
        ofstream cout("o.txt");
        // freopen("i.txt", "r", stdin);
        // freopen("o.txt", "w", stdout);
    #endif
    string notIn, out;
    // cin >> notIn >> out;
    getline(cin, notIn);
    getline(cin, out);
    if(!notIn.empty())
    for (string::iterator i = notIn.begin(); i != notIn.end(); ++i) 
    {
        if (*i == '+') 
        {
            for (std::string::iterator j = out.begin(); j != out.end(); ++j) 
            {
                if (*j >= 'A' && *j <= 'Z') 
                {
                    // out.erase(j);
                    *j = '#';
                }
            }
        }
        else if (*i >= 'A' && *i <= 'Z') 
        {
            for (std::string::iterator j = out.begin(); j != out.end(); ++j) 
            {
                if (*j == *i || *j - 32 == *i )
                {
                    // out.erase(j);
                    *j = '#';
                }
            }
        }
        else 
        {
            for (std::string::iterator j = out.begin(); j != out.end(); ++j) 
            {
                if (*j == *i)
                {
                    // out.erase(j);
                    *j = '#';
                }
            }
        }
    }
    for (std::string::iterator i = out.begin(); i != out.end(); ++i) 
    {
        if (*i != '#') 
        {
            cout << *i;
        }
    }
    cout << endl;
    // cout << out << endl;
    return 0;
}
