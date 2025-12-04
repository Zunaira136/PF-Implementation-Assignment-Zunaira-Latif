#include <iostream>
using namespace std;
int main()
{
    int a = 5, b = 10, temp;
    cout<<"Before Swapping "<<"\na = "<<a<<"\nb = "<<b<<endl;
    temp = a;
    a = b;
    b = temp;
    cout<<"After Swapping "<<"\na = "<<a<<"\nb = "<<b<<endl;

    return 0;
}