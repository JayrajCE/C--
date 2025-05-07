#include<iostream>
using namespace std;

int main()
{
    int Number_of_trials;
    cin>> Number_of_trials;
    while(Number_of_trials--)
    {
        int Pruchase_price,Rent_price;
         cin>>Pruchase_price;
         cin>>Rent_price;
         cout<<(Pruchase_price-1)/Rent_price<<endl;
    }
    return 0;
    
}