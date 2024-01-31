#include <iostream>
using namespace std;
int main()
{
    /*
        Ternary Operator is not a part of control flow but we can say a short form
        of writing if else condition. Eg :

        (condition) ? (Statement of True) : (Statement of false)

        after the condition we need to write question_mark then Statement which we
        want to execute if condition is true then colon and after the colon false
        statement after which we want to executes. One thing that we need to remember
        that when we write less number of code in if else then and only then we can
        use the turnary operator
    */

    int age;
    cin >> age;

    //* Check Condition using normal if-else
    if (age > 18)
    {
        cout << "You can Vote" << endl;
    }
    else
    {
        cout << "You can't Vote" << endl;
    }

    //* Check Condition using Ternary Operator
    (age > 18) ? cout << "You can Vote" << endl : cout << "You can't Vote";
}