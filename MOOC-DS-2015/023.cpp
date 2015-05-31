//35min 17'
#include <iostream>
#include <fstream>
#include <stack>
#include <cstdlib>
#include <cstdio>
#include <algorithm>
using namespace std;

int main() {
    #ifndef ONLINE_JUDGE
        // ifstream cin("i.txt");
        // ofstream cout("o.txt");
        freopen("i.txt", "r", stdin);
        freopen("o.txt", "w", stdout);
    #endif
    int capacity, order, line, num;
    
    scanf("%d%d%d", &capacity, &order, &line);
    for (int i = 0; i < line; ++i) 
    {
        int index = 1;
        bool notstack = false;
        stack<int> st;
        for (int j = 0; j < order; ++j) 
        {
            scanf("%d", &num);
            while(st.empty() || st.top() != num)
            {
                st.push(index);
                if(st.size() > capacity)
                {
                    notstack = true;
                    break;
                }
                index++;
            }
            if (st.top() == num && st.size() >= 1) 
            {
                st.pop();
            }
        }
        if (notstack) 
            printf("NO\n");
        else
            printf("YES\n");
    }
    return 0;
}
