#include <iostream>
using namespace std;
// Problem Statement: Given 8 integers, find the sum of those in even places and the sum of those in odd places.
int main(){
    int x, sum_even, sum_odd;
    sum_even = sum_odd = 0;    // initialise the summation containers to be empty
    cin >> x;                  // read the 1st integer
    sum_odd = sum_odd + x;     // add it to the odd places summation
    cin >> x;                  // read the 2nd integer
    sum_even = sum_even + x;   // add it to the even places summation
    cin >> x;
    sum_odd = sum_odd + x;
    cin >> x;
    sum_even = sum_even + x;
    cin >> x;
    sum_odd = sum_odd + x;
    cin >> x;
    sum_even = sum_even + x;
    cin >> x;
    sum_odd = sum_odd + x;
    cin >> x;
    sum_even = sum_even + x;
    cout <<"odd sum = " << sum_odd << endl;
    cout <<"even sum = " << sum_even << endl;
    return 0;
}
