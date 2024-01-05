#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main()
{
    fstream myfile;
    myfile.open("selina.txt", ios::out);//write
    if (myfile.is_open()){
        cout << myfile.tellg() << endl;
        myfile.close();       
    }/*
    //myfile.open("selina.txt", ios::app);//append
    //if (myfile.is_open()){
     //   myfile << "this is the appended text"; 
    //    myfile.close();       
    //}*/

    fstream myfile;
    myfile.open("selina.txt", ios::in);// read
    string line;
    myfile.seekg(2) ;
    getline(myfile, line);
    cout << line << endl;
    
    myfile.close();
    return 0; 
}
