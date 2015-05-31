#include <iostream>
#include <fstream>
#include <cstdio>
using namespace std;
int main() {
    #ifndef ONLINE_JUDGE
        // ifstream cin("i.txt");
        // ofstream cout("o.txt");
        freopen("i.txt", "r", stdin);
        freopen("o.txt", "w", stdout);
    #endif
    int now = 0, max = 0;
    int N;
    scanf("%d", &N);
    int in[N];
    int first, last = 0, lastIndex = 0;
    for (int i = 0; i < N; ++i) 
    {
        scanf("%d", &in[i]);
        now += in[i];
        if (now > max) 
        {
            max = now;
            last = in[i];
            lastIndex = i;
        }
        if (now < 0) 
        {
            now = 0;
        }
    }
    if (max == 0) 
    {
        int index = -1;
        for(int i = 0; i < N; ++i)
        {  
            if(in[i] == 0)  
                index = i;  
        } 

        if (index == -1) 
        {
            first = in[0];
            last = in[N-1];
        }
        else
        {
            first = 0;
            last = in[index];
        }
    }
    else
    {   
        int tempMax = max;
        while(tempMax > 0 && lastIndex >= 0)
        {
            tempMax -= in[lastIndex];
            lastIndex--;
        }
        first = in[lastIndex+1];
    }
    
    printf("%d %d %d\n", max, first, last);
    return 0;
}
