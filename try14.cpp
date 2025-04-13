#include <iostream>
using namespace std;

class product 
{
    int id ;
    string name;
    int quantity;
    int rate;
    int total ;
    public : 
        void add(int idno , string naam , int ratte)
        {
            id = idno;
            name = naam;
            rate = ratte;
        }
        int check(int idno)
        {
            if(id == idno)
            {
                return 1;
            }
        }
         void update()
         {
            quantity++;
            total = rate*quantity;
         }
         void display( product p[] , int no)
         {
            int i ;
            for(i=0 ; i<no ; i++)
            {
                cout<<p[i].id<<endl;
            }
         }

};


int main()
{
    product p[5];
    int id , i;
    char c ;
    string name;
    int rate;
    int productcount=0;
    do
    {
    cout << "Enter product ID : ";
    cin >> id;
    if(productcount == 0)
    {
        cout << "Enter product name : ";
        cin >> name;
        fflush(stdin);
        cout << "Enter product rate : ";
        cin >> rate;
        p[0].add(id , name , rate);
        productcount++;
    }
    else
    {   for(i=0 ; i<productcount ; i++)
        {
            if(p[i].check(id) == 1)
            {
                p[productcount].update();
                break;
            }
            else if(i == productcount)
            {
                cout << "Enter product name : ";
                cin >> name;
                fflush(stdin);
                cout << "Enter product rate : ";
                cin >> rate;
                p[productcount].add(id , name , rate);
                productcount++;
            }
        }    
    }
    cout << "Enter Y to countinue : ";
    cin >> c;
    }while(c == 'Y');
    p[0].display(p , productcount);
    return 0;
}