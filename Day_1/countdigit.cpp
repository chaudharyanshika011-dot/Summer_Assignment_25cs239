#include <iostream>
using namespace std;
int main()
{
    int n,count=0;
    cout<< "enter the value of n: ";
    cin>>n;
    while(n>0){
        n=n/10;
        count++;
    }
    cout<<"number of digits in the given number is "<<count;
    return 0;
 }
