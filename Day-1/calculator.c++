#include <iostream>
using namespace std;

int main() {

    cout<< "** Welcome to Calculator Program **\n";
    cout<< " Please Enter Two Number \n";

float n1, n2;
    cout<< " Enter The Value for 1st number: ";
    cin>>n1;
    cout<< " Enter The Value for 2nd number: ";
    cin>>n2;

float sum, sub, mul, div;

    sum = n1 + n2;
    sub = n1 - n2;
    mul = n1 * n2;
    div = n1 / n2;

    cout<< "Sum of Two Number = "<<sum<<"\n";
    cout<< "Subtraction of Two Number = "<<sub<<"\n";
    cout<< "Multiplication of Two Number = "<<mul<<"\n";
    cout<< "Division of Two Number = "<<div<<"\n";

    cout<< "Thank you for using my program, bye bye!\n";

    return 0;
}