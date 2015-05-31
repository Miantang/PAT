#include <iostream>
#include <fstream>
#include <cstdio>
#include <algorithm>
#include <vector>
using namespace std;
int L, H;
class P
{
    public :
        int de, cai, all;
        long id;
        P(){};
        void total(){ all = de + cai;}
        void print()
        {
            printf("%08ld %d %d\n", id, de, cai);
        }
};
bool cmp(const P& a, const P& b)
{
    if(a.all != b.all)
        return a.all > b.all;
    else
    {
        if(a.de != b.de)
            return a.de > b.de;
        else
            return a.id < b.id;
    }
}
int findof(P& a)
{
    auto a11 = (a.de >= H);
    auto a21 = (a.de < H && a.de >= L);
    auto a12 = (a.cai >= H);
    auto a22 = (a.cai < H && a.cai >= L);
    auto a33 = (a.de < L || a.cai < L);
    if(a11 && a12)
    {
        return 1;
    }
    else if(a11 && a22)
    {
        return 2;
    }
    else if(a21 && a22)
    {
        if(a.de >= a.cai)
            return 3;
        else
            return 4;
    }
    else if(a33)
    {
        return 5;
    }
    else
        return 4;
}
int main() {
    #ifndef ONLINE_JUDGE
        // ifstream cin("i.txt");
        // ofstream cout("o.txt");
        freopen("i.txt", "r", stdin);
        freopen("o.txt", "w", stdout);
    #endif

    int N;
    scanf("%d%d%d", &N, &L, &H);
    P p;
    vector<P> v[4];
    int fail = 0;
    for(int i = 0; i < N; ++i)
    {
        scanf("%ld%d%d", &p.id, &p.de, &p.cai);
        p.total();
        if(findof(p) == 5)
            fail++;
        else
            v[findof(p)-1].push_back(p);
    }
    printf("%lu\n", N-fail);
    for(int i = 0; i < 4; ++i)
    {
        sort(v[i].begin(), v[i].end(), cmp);
        for(vector<P>::iterator s = v[i].begin(); s != v[i].end();++s)
        {
            s->print();
        }
    }
    return 0;
}