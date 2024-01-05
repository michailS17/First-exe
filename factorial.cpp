#include<iostream>
using namespace std;
int main()
{
    long n,product,i,b;
    cout<<"write a positive integer: ";
    cin>>n;
    if(n<0)
    {
        cout<<"error!!! factorial cant be negative";
    }
    else for(int i=n-1;i>0; i--)
    n=n*(n-1);
    product=n*i;
    n=product;
    cout<<product;
    cin>>b;
    
    return 0;

}