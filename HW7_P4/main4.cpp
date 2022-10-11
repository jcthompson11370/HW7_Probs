// Programmer: John Thompson
// Description: HW7 Problem 4
// Date: 10/ 04/ 2022

#include <iostream>
#include <cmath>

using namespace std;

int indexSmallestElement(const int list[], int listSize){

  int minIndex = 0;

  int n;
  cout << "enter n: ";
  cin >> n;

  const int Narray = n;

  int listA[Narray];



  for(int n = 1; n < listSize; n++){

    int  
    if (list[minIndex] > list[n])
      minIndex = n;
  }

  
  return minIndex;
}