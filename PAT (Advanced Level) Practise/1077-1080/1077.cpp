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
    
    int N;
    cin >> N;
    string kuchi, firstLine;
    bool isNai = false;
    for(int i = 0; i < N; ++i)
    {
        if(i == 0)
        {
            string nothing;
            getline(cin, nothing);
        }
        string line;
        getline(cin, line);
        if(i == 0)
        {
            firstLine = line;
            continue;
        }
        else if(i == 1)
        {

            for (string::reverse_iterator s = line.rbegin(); s != line.rend(); ++s)
            {
                char c = *(firstLine.rbegin() + (s - line.rbegin()));
                // cout << "firstLine: " << c << endl;
                if(c == *s)
                    kuchi.push_back(c);
                else
                    break;
            } 
        }
        else
        {
            for (string::reverse_iterator s = line.rbegin(); s != line.rend(); ++s)
            {
                string::iterator kuiter = kuchi.begin() + (s - line.rbegin());
                if(*kuiter == *s)
                {
                    continue;
                }
                else
                {
                    kuchi.erase(kuiter, kuchi.end());
                    break;
                }
            } 
        }
        if (kuchi.size() == 0) 
        {
            isNai = true;
            break;
        }
    }
    if(!isNai)
        for (string::reverse_iterator s = kuchi.rbegin(); s != kuchi.rend(); ++s)
        {
            cout << *s;
        }
    else
        cout << "nai" << endl;

    return 0;
}
