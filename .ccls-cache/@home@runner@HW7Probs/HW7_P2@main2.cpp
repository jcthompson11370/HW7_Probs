// Programmer: John Thompson
// Description: HW7 Problem 2
// Date: 10/ 04/ 2022


// Write a function named time() that has an integer parameter named seconds and three integer reference parameters named hours, mins, and secs. The function is to convert  the  passed  number  of  seconds  into  an  equivalent  number  of  hours,  minutes,  and  seconds.  Using  the  reference  parameters,  the  function  should  alter  the  arguments  in  the  calling  function.//

#include <iostream>
#include <cmath>

using namespace std;

void time(int seconds, int &hours, int &mins, int &secs);

int main()
{
  int tot_seconds, hours, mins, secs;

  cout << "Enter total seconds: ";
  cin >> tot_seconds;

  time(tot_seconds, hours, mins, secs);
    
  cout << "Hours: " << hours << endl;
  cout << "Minutes: " << mins << endl;
  cout << "Seconds: " << secs << endl;
  

  return 0;
}

void time(int tot_seconds, int &hours, int &mins, int &secs)
{

  hours = (tot_seconds / 3600);
  mins = (tot_seconds / 60);
  secs = (tot_seconds % 60); // left over seconds
  
}
