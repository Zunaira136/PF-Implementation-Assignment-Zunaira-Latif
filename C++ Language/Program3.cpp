#include <iostream>
using namespace std;
int main()
{
    int a = 10, b = 20, temp;
    cout<<"Before swapping "<<"\na = "<<a<<"\nb = "<<b<<endl;
    temp = a;
    a = b;
    b = temp;
    cout<<"After swapping "<<"\na = "<<a<<"\nb = "<<b<<endl;
    return 0;
}