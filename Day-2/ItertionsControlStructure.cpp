#include <iostream>
using namespace std;

int main()
{
    //LOOP
    //While loop

        // while (/* condition */)
    // {
    //     /* code */
    // }
    int n = 0;

    while(n<10)
    {
        n++;
        cout<<n<<endl;
    }

    //Do-While loop
    // do
    // {
    //     /* code */
    // } while (/* condition */);

    int m = 0;
    do
    {
        m++;
        cout<<m<<endl;
    } while (m<10);

    //For loop
    // for (/* initialization */; /* condition */; /* increment */)
    // {
    //     /* code */
    // }

    for(int i=0; i<10; i++)
    {
        cout<<i<<endl;
    }

    // Nested loop
    // Loop inside another loop
    // This is useful when we want to repeat a block of code for multiple times
    // But we need to take care of the nested loops properly to avoid infinite loops or unwanted results.

    cout<<"Nested Loop"<<endl;
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<5; j++)
        {
            cout<<i<<","<<j<<endl;
        }
    }
    return 0;
}