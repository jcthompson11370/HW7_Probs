// Programmer: John Thompson
// Description: HW7 Problem 4
// Date: 10/ 11/ 2022
// Note: Jacob Thompson and I worked on this problem together.

#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int totalResistance(double resistance[], int listSize);
int totalCurrent(double current[], int listSize);
int totalPower(double power[], int listSize);


const int ARRAY_SIZE = 5; // for five inputs

int main(){
  
  double resistance[ARRAY_SIZE] = {16, 27, 39, 56, 81};
  double current[ARRAY_SIZE];
  double power[ARRAY_SIZE];

  for(int i = 0; i < 5; i++){
    cin >> current[i];
  }

  for (int i = 0; i < 5; i++){
    power[i] = resistance[i] * pow(current[i], 2);
  }

  cout << setprecision(2);
  cout << setw(10) << "Resistance:"
       << setw(4) << ' '
       << setw(10) << "Current:"
       << setw(4) << ' '
       << setw(10) << "Power:" 
       << endl;

  for (int i = 0; i < 5; i++){

    cout << setw(10) << resistance[i]
       << setw(4) << ' '
       << setw(10) << current[i]
       << setw(4) << ' '
       << setw(10) << power[i] 
       << endl;  
  }

  int sumResistance;
  sumResistance = totalResistance(resistance, ARRAY_SIZE);
  cout << "Total: " << sumResistance;
  
  int sumCurrent;
  sumCurrent = totalCurrent(current, ARRAY_SIZE);
  cout << setw(14) << sumCurrent;

  double sumPower;
  sumPower = totalPower(power, ARRAY_SIZE);
  cout << setw(14) << sumPower;
 
}

int totalResistance(double resistance [], int listSize){

  int sumResistance = 0;

  for(int index = 0; index < listSize; index++){
    
    sumResistance += resistance[index];
  }
  return sumResistance;
}

int totalCurrent(double current[], int listSize){

  int sumCurrent = 0;

  for(int index = 0; index < listSize; index++){
    
    sumCurrent += current[index];
  }
  return sumCurrent;
}

int totalPower(double power[], int listSize){

  double sumPower = 0;  // need double to use sci notation

  for(int index = 0; index < listSize; index++){
    
    sumPower += power[index];
  }
  return sumPower;
}

