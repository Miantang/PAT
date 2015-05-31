#include <iostream>
#include <fstream>
#include <cstdio>
#include <cstdlib>
using namespace std;
const int ONE[11]  = {0, 1, 11, 111, 1111, 11111, 111111, 1111111, 11111111, 111111111, 111111111};
int main() {
    #ifndef ONLINE_JUDGE
        // ifstream cin("i.txt");
        // ofstream cout("o.txt");
        freopen("i.txt", "r", stdin);
        freopen("o.txt", "w", stdout);
    #endif

    int A, singleA, B, singleB;
    scanf("%d%d%d%d", &A, &singleA, &B, &singleB);
    int indexA = 0, indexB = 0;
    if(singleA != 0)
    {
        while(A != 0)
        {
            if((A%10) == singleA)
                indexA++;
            A = A/10;
        }
    }
    if(singleB != 0)
    {
        while(B != 0)
        {
            if((B%10) == singleB)
                indexB++;
            B = B/10;
        }
    }
    int res = singleA*ONE[indexA] + singleB*ONE[indexB];
    printf("%d\n", res);
    return 0;
}
