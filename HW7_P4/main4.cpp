// Programmer: John Thompson
// Description: HW7 Problem 4
// Date: 10/ 04/ 2022

#include <iostream>
#include <cmath>

using namespace std;
int main(){
  
  int n;
  cin >> n;    // number of test cases
  
  int count;
  cin >> count;    //day numbers mixed
  
  int days = 0; // start from zero
  
  for (int i = 1; i < n; i++) {
    
    int a;            
    cin >> a;
    
    if (a < count) {    //if a is less than number, then replace it
      days = i;
      count = a;
        }
    }
    cout << days; //days to wait
  
  return 0;
 
}


