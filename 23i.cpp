#include<iostream>
using namespace std;
int main()
{
    int x,y;
    cout<<"Enter two Numbers: ";
    cin>>x >>y;
    if(x>y)
    {
        cout<<"Maximum number is " <<x;
    }
    else
    {
        cout<<"Maximum number is " <<y <<endl;
    }
    return 0;
}