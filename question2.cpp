#include<iostream>
using namespace std ;
int main ()
{
    int n ;
    cout << "enter the size of array ";
    cin >> n ;
    int arr[n];
    for (int i=0;i<=n-1;i++)
    {
        cin >> arr[i];

    }
    int max = -123456;
    for (int i=0;i<=n-1;i++)
    {
        if (max<arr[i] )max = arr[i];
    }
    int smax = -123456;
    for (int i=0;i<=n-1;i++)
    {
        if((smax<arr[i])&&(arr[i]!=max)) smax = arr[i];
    }
    cout  << "maximum element is " << max << endl ;
    cout << "2nd maximum element is " << endl << smax ;
    return 0 ;
}