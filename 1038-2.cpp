#include <iostream>
#include <fstream>
using namespace std;

int main() {
    #ifndef ONLINE_JUDGE
        ifstream cin("i.txt");
        ofstream cout("o.txt");
        // freopen("i.txt", "r", stdin);
        // freopen("o.txt", "w", stdout);
    #endif

    int M, K, score;
    cin >> M;
    int arr[102] = {0};

    for (int i = 0; i < M; ++i) 
    {
        cin >> score;
        arr[score]++;
    }
    cin >> K;
    for (int i = 0; i < K; ++i) 
    {
        cin >> score;
        cout << arr[score];
        (i != K-1) ? cout << ' ' : cout << endl;
    }
    return 0;
}
