// name: Lilit Khamalyan
// date: 1/07/2020
// Programming Challenge 4: Write a program that computes the tax and tip on a resautant bill for a patron with a $88.67 meal charge.
// The tax should be 6.75% of the meal cost. The tip should be 20% of the total after adding the tax. Display the meal cost, tax amount,
// tip amount, and total bill on the screen.
#include "pch.h"
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
     // Variables to hold meal charge, tax amount, tip amount, and total bill 
     double mealCharge = 88.67,
          taxAmount, tipAmount, totalBill;
     // Display meal cost
     cout << "Meal cost: $" << mealCharge << endl;
     // Calculate and display tax amount
     taxAmount = mealCharge * 0.0675;
     cout << "Tax amount: $" << fixed << setprecision(2) << taxAmount << endl;
     // Calculate and display tip amount 
     tipAmount = (mealCharge + taxAmount) * 0.2;
     cout << "Tip amount: $" << tipAmount << endl;
     // Calculate and display total amount 
     totalBill = mealCharge + taxAmount + tipAmount;
     cout << "Total bill: $" << totalBill << endl;
     system("pause");
     return 0;
}