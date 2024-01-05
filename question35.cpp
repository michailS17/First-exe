#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    string name;
  cout<< "your name: ";
  cin>>name;
  for (int i = 0; i < name[i]; i++)
  {
    
    if(name[i] >= 'a' && name[i] <= 'z'){
        name[i]=name[i]-32;
    }
  }
  cout<<name;
  
}