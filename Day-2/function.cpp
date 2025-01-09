
#include <iostream>
using namespace std;

void sum()
{
    int a, b, sum;
    
    cout << "Enter the value of a: " << endl;
    cin >> a;
    cout << "Enter the value of b: " << endl;
    cin >> b;
    sum = a+b;
    cout << "Sum of " << a << " and " << b << " is: " << sum << endl;
    cout <<"*****************************"<< endl;
    // exit(0); // exit the program immediately with status code 0

    // return; // exit the function immediately
}
int main() {

    sum();
    
    return 0;
}