// Programmer: John Thompson
// Description: HW7 Problem 4
// Date: 10/ 04/ 2022

#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
  int n; // number of days

  cout << "Enter n: ";
  cin >> n;

  srand(time(NULL));

  for(int i = 0; i < n; i++)
    {
      int junk;

      junk = rand() % (10000000000);

    }

  return 0;
}