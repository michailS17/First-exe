#include<iostream>
#include<string.h>
#include<cstring>
using namespace std;
int main()
{
char name[11];
string input[10];
char id[50][50]={(("ets1070/14"||"michail"),("ets1043/14"||"mahider"),"ets1045/14","ets1030/14","ets0997/14")};
cout << "enter an id or name: ";
cin>>name[11];
for(int i=0; i<6; i++)
{
if(!strcmp (id[i], name))
{
    cout<<"your id is " << id[i];
    break;
        
}
}
return 0;
}