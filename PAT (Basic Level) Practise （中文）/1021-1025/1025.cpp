#include <iostream>
#include <fstream>
#include <map>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;
class Person
{
    public :
        int addr, next, e;
};
int main() {
    #ifndef ONLINE_JUDGE
        // ifstream cin("i.txt");
        // ofstream cout("o.txt");
        freopen("i.txt", "r", stdin);
        freopen("o.txt", "w", stdout);
    #endif
    int first, line, every;
    scanf("%d%d%d", &first, &line, &every);
    map<int, Person> map;
    vector<Person> v;
    for(int i = 0; i < line ; ++i)
    {
        Person tem;
        scanf("%d%d%d", &tem.addr, &tem.e, &tem.next);
        map.insert({tem.addr, tem});
    }
    int index = first;
    while(index != -1)
    {
        v.push_back(map[index]);
        index = map[index].next;
    }
    int round;
    if(every != 0)
        round = v.size()/every;
    for(int i = 1; i <= round ; ++i)
    {
        int beg = (i-1)*every;
        int end = i*every;
        reverse(v.begin()+beg, v.begin()+end);
    }
    for(vector<Person>::iterator s = v.begin(); s != v.end(); ++s)
    {
        if(s < v.end() - 1)
            printf("%05d %d %05d\n", (*s).addr, (*s).e, (*(s+1)).addr);
        else
            printf("%05d %d -1\n", (*s).addr, (*s).e);
    }

    return 0;
}
