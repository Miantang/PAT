#include <fstream>
#include <cstdio>
#include <map>
#include <vector>
#include <algorithm>
using namespace std;
class Node
{
    public :
        int addr;
        int next;
        int e;
        Node(){}
        Node(int a, int _e, int _next)
        {
            addr = a;
            next =_next;
            e = _e;
        }
};
int main() {
    #ifndef ONLINE_JUDGE
        // ifstream cin("i.txt");
        // ofstream cout("o.txt");
        freopen("i.txt", "r", stdin);
        freopen("o.txt", "w", stdout);
    #endif
    int first;
    int N, K;
    scanf("%d%d%d", &first, &N, &K);
    map<int, Node> ma;
    vector<Node> v;
    int addr; int next; int e; 
    for(int i = 0; i < N; ++i)
    {
        scanf("%d%d%d", &addr, &e, &next);
        Node temp(addr, e, next);
        ma.insert(pair<int, Node>(addr, temp));
    }
    while(first != -1)
    {
        v.push_back(ma[first]);
        first = ma[first].next;
    }
    int round = v.size()/K;
    for (int i = 1; i <= round; ++i) 
    {
        int beg = (i-1)*K;
        int en = i*K;
        reverse(v.begin()+beg, v.begin()+en);
    }
    for(vector<Node>::iterator s = v.begin(); s != v.end(); ++s)
    {
        if(s < v.end() - 1)
            printf("%05d %d %05d\n", (*s).addr, (*s).e, (*(s+1)).addr);
        else
            printf("%05d %d -1\n", (*s).addr, (*s).e);
    }

    return 0;
}
