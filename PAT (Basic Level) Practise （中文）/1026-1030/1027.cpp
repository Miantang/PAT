#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main() {
    #ifndef ONLINE_JUDGE
        ifstream cin("i.txt");
        ofstream cout("o.txt");
//         freopen("i.txt", "r", stdin);
//         freopen("o.txt", "w", stdout);
    #endif
    int num;
    char ch;
    cin >> num >> ch;
    int line = 0;
    int node = 0;
    while(node <= num)
    {
        if(line == 0)
            node = 1;
        else
            node += line*4 + 2;
        line++;
    }
    if(node != 1)
        node = node - 4*line + 2;
    line--;
    string ect(line*2-1, ch);
    string::iterator left = ect.begin();
    string::iterator right = ect.end() - 1;
    for(int j = 0; j < line; ++j)
    {
        cout << ect << endl;
        if(left < right)
        {
            *left = ' ';
            ect.erase(right);
            left++;
            right--;
        }
    }
   for(int j = 0; j < line - 1; ++j)
    {
        if(right != ect.end())
        {
             left--;
            right++;
            *left = ch;
            ect.push_back(ch);
           
        }
        cout << ect << endl;
    }
    cout << num - node << endl;
    
    return 0;
}
