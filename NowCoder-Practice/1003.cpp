//sort 
#include <iostream>
#include <fstream>
#include <cmath>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
    #ifndef ONLINE_JUDGE
        // ifstream cin("i.txt");
        // ofstream cout("o.txt");
        freopen("i.txt", "r", stdin);
        freopen("o.txt", "w", stdout);
    #endif
    int M, N;
    scanf("%d", &M);
    int line1[M];
    int tem;
    vector<int> v;
    for(int i = 0; i < M; ++i)
    {
        scanf("%d", &tem);
        v.push_back(tem);
    }
    scanf("%d", &N);
    for(int i = 0; i < N; ++i)
    {
        scanf("%d", &tem);
        v.push_back(tem);
    }
    sort(v.begin(), v.end());
    if (v.size()%2 == 1) 
    {
        cout << v[v.size()/2] << endl;
    }
    else
    {
        if(v.size() >= 2)
            cout << v[v.size()/2 - 1] << endl;
    }
        
    return 0;
}
