#include<iostream>
using namespace std;
int main()
{
int voltage[2]={89,75};
double slopes[2]={11.63,13.98};     //declaring an array and initialization
char codes[2]={'f','g'};
cout<<voltage[0]<<"\t";
cout<<slopes[1]<<"\t";
cout<<codes[1]<<"\t";
for(int i=0; i<10; i++) 
{
int speed[9]={1,2,3,4,5,6,7,8,9};
cout<<speed[i]<<"\t";
}
return 0;
}
