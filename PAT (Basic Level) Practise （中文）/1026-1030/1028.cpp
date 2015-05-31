#include <iostream>
#include <fstream>
#include <string>
using namespace std;
const int OLD = 1814*12*30 + 9 * 30 + 6;
const int YOUNG = 2014*12*30 + 9 * 30 + 6;
class Person
{
    public :
    char name[6];
    int yy, mm, dd;
    Person(){}
    int life()
    {
        return yy*12*30+mm*30+dd;
    } 
    
};
int main() {
    #ifndef ONLINE_JUDGE
//        ifstream cin("i.txt");
//        ofstream cout("o.txt");
         freopen("i.txt", "r", stdin);
         freopen("o.txt", "w", stdout);
    #endif
    int N;
    scanf("%d", &N);
    string oldName , youName;
    int old = OLD, you = YOUNG;
    
    int real = 0;
    for(int i = 0; i < N; ++i)
    {
        Person temp;
        scanf("%s %d/%d/%d", temp.name, &temp.yy, &temp.mm, &temp.dd);
        if(temp.life() >= OLD && temp.life() <= YOUNG)
        {
            real++;
            if(temp.life() >= old)
            {
                old = temp.life();
                oldName = temp.name;
            }
            if(temp.life() <= you)
            {
                you = temp.life();
                youName = temp.name;
            }
        }
    }
    if(real != 0)
        cout << real <<' ' << youName <<' '<< oldName << endl;
    else
        cout << 0;
    return 0;
}
