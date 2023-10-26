#include<iostream>
#include<string>
using namespace std;

class characters
{
    
    int power;
    public:
    char level;
    int attack;

    int getPower()
    {
        return power; 
    }

    void setPower(int newPower)
    {
        power=newPower;
    }
};


int main()
{
    string Name;
    cout<<"Enter player name: ";
    cin>>Name;
    // Player 1 object 
    characters string;

    string.level = 'A';
    string.setPower(1000);
    int setPower = string.getPower();
    string.attack = 800;

    cout<<"--------------------------------"<<endl;
    cout<<"Player Name: "<<Name<<endl;
    
    cout<<"Player Level: "<<string.level<<endl;
    cout<<"Player Power: "<<setPower<<endl; 
    cout<<"Player Attack: "<<string.attack<<endl; 
    cout<<"--------------------------------"<<endl;




}