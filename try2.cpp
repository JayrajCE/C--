#include <iostream>
using namespace std;
class state
{
    public :

    void display();
    private :

    void gujrat()
    {
        cout<<"I am in gujrat\n";
         delhi();
    }
    void delhi()
    {
        cout<<"I am in delhi\n";
        up();
    }
    void up()
    {
        cout<<"I am in up\n";
    }  
};

void state :: display()
{
    gujrat();
}

int main()
{
    state s1;
    s1.display();
}
