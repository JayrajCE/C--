#include <iostream>
#include <string>
using namespace std;

class person 
{
    public :
        string name ;
        int age;
        person(string name , int age)
        {
            this -> name = name;
            this -> age = age;
        }

};
class student : public person
{
    public :
        int rollno;
        void getinfo()
        {
            cout<<name<<" "<<age<<" "<<rollno;
        }
        student(string name , int age , int rollno):person(name , age)
        {
            this -> rollno = rollno;
        }
};        
int main()
{
    student s1("jayraj" , 19 , 23);
    s1.getinfo();

    return 0;

}