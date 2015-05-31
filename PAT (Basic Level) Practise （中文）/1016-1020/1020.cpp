#include <iostream>
#include <fstream>
#include <string>
#include <cstdio>
#include <algorithm>
#include <map>
using namespace std;
typedef struct 
{
    double num;
    double total;
    double single;
}I;
bool cmp(const I& a, const I& b)
{
    return a.single > b.single;
}
int main() {
    #ifndef ONLINE_JUDGE
        ifstream cin("i.txt");
        // ofstream cout("o.txt");
        freopen("i.txt", "r", stdin);
        freopen("o.txt", "w", stdout);
    #endif
    int N, need;
    scanf("%d%d", &N, &need);
    I items[N];
    double res = 0.0;
    for(int i = 0; i < N; ++i)
        scanf("%lf", &items[i].num);
    for(int i = 0; i < N; ++i)
    {
        scanf("%lf", &items[i].total);
        items[i].single = items[i].total/items[i].num;
    }
    sort(items, items+N, cmp);
    for(int i = 0; i < N; i++)
    {
        if(need > items[i].num)
        {
            need = need - items[i].num;
            res +=  items[i].total;
           // res += single[i] * (double)map[single[i]].first ;
        }
        else
        {
            res += items[i].single * need;
            // need = need - items[i].num;
            break;
        }
        // if(need <= 0)
        //     break;
    }
    printf("%.2f", res);
    return 0;
}
