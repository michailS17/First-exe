#include<iostream>

using namespace std;

int main() 
{
  int *number {nullptr};
  number = new int;
    *number = 77;
    cout << *number;

    delete number;
    number = nullptr;
    

return 0;
}