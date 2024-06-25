#include <iostream>
#include <string>
#include <cmath>
using namespace std;
// Morgan Lee
// Week Two - Change for a Dollar
// June 23, 2024

int main()
{
    /* Declares the integer variables which will hold how many quarters,
    dimes, nickels, and pennies the user wants to use. */
    int numQuarters, numDimes, numNickels, numPennies;
    
    // Declares the variable that will hold the sum value of all the coins.
    double sumOfCoins;
    
    /* Declares and initializes the constant double variables which would
    hold the values of a dollar, quarter, dime, nickel, and a penny. */
    const double DOLLAR_AMOUNT = 1.00;
    const double QUARTERS_AMOUNT = 0.25;
    const double DIMES_AMOUNT = 0.10;
    const double NICKELS_AMOUNT = 0.05;
    const double PENNIES_AMOUNT = 0.01;
    
    
    // Introduction of the /"change for a dollar/" game.
    cout << "The goal of this game is to enter a combination of quarters," << endl
    << "dimes, nickels, and pennies that add up to exactly one dollar." << endl;
    
    /* Asks the user how many of each coin they want to use, and
    initializes the user input into the corresponding variable.*/
    cout << endl << "How many quarters should I use? ";
    cin >> numQuarters;
    cout << "How many dimes should I use? ";
    cin >> numDimes;
    cout << "How many nickels should I use? ";
    cin >> numNickels;
    cout << "How many pennies should I use? ";
    cin >> numPennies;
    
    
    // Calculates the sum of all the coins.
    sumOfCoins = sumOfCoins + (QUARTERS_AMOUNT*numQuarters) + (DIMES_AMOUNT*numDimes)
    + (NICKELS_AMOUNT*numNickels) + (PENNIES_AMOUNT*numPennies);
    
    
    // Nested if-else statements to determine if the sum of coins is greater, equal to, or less than 1.00 (one dollar).
    if (fabs(sumOfCoins - DOLLAR_AMOUNT) < 0.0001)   // If the difference between the sum of coins and 1.00 is miniscule then they are most likely
    {                                                // the same, and so that means the user inputted 1.00 worth of coins and won the game.
        cout << endl << "Congratulations. Your coins total exactly a dollar." << endl;
    }
    else
    {
        if ((fabs(sumOfCoins - DOLLAR_AMOUNT) > 0.009999) && (sumOfCoins > DOLLAR_AMOUNT))   // If the difference between the sum of coins and 1.00 is
        {                                                                                    // more than around 0.01, then they aren't equal. And if
            cout << endl << "Your coins total $" << sumOfCoins << ". That is more than a dollar." << endl;  // the sum of coins is greater than 1.00
        }                                                                                                   // then sum of coins is greater than 1.00.
        else   // The else leaves only one option left of the sum of coins being less than 1.00.
        {
            cout << endl << "Your coins total $" << sumOfCoins << ". That is less than a dollar." << endl;
        }
    }
    
    return 0;
}