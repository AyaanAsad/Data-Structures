#include <iostream>
using namespace std;

void sort01(int arr[], int n)
{
    int i=0,j=n-1;
    while(i<j)
    {
        if(arr[i]>arr[j])
        {
            swap(arr[i],arr[j]);
            i++;
            j--;
        }
        else if(arr[i]==arr[j] && arr[i]==1)
        {
            j--;
        }
        else if(arr[i]==arr[j] && arr[i]==0)
        {
            i++;
        }
        else
        {
            i++; j--;
        }
    }
}

void sort012(int arr[], int n)
{
    int i=0,j=n-1,k=n-1;
    while(i<j && j<k)
    {
        if(arr[i]>arr[j])
        {
            swap(arr[i],arr[j]);
            i++;
            j--;
        }
        else if((arr[i]==arr[j] && (arr[i]==1 && arr[i]==2)) || arr[i]<arr[j] && arr[i]==1)
        {
            j--;
        }
        else if(arr[i]==arr[j] && arr[i]==0)
        {
            i++;
        }
        else
        {
            i++; j--;
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