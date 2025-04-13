#include <iostream>
using namespace std;
class P
{
    public :
        void display(void)
        {
            cout<< "P" ;
        }
};

 class Q
 {
    public : 
    void display(void)
    {
        cout<<"Q";
    }
 }; 

class R : public P , public Q
{
    public :
        void display(void)
        {
            Q:: display();
        }

};

int main()
{
    R r;
    cout << r;
   return 0;
}