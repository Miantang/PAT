#include <iostream>
#include <fstream>
#include <cstdio>
#include <vector>
using namespace std;
class Uni
{
    public :
        int xi, n;
        bool isfirst = false;
        Uni(){}
        Uni(int _xi, int _n)
        {
            xi = _xi;
            n = _n;
        }
        void d()
        {
            if (n == 0) 
            {
                n = 0;
                xi = 0;
            }
            else
            {
               xi = xi * n; 
               n = n - 1;
            }
        }
        void print()
        {
            d();
            if(xi == 0 && n == 0)
            {
            }
            else
            {
                printf("%d %d", xi, n);
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

    vector<Uni> v;
    int xi, n;
    while(scanf("%d %d", &xi, &n) != EOF)
    {
        Uni temp(xi, n);
        v.push_back(temp);
    }
    bool flag = false;
    for (std::vector<Uni>::iterator i = v.begin(); i != v.end(); ++i) 
    {
        if (v.size() == 1 && ( (*i).n == 0)) 
        {
            printf("0 0");
            break;
        }
        if((*i).n != 0)
        {
           if (flag) 
                printf(" ");
            else
                flag = true;
            (*i).print(); 
        }
        
    }
    return 0;
}
