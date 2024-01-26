#include <iostream>
using namespace std;
int main()
{
    /*
        Premitive/Built-in Data Type :

        1. int
        2. float
        3. double
        4. char
        5. bool
    */
    /*
        Decalration : Creation of variable withOut assigning some value is
            Called Decalration.

        Guarbage Value : When we Declare a Variable then compiler assign
            some random value to that variable that's called the Guarbage
            Value.
    */

    //* Declaration
    int a;
    cout << a << endl;

    /*
        Defination : When we create a variable and assign the value along
            with declaration that's called defination
    */

    //* Defination

    /*
        We Can't Decalre multiple variable of same name in c++ in the
        Same Scope however we can decalre same name same type or different
        type variable in different scope or other different code block.Eg:

        int a = 10;
        cout << a << endl;
        not Allowed in same code block

        //* Both Statement are not allowed
    */

    int b = 10;
    cout << b << endl;

    /*
        Manipulation or Updation : Updating value of previously define
            variables is called updation of a variable. We Need to
            understand that update value also belongs to same data type
            which variable has.
    */
    /*
        b = "true"
        Not Allowed because b is int data type but "true" is string type
    */
    b = 50;
    cout << b << endl;

    //* float is Used to Store Decimal Values in Integer
    float c = 10.5;
    cout << c << endl;

    //* char is used to Store Single Character Value
    char d = 'a';
    /*
        We Need to Remember that Everytime we assign some value to char data
        type variable value must be in single cotation mark
    */
    cout << d << endl;

    //* double is just the upgraded version of float
    /*
        double takes more memory then float and used to store more greater
        numbers compare to float
    */
    double e = 3.14;
    cout << e << endl;

    //* Boolean Data type is used to Store true or false Value
    /*
        0 Represents the false value just like false we can also store
        0 other integer value except 0 represent the true in boolean
    */
    bool f = false;
    bool g = 0;
    cout << f << endl;

    cout << sizeof(a) << endl;
    cout << sizeof(b) << endl;
    cout << sizeof(c) << endl;
    cout << sizeof(d) << endl;
    cout << sizeof(e) << endl;
    cout << sizeof(f) << endl;
    cout << sizeof(g) << endl;
    /*
        Minimum 1 Byte is the addressable space in the memory that's why
        for Boolean value takes 1Bytes of Space in the Memory
    */
}