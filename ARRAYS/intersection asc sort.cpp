#include <iostream>
using namespace std;

void intersection(int arr1[],int m, int arr2[], int n)
{
    int i=0,j=0;bool flag=true;
    while(i!=m && j!=n)
    {
        if(arr1[i]<arr2[j])
        {
            i++;
        }
        else if(arr1[i]==arr2[j])
        {
            cout << arr1[i] << " ";
            flag=false;
            i++; j++;
        }
        else if(arr1[i]>arr2[j])
        {
            j++;
        }
    }
    if(flag==true)
    {
        cout << endl << -1;
    }
}
int main()
{
    int m; int n;
    cout << "Enter 2 sizes: " << endl;
    cin >> m; cin >> n;
    int arr1[m]; int arr2[n];
    cout << "Enter elemtns of first array: " << endl;
    for (int i = 0; i < m; i++)
    {
        cin >> arr1[i];
    }

    cout << "Enter elemtns of second array: " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr2[i];
    }
    
    intersection(arr1,m,arr2,n);
}