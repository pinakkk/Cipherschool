#include <iostream>
using namespace std;
int main(){
  int value; 
  cout << "Enter a value: ";
  cin >> value;
  int square = value * value;

  cout << "The Square of " << value << " is: " << square; 
  
  return 0;
}