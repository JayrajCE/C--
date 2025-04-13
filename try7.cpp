#include <iostream>
#include <string>
using namespace std; 

class person
{
    public :
    string name;
    int age;
    string gender;
    person(string name , int age , string gender)
    {
        this -> name = name ;
        this -> age = age;
        this -> gender = gender;
    }
    person(person &p)
    {
         name = p.name;
         age = p.age;
         gender = p.gender;
    }

    void getinfo()
    {
        cout<<name<<" "<<age<<" "<<gender;
    }
};

int main()
{
    person p1("jayraj" , 19 , "male") , p2("apurva" , 17 , "female");
    p1.getinfo();
    cout<<endl;
    p2.getinfo();
    return 0;
}