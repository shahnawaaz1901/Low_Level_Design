/*
    iostream is the header file which contains the all the information regarding
    the input output that's why it's also called the input output stream so after
    including this we need to tell what namespace or dictionary we want to use
    so we want to use the standard namespace that's why we wrote using namespace
    std, in iostream cout defination is available so if we want to use the cout
    then we need to use the header file and as well as namespace std
*/

#include <iostream>
/*
    Compiler and environment Not Known Where this std dictionary is available
    so we need to tell again explicitly to the environment where this std dictionary
    file is available so for that we need to include the header file called
    iostream
*/

using namespace std;
/*
    int main is the start block of the code means code start executing from
    int main so we can say in main is the starting point of execution in the
    code. If we write thousands of line code no metters code start to execute
    from int main and bracket denotes that this is a function so we can say int
    main is the main function, ans after that we write the curly braces that
    curly braces helps us to keep track that any code we write between these
    braces is the part of int main function, means curly braces keep track the
    scope of the instructions
*/
int main()
{

    /*
        If our program successfully Executes then it denotes with the return 0
        means our program successfully executes, now question is why we only
        return 0 not other number, because here 0 can't be any random number, 0
        represent the number of errors in our program means our program is executed
        successfully with 0 errors, if we return some other number then it represents
        some error is occure in our code that's why we return 0, how ever it's not
        mendatory to return everytime it's optional
    */

    /*
        Compiler and environment is not understand who is "cout" and how "cout"
        is works, so that we need to tell the compiler and environment who is
        "cout" and what "cout" does, if we don't know anything about a single
        word then we reffer to dictionary for understand what is the mean of this
        keyword so in our programming language case dictionary is std, that's why
        we use this dictionary at the top of the file so that we can use "cout"
        anywhere in the file
    */
    cout << "Namaste Duniya" << endl;
    /*
        By Using the cout we print the something on the terminal or as output,
        by using the cout we can print anything and angular bracket of represent
        the sign means we want to print at the output window
    */
    /*
        What Ever We Write in between the double inverted comma it's called
        "string", means stream of character or continous character of line
    */

    /*
        "endl" works as enter means we want next thing with the new line
    */

    /*
        Semicolon means that we want to terminate the line, means this line
        is over at this stage and if we write anything something after the
        semi colon then c++ assume that next remaining statement after the
        semi colon is part of a new Line
    */
    return 0;
}