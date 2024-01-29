#include <iostream>
using namespace std;
int main()
{
    /*
        When we run code and take input from the user and basis on the input
        if we do some operation by making decisions, this situations is handle
        by "if else" statement in C++. Control Flow is managed in C++ by writing
        if else in multiple way :

        - if Condition
        - if else Condition
        - if elseif Condition
        - if elseif else Condition
        - nested if Conditions
    */

    /*
        In if else Statement if takes a condition which is written in bracket
        and we need to write some operations we want to perform if condition
        is true. Else not take any condition else always executes when condition
        which is write inside with if is false or not satisfy the condition.
        Another One is "else if" which takes a condition. "else" executes without
        checking any condition when "if" condition is false but else if checks
        conditions then condition is true then executes or perform operations
    */

    /*
        Conditions : Condition is nothing but a criteria if user input variable
                pass this criteria that means conditions is true otherwise condition
                is false.

        However we can write multiple conditions in if cases by using the logical
        operators like.. OR(||) and AND(&&)
    */
    int budget;
    cin >> budget;

    //* Single if Condition
    if (budget > 2000000)
    {
        cout << "You can buy the Scorpio"
             << "\n";
    }

    //* if else Condition
    if (budget > 2000000)
    {
        cout << "You can buy the Scorpio"
             << "\n";
    }
    else
    {
        cout << "You can't buy the Scorpio"
             << "\n";
    }

    //* if elseif and else Conditions
    if (budget > 2000000)
    {
        cout << "You can buy the Scorpio" << endl;
    }
    else if (budget > 1500000)
    {
        cout << "You can buy ertica" << endl;
    }
    else
    {
        cout << "You can't buy the car" << endl;
    }

    //* Nested if
    if (budget > 1500000)
    {
        if (budget > 2000000)
        {
            cout << "You can buy Scorpio" << endl;
        }
        else
        {
            cout << "You can't buy scorpio but can buy ertica" << endl;
        }
    }
    else
    {
        cout << "Buy Alto 800" << endl;
    }
}