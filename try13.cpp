#include <iostream>
using namespace std;

class Student
{
     public : 
    int rollno;
    string name;
    int marks[3];
    Student()
    {
        rollno=0;
        name = "N/a";
    }
    Student(Student &s)
    {
         s.rollno = rollno;
         s.name  = name; 
         s.marks[0] = marks[0];
         s.marks[0] = marks[0];
         s.marks[0] = marks[0];
    }
    void display()
    {
        
            cout <<"Name : " << name << endl;
            cout << "Roll number : " << rollno << endl;
            cout << "Marks" << endl;
            cout<< "Maths : " << marks[0] << endl;
            cout<< "Physics : " << marks[1] << endl;
            cout<< "Chemistry : "  << marks[2] << endl;
        
    }
    void avg()
    {
            int average;
            average = (marks[0]+marks[1]+marks[2])/3;
            cout << "Average : " << average << endl; 
    }   
};
void get_deatils(Student &s);
int student_check(Student* s);
int main()
{
    int i;
    Student s[3];
    for( i = 0 ; i<3 ; i++)
    {
        cout << "Student " << i << endl;
        get_deatils(s[i]);
    }
    cout<< s[0].name << endl;
     cout<< s[1].name << endl;
      cout<< s[2].name << endl;

   // student_check(s);
    return 0; 
}
int student_check(Student* s)
    {
        int   i , rollno;
        cout << "Enter student roll number to print his/her deatils" << endl;
        cin >> rollno;
        {
            for(i = 0 ; i<3 ; i++)
            {
                if(s[i].rollno == rollno)
                {rty
                    s[i].display();
                    s[i].avg();
                    return 0;
                }
                else if(i==4)
                {
                    cout<<"No student with given roll number found";
                    return 0;
                }
            }
        }
    }
    void get_deatils(Student &s)
    {   
        int rollno , marks[3];
        string name;
        cout << "Enter name : ";
        cin >> s.name;
        cout << "Enter  roll number : ";
        cin >> s.rollno;
        cout << "Enter  maths marks : ";
        cin >> s.marks[0];
        cout << "Enetr physics marks : ";
        cin >> s.marks[1];
        cout << "Enter chemistry marks : ";
        cin >> s.marks[2];
        Student(s);
    }