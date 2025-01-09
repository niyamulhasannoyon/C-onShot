#include <iostream>
using namespace std;

int main() 
{

    int marks;

    cout << "Enter your marks: ";
    cin >> marks;

    if ( marks > 100 || marks < 0) cout<<"Please enter a valid number";
    else if (marks >= 80 && marks <=100) cout<<"You got A++";
    else if (marks >= 70 && marks < 80) cout<<"You got A";
    else if (marks >= 60 && marks < 70) cout<<"You got A";
    else if (marks >= 50 && marks < 60) cout<<"You got B+";
    else if (marks >= 40 && marks < 50) cout<<"You got B";
    else if (marks > 32 && marks < 40) cout<<"You got C";
    else if (marks < 33 ) cout<<"You got Fail";

    return 0;
}