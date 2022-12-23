#include<iostream>
using namespace std;
int main()
{
    int x[10],sum=0,i;
    cout<<"Enter Array Numbers: ";
    for(i=0;i<10;i++)
    {
        cin>>x[i];
    }
    cout<<"Sum of Array Numbers: ";
    for(i=0;i<10;i++)
    {
        sum=sum+x[i];
    }
    cout<<"sum is =  " <<sum;
    cout<<endl;
    return 0;

}