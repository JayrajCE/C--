#include <iostream>
using namespace std;

class points
{   public :
    int x;
    int y;
    int z;
    points (int x , int y , int z)
    {
        this -> x = x;
        this -> y = y;
        this -> z = z;
    }
    points(points &obj)
    {
        x = obj.x;
        y = obj.y;
        z = obj.z;
    }
    void show()
    {
        cout << x <<" "<< y <<" "<< z;
    }
    void neagte()
    {
        this -> x =  - (this -> x);
        this -> y =  - (this -> y);
        this -> z =  - (this -> z);
    }
};
int main() 
{
    points x1(2,5,8);
    x1.neagte();
    x1.show();
    cout << endl;
    points x2(x1);
    x2.show();
    
}
