//sort 
#include <iostream>
#include <fstream>
#include <string>
#include <cmath>
#include <vector>
#include <algorithm>
using namespace std;
class Person
{
    public :
        int id;
        string name;
        int grade;
        Person(){}
        void print()
        {
            printf("%06d %s %d\n", id, name.c_str(), grade);
        }
};
bool cmp1(Person a, Person b)
{
    return a.id < b.id;
}
bool cmp2(Person a, Person b)
{
    if(a.name == b.name)
        return a.id < b.id;
    else
        return a.name < b.name;
}

bool cmp3(Person a, Person b)
{
    if(a.grade == b.grade)
        return a.id < b.id;
    else
        return a.grade < b.grade;
}
int main() {
    #ifndef ONLINE_JUDGE
        // ifstream cin("i.txt");
        // ofstream cout("o.txt");
        freopen("i.txt", "r", stdin);
        freopen("o.txt", "w", stdout);
    #endif
    int N, CMD;
    scanf("%d%d", &N, &CMD);
    std::vector<Person> v;
    for(int i = 0; i < N; ++i)
    {
        Person tem;
        char name[9];
        scanf("%06d%s%d", &tem.id, name, &tem.grade);
        tem.name = name;
        v.push_back(tem);
    }
    if(CMD == 1)
        sort(v.begin(), v.end(), cmp1);
    else if(CMD == 2)
        sort(v.begin(), v.end(), cmp2);
    else if(CMD == 3)
        sort(v.begin(), v.end(), cmp3);
    for (std::vector<Person>::iterator i = v.begin(); i != v.end(); ++i) 
    {
        (*i).print();
    }
    return 0;
}
