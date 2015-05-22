#include <iostream>
#include <fstream>
#include <map>
using namespace std;

int main() {
    #ifndef ONLINE_JUDGE
        ifstream cin("i.txt");
        ofstream cout("o.txt");
        // freopen("i.txt", "r", stdin);
        // freopen("o.txt", "w", stdout);
    #endif

    int n, m;
    while(cin >> n >> m)
    {
    	int res = m % n - 1;
    	if (res == -1) 
    	{
    		res = n - 1;
    	}
    	cout << res << endl;
    }
    
    return 0;
}
