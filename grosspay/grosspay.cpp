#include <iostream>
using namespace std;
int main()
{
    int hours = 25;
    float payRate = 15.50;
    float grossPay;
    grossPay = hours * payRate;

    cout << "The gross pay for " << hours << " hours at $" << payRate << " per hour is $ " << grossPay << "." << endl;

    return 0;
}