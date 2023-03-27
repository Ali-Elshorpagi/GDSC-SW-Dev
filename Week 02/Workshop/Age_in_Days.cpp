
#include<iostream>
using namespace std;

int main()
{
    int x;
    cin>>x ;
    int years, months, days ;
    years= x/365 ;
    x = x - years * 365 ;
    months= x/30 ;
    days = x - months * 30 ;
 
    cout<< years<<" years"<< endl ;
    cout<< months<<" months"<< endl ;
    cout<< days<<" days"<< endl ;
 
 
    
 
    return 0;
 
 
}
