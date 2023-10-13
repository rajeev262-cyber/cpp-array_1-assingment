#include<Iostream>
using namespace std ;
int main ()
{
    int n ;
    cout << "enter the size of array ";
    cin>> n ;
    int arr[n];
    for (int i=0;i<=n-1;i++)
    {
        cin >> arr[i];
    }
    int pro = 1 ;
    for (int i=0;i<=n-1;i++)
    {
        pro = pro * arr[i];
    }
    cout << "product of the element " << endl << pro ;
    return 0 ;
}