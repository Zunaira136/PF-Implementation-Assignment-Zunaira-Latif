#include <iostream>
using namespace std;
int main()
{
    int hrs, min, sec, total;
    cin>>hrs>>min>>sec;
    total = hrs * 3600 + min * 60 + sec;
    cout<<"Total seconds = "<<total;
    return 0;
}
 