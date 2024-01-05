#include<iostream>
#include<string>
using namespace std;
int main()
{
  /*int value1 = 5 , value2 = 15;
  int *p1, *p2;
  p1=&value1;
  p2=&value2;
  *p1= 10;
  *p2= *p1;
  p1 = p2;
  *p1= 20;
  cout<<"value1==" << value1;
  cout<<"value2==" << value2;
  cout<< sizeof(p1) << sizeof(*p1) << sizeof(&p1)<< endl;
  return 0;
  int i=5, j=10 ,*ptr, **pptr;
  ptr=&i; pptr=&ptr;
  cout<<++*ptr<<" "<<ptr<<endl;
  return 0;*/
  int num[6]={1,2,3,4,5,6};
  int *ptr= num; // address of the first element equal to array address
  cout<<ptr<<endl;  // address of the first element equal to array address
  cout<<&num[0]<<endl;
  cout<<ptr+1<<endl;
  cout<<num[0]+1<<endl;
  cout<<&num[0]+1<<endl;
  return 0;

}
