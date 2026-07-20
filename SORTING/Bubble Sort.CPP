#include <iostream>
using namespace std;

int main()
{
    int arr[5]={12,67,34,90,56};
    int n=sizeof(arr)/sizeof(int);
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if (arr[j]<arr[i])
            {
                swap(arr[i],arr[j]);
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        cout << arr[i] << " " ;
    }
    return 0;
}