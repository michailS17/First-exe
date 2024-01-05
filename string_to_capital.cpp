#include <iostream>
#include <cstring>
using namespace std;

int main() {
  string str;

  cout << "Enter a string: ";
  cin >> str;

  for (int i = 0; i < str[i]; i++) {
    if (str[i] >= 'a' && str[i] <= 'z') {
      str[i] = str[i] - 32;
    }
  }

  cout << "The string in upper case is: " << str << endl;

  return 0;
}
