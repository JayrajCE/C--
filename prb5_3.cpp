#include<iostream>
using namespace std;
class Cordinates
{       public:
        int x,y;
        void input()
        {
            cout<<"Enter x and y coordinates e.g(x y) : ";
            cin>>x>>y;
        }
        void operator+(Cordinates &c1)
        {
            Cordinates c;
            c.x=x+c1.x;
            c.y=y+c1.y;
            cout<<"X cordinates : "<<c.x<<endl;
            cout<<"Y cordinates : "<<c.y<<endl;
        }
        void operator-(Cordinates &c1)
        {
             Cordinates c;
            c.x=x-c1.x;
            c.y=y-c1.y;
            cout<<"X cordinates : "<<c.x<<endl;
            cout<<"Y cordinates : "<<c.y<<endl;;

        }
        void operator==(Cordinates &c1)
        {
           if(x==c1.x && y==c1.y)
                    cout<<"The cordinates are equal"<<endl;

            else
                 cout<<"The cordinates are not equal"<<endl;

        }
};
int main()
{

    Cordinates n1,n2;
    n1.input();
    n2.input();
    n1+n2;
    n1-n2;
    n1==n2;
}
