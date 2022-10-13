// Programmer: John Thompson
// Description: HW7 Problem 4
// Date: 10/ 11/ 2022
// Note: Jacob Thompson and I worked on this problem together.

#include <iostream>
#include <cmath>

using namespace std;

int totalResistance(double resistance [], int listSize);


const int ARRAY_SIZE = 5; // for five inputs

int main(){

  
}

int totalResistance(double resistance [], int listSize){

  int totalResistance = 0;

  for(int index = 0; index < listSize; index++){
    totalResistance += resistance[index];
  }
  return totalResistance;
}
