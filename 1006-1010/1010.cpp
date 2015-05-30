#include <iostream>
#include <fstream>
#include <cstdio>
#include <vector>
using namespace std;
class F
{
    public :
        int xi, gen;
        F(int x, int g)
        {
            xi = x;
            gen = g;
            d();
        }
        bool iszero()
        {
            if(xi == 0 && gen == 0)
                return true;
            return false;
        }
        void d()
        {
            if(xi == 0 || gen == 0)
            {
                xi = 0;
                gen = 0;
                return;
            }
            xi *= gen;
            gen--;
        }
        void print(bool isall)
        {
            if(isall)
                printf("%d %d", xi ,gen);
            else
            {
                if(xi != 0 || gen != 0)
                    printf("%d %d", xi, gen);
            }
        }
};
int main() {
    #ifndef ONLINE_JUDGE
        // ifstream cin("i.txt");
        // ofstream cout("o.txt");
        freopen("i.txt", "r", stdin);
        freopen("o.txt", "w", stdout);
    #endif
    vector<F> v;
    int xi , gen;
    while(scanf("%d%d", &xi, &gen) != EOF)
    {
        F f(xi, gen);
        if(!f.iszero())
            v.push_back(f);
    }
    if(v.size() == 0)
    {
        printf("0 0\n");
    }
    else
    {
        for (std::vector<F>::iterator i = v.begin(); i != v.end(); ++i) 
        {
            if(i != v.begin())
                printf(" ");
            (*i).print(false);
        }
    }
    
    return 0;
}
