#include <iostream>
using namespace std;

void sumcheck(int arr[], int m, int n)
{
    for(int i=0;i<m;i++)
    {
        for(int j=i;j<m;j++)
        {
            if(arr[i]+arr[j]==n)
            {
                cout << min(arr[i],arr[j]) << "," << max(arr[i],arr[j]) << endl;
            }
        }
    }
}

int main()
{
    int m; int n;
    cout << "Enter size: ";
    cin >> m;
    int arr[m];
    cout << "Enter S: ";
    cin >> n;
    cout << "Enter elemtns of first array: " << endl;
    for (int i = 0; i < m; i++)
    {
        cin >> arr[i];
    }
    
    sumcheck(arr,m,n);
}