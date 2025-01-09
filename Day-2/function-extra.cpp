#include <iostream>
using namespace std;

int sum(int n1, int n2)
{
    return (n1 + n2);
}

int main()
{
    int a, b;

    cin >> a;
    cin >> b;

    cout <<a <<" + "<<b<<" = "<< sum(a, b) << endl; // Print the result of sum(a, b)

    return 0;
}
