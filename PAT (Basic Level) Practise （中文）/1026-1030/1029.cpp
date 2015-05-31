#include <iostream>
#include <fstream>
#include <string>
#include <cctype>
using namespace std;
int main() {
    #ifndef ONLINE_JUDGE
//        ifstream cin("i.txt");
//        ofstream cout("o.txt");
         freopen("i.txt", "r", stdin);
         freopen("o.txt", "w", stdout);
    #endif
    string whole, only;
    string ch;
    cin >> whole >> only;
    for(string::iterator w = only.begin(); w != only.end(); ++w)
    {
        ch.push_back(*w);
        if( *w >= 'a' && *w <= 'z')
        {
            ch.push_back(toupper(*w));
        }else if( *w >= 'A' && *w <= 'Z')
        {
            ch.push_back(tolower(*w));
        }
        size_t index = whole.find_first_of(ch);
        while(index != string::npos)
        {
            whole[index] = '#';
            index = whole.find_first_of(ch, index+1);
        }
        ch.clear();
    }
    string error;
    for(string::iterator w = whole.begin(); w != whole.end(); ++w)
    {
        if(*w != '#' && error.find(toupper(*w)) == string::npos)
        {
            if( *w >= 'a' && *w <= 'z')
                *w = toupper(*w);
            error.push_back(*w) ;
        }
    }
    cout << error;
    return 0;
}
