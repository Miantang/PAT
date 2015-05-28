#include <iostream>
#include <fstream>
#include <cstdio>
#include <string>
#include <map>
using namespace std;
#define min(A, B) (A<B)?A:B
 map<char, char*> WEEK = {{'A', "MON"}, {'B', "TUE"}, {'C', "WED"}, {'D', "THU"}, {'E', "FRI"}, {'F', "SAT"}, {'G', "SUN"} 
                          /*{'a', "MON"}, {'b', "TUE"}, {'c', "WED"}, {'d', "THU"}, {'e', "FRI"}, {'f', "SAT"}, {'g', "SUN"} */};
int main() {
    #ifndef ONLINE_JUDGE
        ifstream cin("i.txt");
        ofstream cout("o.txt");
        // freopen("i.txt", "r", stdin);
        freopen("o.txt", "w", stdout);
    #endif
    string line1, line2, line3, line4;
    bool first = true;
    cin >> line1 >>line2 >> line3 >> line4;
    size_t size1 = min(line1.size(), line2.size());
    for(size_t i = 0; i < size1; ++i)
    {
        if(line1[i] != line2[i])
            continue;
        else
        {
            if(first)
            {
                if(WEEK.find(line1[i]) != WEEK.end())
                {
                    printf("%s ", WEEK[line1[i]]);
                    first = false;  
                }
            }
            else
            {
                if(line1[i] >= '0' && line1[i] <= '9')
                {
                    printf("%02d", int(line1[i] - '0'));
                    break;
                }
                else if((line1[i] >= 'A' && line1[i] <= 'N'))
                {
                    printf("%d", int(line1[i] - 'A' + 10));
                    break;
                }
                else
                    continue;
            }
        }
    }
    printf(":");
    size_t size2 = min(line3.size(), line4.size());
    for(size_t i = 0; i < size2; ++i)
    {
        if(line3[i] != line4[i])
            continue;
        else
        {
            char c = line3[i];
            if((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
            {
                printf("%02d", i);
                break;
            }
                
        }
    }
    return 0;
}
