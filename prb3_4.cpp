#include<iostream>
#include<vector>

using namespace std;
template<typename T> T Find_max(T array[])
{
    T max=array[0];
    int i;
    for(i=0 ; i<array.size() ; i++)
    {
        if(max>array[i])
        {
            max = array[i];
        }
    }
    cout<<"MAX : "<<max<<endl;
}
template<typename T> T Display(T array[])
{
    int i;
    for(i=0 ; i<array.size() ; i++)
    {
        cout<<array[i]<<" "<<endl;
    }
}
template<typename T> T Reverse(T array[])
{
    T Temp;
    int i , j;
    for(i=0, j=array.size() ; i<(array.size()\2); i++,j--)
    {
        Temp=array[i]
        array[i]=array[j];
        array[j]=Temp;
    }
    for(i=0 ; i<array.size() ; i++)
    {
        cout<<array[i]<<" "<<endl;
    }
}

int main()
{
    int i,x,choice1 , choice2;
    char c;
    float f;
    vector<int>array1;
    vector<float>array2;
    vector<char>array3;
    cout<<"Enter collection of integer(press 0 to stop)"<<endl;
    for(i=0;i!=0;i++)
    { 
        cin>>x;
        if(x==0)
        break;
        array1.push_back(x);
    }
    cout<<"Enter collection of floating point numbers(press 0 to stop)"<<endl;
    for(i=0;i!=0;i++)
    { 
        cin>>f;
        if(f==0)
        break;
        array2.push_back(f);
    }
    cout<<"Enter collection of integer(press enter to stop)"<<endl;
    for(i=0;i!='\n';i++)
    { 
        cin>>c;
        if(x==0)
        break;
        array3.push_back(c);
    }
    do
    {
        cout<<"Enter 1 to find max"<<endl;
        cout<<"Enter 2 to dislpay collection"<<endl;
        cout<<"Enter 3 to reverse the collcetion"<<endl;
        cout<<"Enter your choice : ";
        cin>>choice1;
    switch(choice1)
    {
        case 1:
        cout<<"Enter 1 for collection of intiger"<<endl;
        cout<<"Enter 2 for collection of float"<<endl;
        cout<<"Enter 3 for collection of char"<<endl;
        cout<<"Enter your choice : ";
        cin>>choice2;
        switch(choice2)
        {
            case 1:
            Find_max(array1);
            break;
            case 2:
            Find_max(array1);
            break;
            case 3:
            Find_max(array3);
            default :
            cout<<"INVALID CHOICE"<<endl;
        }
        break;
        case 2:
        cout<<"Enter 1 for collection of intiger"<<endl;
        cout<<"Enter 2 for collection of float"<<endl;
        cout<<"Enter 3 for collection of char"<<endl;
        cout<<"Enter your choice : ";
        cin>>choice2;
        switch(choice2)
        {
            case 1:
            Dislpay(array1);
            break;
            case 2:
            Dislpay(array1);
            break;
            case 3:
            Dislpay(array3);
            cout<<"INVALID CHOICE"<<endl;
        }
        break;
        case 3:
        cout<<"Enter 1 for collection of intiger"<<endl;
        cout<<"Enter 2 for collection of float"<<endl;
        cout<<"Enter 3 for collection of char"<<endl;
        cout<<"Enter your choice : ";
        cin>>choice2;
        switch(choice2)
        {
            case 1:
            Reverse(array1);
            break;
            case 2:
            Reverse(array1);
            break;
            case 3:
            Reversew(array3);
            cout<<"INVALID CHOICE"<<endl;
        }
        break;
    }
    }while(choice1 != 0)
        
    return 0;
}