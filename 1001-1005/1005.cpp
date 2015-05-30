#include <iostream>
#include <fstream>
#include <cstdio>
#include <algorithm>
#include <vector>
#include <map>
using namespace std;
bool cmp(const pair<int, bool>& a, const pair<int, bool>& b)
{
    return a.first > b.first;
}
int main() {
    #ifndef ONLINE_JUDGE
        // ifstream cin("i.txt");
        // ofstream cout("o.txt");
        freopen("i.txt", "r", stdin);
        freopen("o.txt", "w", stdout);
    #endif
    int n, num;
    scanf("%d", &n);
    vector<pair<int, bool>> v;
    while(n != 0)
    {
        scanf("%d", &num);
        pair<int, bool> map({num, true});
        v.push_back(map);
        n--;
    }
    for(auto i = v.begin(); i != v.end(); ++i)
    {
        num = (*i).first;
        while(num != 1)
        {
            if(num%2 == 0)
            {
                num = num/2;
            }
            else
            {
                num = (3*num+1)/2;
            }
            // auto isIn = [num](pair<int, bool>& a){return a.first == num;};
            // vector<pair<int, bool>>::iterator index = find(v.begin(), v.end(), isIn);
            // if(index != v.end())
            //     (*index).second = false;
            for(vector<pair<int, bool>>::iterator c = v.begin(); c != v.end(); ++c)
            {
                if((*c).first == num)
                    (*c).second = false;
            }
        }
    }
    sort(v.begin(), v.end(), cmp);
    bool first = true;
    for(auto i = v.begin(); i != v.end(); ++i)
    {
        if((*i).second)
        {
            if(first)
            {
                printf("%d", (*i).first);
                first = false;
            }
            else
                printf(" %d", (*i).first);
        }
        
    }
    
    return 0;
}
