#include <iostream>
using namespace std;
int main()
{
    float f, c;
    cout<<"Fahrenheit = ";
    cin>>f;
    c = 5.0/9.0 * (f - 32);
    cout<<"Celsius = "<<c;
    return 0;
}