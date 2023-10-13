#include<iostream>
using namespace std ;
int  main ()
{
    int n ;
    cout << "enter the size of array ";
    cin >> n ;
    int arr [n];
    for (int i=0;i<=n-1;i++)
    {
        cin >> arr[i] ;

    }
    int min = 1234567;
    for (int i=0;i<=n-1;i++)
    {
        if(min > arr[i]) min = arr[i];
    }
    cout << "minimum element is " << min ;
    return 0 ;
}