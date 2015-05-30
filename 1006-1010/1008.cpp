#include <iostream>
#include <fstream>
#include <cstdio>
#include <cmath>
#include <vector>
using namespace std;
int main() {
    #ifndef ONLINE_JUDGE
        // ifstream cin("i.txt");
        // ofstream cout("o.txt");
        freopen("i.txt", "r", stdin);
        freopen("o.txt", "w", stdout);
    #endif
    int N, M;
    scanf("%d%d", &N, &M);
    vector<int> v, store;
    int circle = M%N;
    for (int i = circle; i < N; ++i) 
    {
        int temp ;
        scanf("%d", &temp);
        v.push_back(temp);
    }
    for(int i = 0; i < circle; ++i)
    {
        int temp ;
        scanf("%d", &temp);
        v.insert(v.begin()+i, temp);
    }
    for (vector<int>::iterator i = v.begin(); i != v.end(); ++i) 
    {
        if(i != v.begin())
            printf(" ");
        printf("%d", *i);
    }
    return 0;
}
