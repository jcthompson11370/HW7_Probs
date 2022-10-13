// Programmer: John Thompson
// Description: HW7 Problem 4
// Date: 10/ 11/ 2022
// Note: Jacob Thompson and I worked on this problem together.

#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int totalResistance(double resistance [], int listSize);
int totalCurrent(double current[], int listSize);
int totalPower(double power[], int listSize);


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

int totalCurrent(double current[], int listSize){

  int totalCurrent = 0;

  for(int index = 0; index < listSize; index++){
    
    totalCurrent += current[index];
  }
  return totalCurrent;
}

int totalPower(double power[], int listSize){

  double totalPower = 0;  // need double to use sci notation

  for(int index = 0; index < listSize; index++){
    
    totalPower += power[index];
  }
  return totalPower;
}

