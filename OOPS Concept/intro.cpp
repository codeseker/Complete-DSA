#include <iostream>
// #include "Hero.cpp"
using namespace std;

class Hero
{

    //properties
private:
    int health;

public:
    char level;

    Hero(){
        cout<<"Deafult constructor called"<<endl;
    }

    // parameterised constructor
    Hero(int health, char ch)
    {
        this->health = health;
        this->level = ch;
    }
    Hero(Hero& temp)
    {
        this->health = temp.health;
        this->level = temp.level;
    }

    // getter
    int getHealth()
    {
        return health;
    }

    // setter
    void setHealth(int h)
    {
        health = h;
    }
    void print()
    {
        cout << "Health is: " << health << endl;
        cout << "Level is: " << level << endl;
    }
};
int main()
{

    Hero a(90, 'A');
    a.print();

    // copy constructor
    Hero b(a);
    b.print();
















    // static
    // Hero Paul;
    // cout<<"Health is: "<<Paul.getHealth()<<endl;
    // cout<<"Level is: "<<Paul.level<<endl;

    // // dynamically
    // Hero* King = new Hero;
    // cout<<"Health is: "<<(*King).getHealth()<<endl;
    // cout<<"Level is: "<<(*King).level<<endl;

    // cout<<"Health is: "<<King->getHealth()<<endl;
    // cout<<"Level is: "<<King->level<<endl;
    // // Hero Paul;

    // // cout<<"Health is: "<<Paul.getHealth()<<endl;

    // // // usee setter
    // // Paul.setHealth(90);
    // // cout<<"health is: "<<Paul.getHealth()<<endl;

    return 0;
}