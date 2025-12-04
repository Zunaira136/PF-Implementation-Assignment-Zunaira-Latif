#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    float disc;
    cout<<"a =";
    cin>>a;

    cout<<"b =";
    cin>>b;

    cout<<"c =";
    cin>>c;

    disc = b * b - 4 * a * c;
    cout<<"Disc = "<<disc;
    return 0;

}