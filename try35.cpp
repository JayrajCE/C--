#include <iostream>
using namespace std;

class Employee_Info
{
    int ID;
    string Name;
    double  Basic_Salary;
    double  Total_Salary;
    double Bonus;
    inline void calculate_salary();
    Employee_Info()
    {
        Name = "N.A";
        Basic_Salary = 0.00;
        Total_Salary = 0.00;
        Bonus = 500; 
    }

    public : 
    void get_details();
    void display_details();
    void set_bonus();
    int sereach(int);
};

int main()
{
    Employee_Info emp[10];
    int choice , Employee_count=0 , Temp_id , i;
    do
    {
        cout<<"Enter 1 to add Employee details"<<endl;
        cout<<"Enter 2 to update Employee bonus"<<endl;
        cout<<"Enter 3 to display Employee data"<<endl;
        cout<<"Enter 0 to exit"<<endl;
        cout<<"Enter your choice : ";
        cin>>choice;
        switch(choice)
        {
            case 1:
                if(Employee_count == 0)
                {
                    emp[Employee_count].get_details();
                    Employee_count++;
                    break;
                }
                else
                {
                    for(i=0 ; i<10 ; i++)
                    {
                        if(emp[i].sereach(id))
                        {
                            cout<<"ERROR : ID alredy exists"<<endl;
                            break;
                        }
                        else if(i==9)
                        {
                            emp[Employee_count].get_details();
                            Employee_count++;
                        }
                    }
                    break;
                }
            case 2 :
                cout<<"Enter Employee ID to update bonus : ";
                cin>>Temp_id;
                for(i=0 ; i<10 ; i++)
                {
                    if(emp[i].sereach(id))
                    {
                        emp[i].update_bonus();
                        break;
                    }
                    else if(i==9)
                    {
                        cout<<"ERROR : NO Employee ID found"<<endl;
                    }
                }
                break;
            case 3 : 
                for(i=0 ; i<10 ; i++)
                {
                    emp[i].display();
                }
                break;

        }
    } while (choice!=0);
    
}