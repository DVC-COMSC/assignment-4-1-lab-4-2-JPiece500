//?  [Problem Definition]
//*        A software company sells a package that retails for $99. Quantity discounts are given
//*        according to the following table.
//*                Quantity                 Discount Percent
//*                10 - 19                        20%
//*                20 - 49                        30%
//*                50 - 99                        40%
//*                100+                            50%
//*- Write a program that asks for the number of units sold and
//*  computes the total cost of the purchase
//** Input Validation : Input must be a positive integer
//**    If we have negative input, just quit the program
#include <iostream>
#include <iomanip>
using namespace std;
int main() {
  double perc1= .2, perc2 = .3, perc3 = .4, perc4 = .5;
  
  double price = 99.00;
  
  double total, origam, discam, drate;
  int numsold;

cout << "Units sold?: ";
  cin >> numsold;

if (numsold < 0) {
  cout << "Enter a positive number.";
  }
if (numsold < 10)
  drate = 1.0;
else if (numsold < 20)
  drate = perc1;
else if (numsold < 50)
  drate = perc2;
else if (numsold < 100)
  drate = perc3;
else {
  drate = perc4;
  }
  
origam = numsold * price;
discam = origam * drate; 
total = origam - discam; 

cout << setprecision(2) << fixed;
cout << "Original amount is " << origam << endl;
cout << "Discount amount is " << discam << endl;
cout << "Total price is " << total << endl;

  
  
}