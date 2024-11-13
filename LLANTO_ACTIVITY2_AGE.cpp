#include <iostream>

using namespace std;

int main()
{
  int response;
  cout << "What is your age?:  ";
  cin >> response;
  if (response < 16) { 
    cout << " You are too young to drive";
}
  else if (response <= 16 ) {
    cout <<  " Better clear the road";
}
  else if (response >16) {
    cout << "You are getting pretty old";
}
  return 0;
}
