#include <cstdio>
#include <fstream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
    #ifndef ONLINE_JUDGE
//        ifstream cin("i.txt");
//        ofstream cout("o.txt");
         freopen("i.txt", "r", stdin);
         freopen("o.txt", "w", stdout);
    #endif
     vector<int> v;
     int N,  tem;
     float p;
     scanf("%d%f", &N, &p);
     for(int i = 0; i < N; ++i)
     {
        scanf("%d", &tem);
        v.push_back(tem);
     }
     int res = 1;
     sort(v.begin(), v.end());
     for (std::vector<int>::iterator i = v.begin(); i != v.end(); ++i) 
     {
        if(i + res - 1 >= v.end())
            break;
         for (std::vector<int>::iterator j = i + res - 1; j != v.end(); ++j) 
         {
             if (*j <= *i * p) 
             {
                 if(res < j - i + 1)
                 {
                    res = j - i + 1;
                 }
             }
             else
                break;
         }
     }
     printf("%d\n", res);
    return 0;
}
