#include <iostream>
#include <fstream>
#include <string>
#include <cstdio>
#include <cmath>
using namespace std;
class Fra
{
    public :
        int u, d;
        Fra(){}
        Fra(int a, int b)
        {
            u = a;
            d = b;
        }
        void gcd()
        {
            int ul = u, dl = d;
            int res;
            if (dl == 0) 
            {
                res = 0;
                dl = 1;
            }else
                res = ul % dl;
            while(res != 0) 
            {
                ul = dl;
                dl = res;
                res = ul % dl;
            }
            u = u/dl; d = d/dl;
            if (u < 0 && d < 0) 
            {
                u = -u; d =-d;
            }else if ((u < 0 && d > 0) || (u > 0 && d < 0))
            {
                u = -abs(u);
                d = abs(d);
            }

        }
        void print(ostream& cout)
        {
            if (d == 0) 
            {
                cout << "Inf";
                return;
            }
            gcd();
            if (u == 0) 
            {
                cout << 0;
                return;
            }
            if (u / d < 0 || u <0) 
                cout << "(-";
            if(u/d != 0)
            {
               cout << abs(u/d); 
            }
            if (u%d != 0) 
            {
                if(u/d != 0)
                    cout << ' ';
                cout << abs(u%d) << '/' << abs(d);
            }
            if (u / d < 0|| u <0) 
                cout << ")";
        }
        friend Fra operator+(Fra& a, Fra& b)
        {
            return Fra(a.u*b.d + a.d*b.u, a.d * b.d);
        }   
        friend Fra operator-(Fra& a, Fra& b)
        {
            return Fra( a.u*b.d - a.d*b.u, a.d * b.d);
        }
        friend Fra operator*(Fra& a, Fra& b)
        {
            return Fra(a.u * b.u, a.d*b.d);
        } 
        friend Fra operator/(Fra& a, Fra& b)
        {
            return Fra(a.u * b.d, a.d*b.u);
        }      
};

int main() {
    #ifndef ONLINE_JUDGE
        ifstream cin("i.txt");
        ofstream cout("o.txt");
        freopen("i.txt", "r", stdin);
        // freopen("o.txt", "w", stdout);
    #endif
    Fra a, b;
    scanf("%d/%d %d/%d", &(a.u), &(a.d), &(b.u), &(b.d));
    a.print(cout); cout << " + "; b.print(cout); cout << " = "; (a+b).print(cout); cout << endl;
    a.print(cout); cout << " - "; b.print(cout); cout << " = "; (a-b).print(cout); cout << endl;
    a.print(cout); cout << " * "; b.print(cout); cout << " = "; (a*b).print(cout); cout << endl;
    a.print(cout); cout << " / "; b.print(cout); cout << " = "; (a/b).print(cout); cout << endl;

    return 0;
}
