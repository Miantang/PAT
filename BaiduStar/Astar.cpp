#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>
#include <sstream>
using namespace std;
const int N = 1001;
const int M = 51;
int main() {
    #ifndef ONLINE_JUDGE
        ifstream cin("i.txt");
        ofstream cout("o.txt");
        freopen("i.txt", "r", stdin);
        freopen("o.txt", "w", stdout);
    #endif

    int T, inN, inM;
    int a[N], b[N],c[N],d[N];
    int A, B, C, D;
    std::vector<string> v;
    std::vector<int> nums;
    bool flag = true;
    string value;
    int s = 0;
    scanf("%d", &T);
    for (int m = 1; m <= T; ++m) 
    {
        printf("Case #%d:\n", m);
        scanf("%d %d", &inN, &inM);
        
        for (int i = 0; i < inN; ++i) 
        {
            scanf("%d.%d.%d.%d", &a[i], &b[i],&c[i],&d[i]);
        }
        for (int i = 0; i < inM; ++i) 
        {
            scanf("%d.%d.%d.%d", &A, &B,&C,&D);
            v.clear();
            for (int j = 0; j < inN; ++j) 
            {
                stringstream temp;
                temp << (a[j]&A) <<"."<< (b[j]&B) << "."<<(c[j]&C) << "."<<(d[j]&D);
                value = temp.str();
                v.push_back(value);
            }
            sort(v.begin(), v.end()); 
            v.erase( unique(v.begin(), v.end()) , v.end());
            printf("%d\n", v.size());
            v.clear();
        }
    }
    
    return 0;
}
