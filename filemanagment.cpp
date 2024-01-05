#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    char names[50];
    cout<<"write your name and age: ";
    cin.getline(names, 50);

    ofstream myfile("names.txt", ios::ate);
    myfile<<names;
    myfile.close();
    cout<< "successful"<<endl;
    char array[50];
    ifstream obj("names.txt");
    obj.getline(array, 50);
    cout<< array;
    obj.close();
    
    return 0;
}