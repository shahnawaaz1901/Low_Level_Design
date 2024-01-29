#include <iostream>
using namespace std;
int main()
{
    /*
        Switch Cases : Switch case is nothing but part of control flow and helps us
                to write conditions in more simplify way, in switch cases we can
                create a switch case by writing switch and along with that pass a
                variable name in the bracket which we want to check conditions
    */

    //* Check Conditions using normal if else condition
    char grade;
    cin >> grade;

    if (grade == 'A')
    {
        cout << "90-100" << endl;
    }
    else if (grade == 'B')
    {
        cout << "80-90" << endl;
    }
    else if (grade == 'C')
    {
        cout << "70-80" << endl;
    }
    else if (grade == 'D')
    {
        cout << "60-70" << endl;
    }
    else
    {
        cout << "0-60" << endl;
    }

    //* Check Conditions using Switch Cases
    /*
        One thing that we need to remember that after the case we can't write
        and expression we only write the constant values, How ever conditions
        we can put in bracket which is just after the switch keyword
    */
    switch (grade)
    {
    case 'A':
        cout << "90-100" << endl;
        break; //* We need to write break conditions so that we perform operations only those which satisy condition
    case 'B':
        cout << "80-90" << endl;
        break;
    case 'C':
        cout << "70-80" << endl;
        break;
    case 'D':
        cout << "60-70" << endl;
        break;
        //* Default Case Executes when all Conditions not satisfy
    default:
        cout << "0-60" << endl;
    }
}