// Programmer: John Thompson
// Description: HW7 Problem 4
// Date: 10/ 04/ 2022

#include <iostream>
#include <cmath>

using namespace std;
int main(){
  
  int n;
  cout << "Enter test cases: ";
  cin >> n;    // number of test cases
  
  int count;
  cout << "Enter " << n << " variables: ";
  cin >> count;    //day numbers mixed
  
  int days = 0; // start from zero
  
  for (int i = 1; i < n; i++) {
    
    int a;  // variable for equation in "if" statement    
    cin >> a;
    
    if (a < count) {    //if "a" is less than number, then replace it
      days = i;
      count = a;
        }
    }
    cout << "The number of days to wait is: " << days << endl; //days to wait

    // NOTE: DELETE ALL COUT QUOTATIONS FOR KATTIS SUBMISSION!
  
  return 0;
}


