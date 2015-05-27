//35min 17'
#include <iostream>
#include <fstream>
#include <string>
#include <cstring>
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

    char strPAT[100010];
     gets(strPAT);
     
     int istr=strlen(strPAT),numAT=0,numPAT=0,num=0;
     while(istr--)
     {
         if('T'==strPAT[istr]) numAT++;
        else if('A'==strPAT[istr]) numPAT+=numAT;
         else{ // if('P'==strPAT[istr])        
              num+=numPAT;
              if(num>=1000000007) num%=1000000007;
        }
    }
    
     printf("%d",num); 
     return 0;
}
