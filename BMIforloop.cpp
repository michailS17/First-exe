#include<iostream>
#include<string>
using namespace std;
float height,mass,bmi,p,user_number,x;
    string gender;
    int y=1, d;
int main()
    {
   cout<<"enter user number: ";
    cin>>user_number;
    for(int i=1;i<=user_number;i++)
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
       cout<<"any key to exit";
       cin>>p;

    } 
    }
    }