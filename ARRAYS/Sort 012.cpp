#include <iostream>
using namespace std;

void sort012(int arr[], int n)
{
    int i=0,j=n-1,k=0;
    while(k<j)
    {
        if(arr[k]==0)
        {
            swap(arr[i],arr[k]);
            k++;i++;
        }
        else if(arr[k]==1)
        {
            k++;
        }
        else if(arr[k]==2)
        {
            swap(arr[k],arr[j]);
            j--;
        }
    }
}

void printarray(int arr[], int size)
{
    cout << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int m; int n;
    cout << "Enter size: ";
    cin >> m;
    int arr[m];
    cout << "Enter elemtns of first array: " << endl;
    for (int i = 0; i < m; i++)
    {
        cin >> arr[i];
    }
    sort012(arr,m);
    printarray(arr,m);
}