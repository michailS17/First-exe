#include<iostream>
#include<string>
using namespace std;

int main() 
{
 int n=5;
 for (int row = 0; row < 2*n; row++)
 {
    int total=row > n ? 2*n-row-1: row;
    for (int col = 0; col <= n ; col++)
    {
        for (int space = 0; space < total; space++)
        {
            cout<<"  ";
        }
        
    for (int col = 5; col < n-row+1; col++)
    {
        cout<<col<<" ";
    }
    }
    
    
    cout<<endl;
 }
 
}