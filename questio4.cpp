#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter the size of arrray";
    cin >> n;
    int arr[n];
    for (int i = 0; i <= n - 1; i++)
    {
        cin >> arr[i];
    }
    bool flag = false ;
    for (int i = 0; i <= n - 1; i++)
    {
        int dup = arr[0];

        for (int j = 1; j <= n - 1; j++)
        {
            if (i==j) continue ;
            if (dup == arr[j])
            {
                flag = true ;
                break;
            }
          
        }
    }
    if (flag == true ) cout << "duplicate is present ";
    else cout << "not present ";
    return 0 ;
}