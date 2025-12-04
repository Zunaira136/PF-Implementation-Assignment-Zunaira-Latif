#include <iostream>
using namespace std;
int main()
{
    int pf, cag, ap, ict, icp, total, average;
    cin>>pf>>cag>>ap>>ict>>icp;
    
    total = pf + cag + ap + ict + icp;
    average = total/5;
    
    cout<<"Total = "<<total<<endl;
    cout<<"Average = "<<average;
    

    return 0;
}