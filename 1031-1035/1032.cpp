#include <iostream>
#include <fstream>
#include <string>
#include <map>
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
    map<int, int> map;
    for (int i = 0; i < N; ++i) 
    {
        int key, value;
        cin >> key >> value;
        if(map.find(key) != map.end())
        {
            map[key] += value;
        }
        else
        {
            map.insert({key, value});
        }
    }
    int max = 0,  mymax = 0;
     for(const auto &w : map)
    {
        if (w.second > max) 
        {
            max = w.second;
            mymax = w.first;
        }
    }
    cout << mymax << ' ' << max<< endl;
    return 0;
}
