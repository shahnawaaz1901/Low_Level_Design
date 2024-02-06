#include <iostream>
using namespace std;
int main()
{
    for (int i = 1; i <= 3; i++)
    {
        /*
            Because Inside loops updation is done when whole statement of inside
            loop is executes so in this case inside the loop another loop is present
            so then that inner loop start to executes and updation of i is done when
            loop of j is completed or reached the condition, so value of i remains same
            until the whole iteraion of j is completed, This is Called the Nested Loop
        */
        for (int j = 1; j <= 3; j++)
        {
            cout << "i : " << i << ", j : " << j << endl;
        }
        cout << endl;
    }

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (j == i)
            {
                break;
            }
            cout << j << " ";
        }
        cout << endl;
    }
}