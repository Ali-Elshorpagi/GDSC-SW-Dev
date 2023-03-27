#include<iostream>
using namespace std;
int main()
{
    int x,y,z;
    cin>>x>>y>>z ;
    int min= x , max= y;
    if (min > y){
        min = y ;
    }
    if(min > z){
        min = z;
    }
    cout<<min << " ";
    if (max < x){
        max = x ;
    }
    if(max < z){
        max = z;
    }
    cout<<max ;
    
 
    return 0;
 
 
}
