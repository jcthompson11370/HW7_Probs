// Programmer: John Thompson
// Description: HW7 Problem 2
// Date: 10/ 04/ 2022


// Write a function named time() that has an integer parameter named seconds and three integer reference parameters named hours, mins, and secs. The function is to convert  the  passed  number  of  seconds  into  an  equivalent  number  of  hours,  minutes,  and  seconds.  Using  the  reference  parameters,  the  function  should  alter  the  arguments  in  the  calling  function.//

#include <iostream>
#include <cmath>

using namespace std;

void time();

int main()
{


  
}

void time(int seconds, int &hours, int &mins, int &secs)
{
  double T;  // total seconds before conversion

  T = (seconds / 3600);

  hours = (seconds / (60 * 60));

  mins = (seconds / 60);

  secs = T / 60; // left over seconds


  
}
