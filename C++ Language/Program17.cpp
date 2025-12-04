#include <iostream>
using namespace std;
int main()
{
    float num, factorial;
    int integral;
    num = 15.58971;
    integral = (int)num;
    factorial = num - integral;
    cout<<"Integral = "<<integral<<endl;
    cout<<"Factorial = "<<factorial;
    return 0;
}