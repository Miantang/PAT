#include <iostream>
#include <fstream>
#include <string>
using namespace std;
const int Xe[17] = {7,9,10,5,8,4,2,1,6,3,7,9,10,5,8,4,2};
const char M[11] = {'1', '0', 'X', '9', '8', '7', '6', '5', '4', '3', '2'};
int main() {
    #ifndef ONLINE_JUDGE
        ifstream cin("i.txt");
        ofstream cout("o.txt");
        // freopen("i.txt", "r", stdin);
        // freopen("o.txt", "w", stdout);
    #endif
    bool isAllpass = true;
    int N;
    cin >> N;
    for (int i = 0; i < N; ++i) 
    {
        string code;
        cin >> code;
        int sum = 0;
        bool isAllNum = true;
        for (int i = 0; i < 17; ++i) 
        {
            if (code[i] == 'X') 
            {
                isAllNum = false;
                break;
            }
            else
            {
                sum += (code[i] - '0') * Xe[i];
            }
        }
        if (isAllNum && (code[17] == M[sum%11]) ) 
        {
           continue;
        }
        else
        {
            cout << code << endl;
            isAllpass = false;
        }
    }
    if (isAllpass) 
    {
        cout << "All passed" << endl;
    }

    return 0;
}
