#include<iostream>
using namespace std ;
void product(int *p1,int *p2)
{
    int pro = *p1 * *p2 ;
    cout << pro ;
}
int main ()
{
    int n ;
    cout<< "enter the first number ";
    cin >> n ;
    int y ;
    cout << "enter  second number ";
    cin >> y ;
    product(&n,&y);
    return 0 ;
}