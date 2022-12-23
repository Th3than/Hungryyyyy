#include <iostream>
using namespace std;
int age,tall,bou;
string cha;
int main(){
    cout << "Enter your age: ";
    cin >> age;
    if (age <= 25)
    {
        cout <<"Enter your height: ";
        cin >> tall;
        if (tall < 100)
        {
            cha = "Chopper";
        }else if (tall <180)
        {
            cha = "Usopp";
        }else{
            cout <<"Enter your bounty: ";
            cin >> bou;
            if (bou > 1100000000)
            {
            cha = "Zoro";
            }else{
                cha = "Sanji";
            }
        }
        
    }else if (age <= 60)
    {
        cout <<"Enter your bounty: ";
        cin >> bou;
        if (bou > 500000000)
        {
            cha ="Jinbe";
        }else{
            cha ="Franky";
        }
        
    }else{
        cha = "Brook";
    }
    cout <<"Your character = "<<cha;
}
