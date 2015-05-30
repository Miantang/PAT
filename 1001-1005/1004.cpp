#include <iostream>
#include <fstream>
#include <cstdio>
#include <algorithm>
using namespace std;
class Stu
{
    public : 
        string name, id;
        int score;
        Stu(){}
        Stu(string a, string b, int c)
        {
            name = a;
            id = b;
            score = c;
        }
        void print(ostream& cout)
        {
            cout << name << ' ' << id << endl;
        }
};
bool cmp(const Stu& a, const Stu& b)
{
    return a.score < b.score;
}
int main() {
    #ifndef ONLINE_JUDGE
        ifstream cin("i.txt");
        ofstream cout("o.txt");
        // freopen("i.txt", "r", stdin);
        // freopen("o.txt", "w", stdout);
    #endif
    int N;
    cin >> N;
    vector<Stu> v;
    for(int i = 0; i < N; ++i)
    {
        Stu s;
        cin >> s.name >> s.id >> s.score;
        v.push_back(s);
    }
    sort(v.begin(), v.end(), cmp);
    if(N != 0)
    {
        (*(v.end()-1)).print(cout);
        (*v.begin()).print(cout);
    }
        

    return 0;
}
