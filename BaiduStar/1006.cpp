#include <iostream>
#include <fstream>
#include <cmath>
#include <algorithm>
#include <sstream>
using namespace std;
class Point 
{
    public : 
        double x, y;
};
double dis(Point& a, Point& b)
{
    return sqrt(pow(a.x-b.x, 2.0) + pow(a.y-b.y, 2.0));
}
class Rect
{
    public :
        Point a, b, c, d;
        double duijiao()
        {
            return sqrt(pow(a.x-c.x, 2.0) + pow(a.y-c.y, 2.0));
        }
};
int main() {
    #ifndef ONLINE_JUDGE
        ifstream cin("i.txt");
        ofstream cout("o.txt");
        freopen("i.txt", "r", stdin);
        freopen("o.txt", "w", stdout);
    #endif
    int T;
    scanf("%d", &T);
    for(int i = 1; i <= T; ++i)
    {
        int N;
        scanf("%d", &N);
        vector<Point> v;
        for(int j = 0; j < N; ++j)
        {
            for(int k = 0; k < 4; ++k)
            {
                Point p;
                scanf("%d%d", &p.x, &p.y);
                v.push_back(p);
            }
        }
        size_t size = v.size();
        for(size_t s = 0; s < size; ++s)
        {
            for(size_t r = 1; r < size; ++r)
            {
                double dist = dis(v[s], v[r]);
                if(dist > max)
                    max = dist;
            }
                
        }
    }
    return 0;
}
