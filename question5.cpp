#include<iostream>
using namespace std ;
int main ()
{
    cout<<"enter 5 element of array";
    int a[5];
    for (int i=0;i<5;i++)
    {
        cin >> a[i];
    }
    int x=0 ;
    bool flag = false ;
    for (int i=0 ;i<5;i++)
    {
        if(a[i]!= x){
            cout << x << endl  ;
            flag = true ;
            break ;
        }
        else x++;
    }
    if (flag == false) cout << x << endl ;
    return 0 ;
}