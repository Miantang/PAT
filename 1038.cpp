//30
#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
#include <cstdio>
#include <algorithm>
using namespace std;

int main() {
    #ifndef ONLINE_JUDGE
        ifstream cin("i.txt");
        ofstream cout("o.txt");
        // freopen("i.txt", "r", stdin);
        // freopen("o.txt", "w", stdout);
    #endif

    int M, N, score;
    cin >> M;
    std::vector<int> scores, countScores;
    for (int i = 0; i < M; ++i) 
    {
        cin >> score;
        scores.push_back(score);
    }
    cin >> N;
    for (int i = 0; i < N; ++i) 
    {
        cin >> score;
        int count = 0;
        vector<int>::iterator index = scores.begin();
        index = find(index, scores.end(), score);
        while(index != scores.end())
        {
            count++;
            index = find(index+1, scores.end(), score);
        }
        countScores.push_back(count);
    }
    
    for (std::vector<int>::iterator i = countScores.begin(); i != countScores.end(); ++i) 
    {
        cout << *i;
        if(i == countScores.end() - 1)
            cout << endl;
        else
            cout << ' ';
    }

    return 0;
}
