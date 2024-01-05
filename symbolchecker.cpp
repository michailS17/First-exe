#include <iostream>
using namespace std;

int main() {
  char c;

  cout << "Enter a character: ";
  cin >> c;

  if (c >= 'A' && c <= 'Z') {
    cout << c << " is a capital letter." << endl;
  }
  else if (c >= 'a' && c <= 'z') {
    cout << c << " is a small letter." << endl;
  }
  else if (c >= '0' && c <= '9') {
    
    if (c % 2 == 0) {
      cout << c << " is an even number." << endl;
    }
    else {
      cout << c << " is an odd number." << endl;
    }
  }
  else if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
           c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') {
    cout << c << " is a vowel." << endl;
  }
  else {
    cout << c << " is a consonant." << endl;
  }

  return 0;
}
