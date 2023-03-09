// a while loop which calculates bmi for one person ,multiple, or known no of people 
#include<iostream>
#include<string>
using namespace std;
float height,mass,bmi,p,user_number,x;
    string gender;
    int y=1, d;
int type_1()
    {
    cout<<"female or male: ";
    cin>>gender;
    cout<<"your mass: ";
    cin>>mass;
    cout<<"your height: ";   
    cin>>height;               
    bmi=mass/(height*height);
    
    if((gender=="male" && bmi>25) || (gender=="female" && bmi>23))  //string must be in double quotation
    {
       cout<<"overweight"<<endl;
    }
    else if((gender=="male" && bmi<20 )||( gender=="female" && bmi<18))
    {
       cout<<"underweight"<<endl;
    }
    else if((gender=="male" && bmi>=20 &&bmi<=25) || (gender=="female" && bmi>=18&&bmi<=23))
    {
       cout<<"healthy"<<endl;
    }
    else 
    {
       cout<<"error try again!";
    }
    cout<<"enter any key to exit :P";
    cin>>p;
    }
 
int type_2()
    {
   cout<<"enter user number: ";
    cin>>user_number;
    for(int i=1;i<=user_number;i++)
    {
   
    l: cout<<"female or male: ";
    cin>>gender;
    cout<<"your mass: ";
    cin>>mass;
    cout<<"your height: ";   
    cin>>height;               
    bmi=mass/(height*height);
    
    if((gender=="male" && bmi>25) || (gender=="female" && bmi>23))  //string must be in double quotation
    {
       cout<<"overweight"<<endl;
    }
    if((gender=="male" && bmi<20 )||( gender=="female" && bmi<18))
    {
       cout<<"underweight"<<endl;
    }
    if((gender=="male" && bmi>=20 &&bmi<=25) || (gender=="female" && bmi>=18&&bmi<=23))
    {
       cout<<"healthy"<<endl;
    }
    else 
    {
       cout<<"error try again!";
       goto l;
    }
    }
    }
    int type_3()
    {
      while(y==1)
   {
    cout<<"female or male: ";
    cin>>gender;
    cout<<"your mass: ";
    cin>>mass;
    cout<<"your height: ";   
    cin>>height;               
    bmi=mass/(height*height);
    
    if((gender=="male" && bmi>25) || (gender=="female" && bmi>23))  //string must be in double quotation
    {
       cout<<"overweight"<<endl;
    }
    if((gender=="male" && bmi<20 )||( gender=="female" && bmi<18))
    {
       cout<<"underweight"<<endl;
    }
    if((gender=="male" && bmi>=20 &&bmi<=25) || (gender=="female" && bmi>=18&&bmi<=23))
    {
       cout<<"healthy"<<endl;
    }
    else
    {
       cout<<"error try again!";
    }
    cout<<" type 1 to continue and any other key to quit ";
    cin>>y;

    }}
 
int main()
{
    
    cout<<" type 1 for one person \n";
    cout<<" type 2 for specific people "<<endl;
    cout<<" type 3 for multiple people "<<endl;
    cin>>x;
    if(x==1)
    {
       type_1();
    }
    else if(x==2)
    {
      type_2();
    }
    else
    {
      type_3();
    }
          return 0;
}