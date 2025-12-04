#include <iostream>
using namespace std;
int main()
{
    int roll, pf, ict, cag, total, average;
    cout<<"Roll no = ";
    cin>>roll;
    
    cout<<"PF = ";
    cin>>pf;
    
    cout<<"ICT = ";
    cin>>ict;
    
    cout<<"CAG = ";
    cin>>cag;
    
    total = pf + ict + cag;
    average = total/3;
    cout<<"Total = "<<total<<"\nAverage = "<<average;
    return 0;
}