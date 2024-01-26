#include <iostream>
using namespace std;
int main()
{
    //* Declare a Variable
    int age;
    /*
        cin is the identifier which exist in std namespace and we use
        the cin for taking the input into a variable
    */

    //* Taking Input on age Variable
    cin >> age;
    /*
        cin is waiting for user input and our whole program is block until
        user is not given any input
    */
    /*
        When we Write any program where user is given some input, in that
        first we decalre a variable we need to understand that when we
        declare variable guarbage value is assigned by the compiler but
        as soon as user gives value guarbage value is over riden by the
        user input and value which user provide is assigned to the variable

    */
    cout << "my age is : " << age << endl;

    /*
        cin is used to take input from the user for int, double, float
        char but in the case of boolean we can't give input in the form
        of true or false because in terminal 0 and 1 is used to represent
        true and false, so for input we need to give 0 and 1 and also
        for output 0 and 1 is printed
    */

    /*
        If we not write using namespace std and still want to use some
        identifiers then we need to write std and scope resolution operator
        before the identifier in case we dont write using namespace std,
        Scope resolution operator is nothing but 2 colons withOut space
    */
    /*
        Alternative way to take input and Output
        std::cin >> age;
        std::cout << age << std::endl;
    */

    /*
        Some Other functions for Taking Input :
        1. getline(cin, variable_name) : For Taking Everything as Input space tabs enter everything
        2. cin.ingnore() : this function is used to ignore some inputs from the input value from the user
        3. cin.fail() : this function is test if last taken input operation failed or success it returns true if operation is failed otherwise return false
    */
}