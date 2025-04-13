#include <iostream>
#include <string>
using namespace std;

class constructor
{
    public :
    string name;
    int age;
    
    constructor()
    {
        cout << "I am inside constructor";
    }
    constructor(string name , int age)
    {
        name = name;
        age = age;
        cout<<"\n"<<name<<"\n"<<age;
    }
};

int main()
{
    constructor c1("Jayraj" , 19);
   constructor();
    cout<< "\n"<<c1.name<< "\n"<<c1.age;

    return 0;
}