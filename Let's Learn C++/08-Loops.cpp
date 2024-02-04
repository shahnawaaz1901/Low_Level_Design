#include <iostream>
using namespace std;
int main()
{
    /*
        Loop : Doing similar task multiple times is called loop. For Understanding
            we can say if we want to print our name for 100 times then instead of
            writing code 100 times and print with using loops we can do in less
            lines and print 100 times.

        Iteration : Every Time we enter in loop and perform certain tasks is called
            the Iteration.
    */

    /*
        In Generally For Run a Loop we need three things :
        1. Initializer : Initializer is nothing but a variable which starts from 0
            or 1 generally and keeps track how many times we run the loop.
        2. Condition : Condition is the terminating point of loop means where we need
            to stop if we not specify any condition then loop never stops and run
            infinitly
        3. Update : As name Specify updation of initializer is also important because
            if we run loop one time then value of our initializer is increased which
            denotes that loop run one time, if we not update the value of initializer
            then it's chance that we stuck at inifinity loop.
    */
    /*
        In C++ three types of loops exist :
        1. For Loop
        2. While Loop
        3. Do While Loop
    */
    /*
        Syntax of Loops :

        1. For Loop

        for(initializer ; condition ; updation){
            //* Some Statement
        }

        2. While Loop

        initializer;
        while(condition){

            Updation
        }

        3. Do While Loop
        do{
            //* Some Statement

            Updation
        }while(condition)
    */

    //* For Loop
    for (/*Initializer*/ int i = 0; /*Condition*/ i <= 5; /*Updation*/ i = i + 1)
    {
        //* Statement
        cout << "Shahnawaaz Ansari" << endl;
    }

    /*
        Working of For Loop : In For Loop all three necessory things we write
                in one line, so first our loop starts by initializing the
                variable then we check condition and if condition is statisfied
                or true then and only then we enters in the loop after executes
                the statement the we go for updation part and update the variable.

        Note : One thing that we need to understand that's in for Loop all three
            things are important but not mendatory, we can initialize variable out
            side the variable, if we want then we don't add the condition and if
            we want we don't update in one line we can update variable inside statement
            Now question is if we dont write condition then our program stuck at
            infinity loop, but we can terminate program using the "break" keyword
            which we used in switch cases.

        Break : "break" keyword just break the loop, no metters we write condition
            or not we can break the loop.

        Continue : "continue" keyword is nothing but skip our iteration
    */
    for (/*Initializer*/ int i = 0; /*Condition*/ i <= 10; /*Updation*/ i = i + 1)
    {
        //* Statement
        cout << "Shahnawaaz Ansari" << endl;

        //* Break the Loop After Print Name 5 Times
        if (i == 5)
        {
            break;
        }
    }

    //* Print only Odd Numbers from One to Ten and Skip Even  Numbers using Continue
    for (int i = 1; i <= 10; i++)
    {
        if (i % 2 == 0)
        {
            continue;
        }
        cout << i << " ";
    }

    //* While Loop
    /*
        While loop only taken the condition and rest initializer and updation
        we need to add before outsize the while loop and end of the while loop
        repectively
    */
    //* Initializer
    int i = 1;
    //* Condition
    while (i <= 10)
    {
        cout << i << " ";
        //* Updation
        i = i + 1;
    }
    cout << endl;

    //* Break Statement works similarly in while Loop
    //* Initializer
    i = 1;
    while (i <= 10)
    {
        if (i == 5)
        {
            break;
        }
        cout << i << " ";
        i = i + 1;
    }
    cout << endl;
    /*
        Conitinue also works same but in case of while loop if skip an iteration
        then before skipping we need to update the initializer because if we skip
        the iteration then increment statement which executes at last is also skip
        so we stuck at infinite loop, that's why updation is mendatory before skip
        the iteration
    */

    //* Print Odd Numbers
    i = 1;
    while (i <= 10)
    {
        if (i % 2 == 0)
        {
            i++;
            continue;
        }
        cout << i << " ";
        i++;
    }
    cout << endl;

    //* Do While Loop
    /*
        Do While Loop Always executes at once because as code suggest first
        we complete minimum one iteration after that condition is checked so
        whenever we want to run loop atleast once then we need to use do while
        loop
    */
    i = 1;
    do
    {
        /* code */
        cout << i << " ";
        i++;
    } while (/* condition */ i <= 10);

    /*
        Break and Continue is also working same as while loop
    */
}
