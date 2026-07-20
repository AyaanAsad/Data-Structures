#include <iostream>
using namespace std;

int binarysearch(int ub, int lb, int arr[], int n)
{
    int mid = (lb + ub) / 2;
    bool flag = false;
    while (lb <= ub)
    {
        mid = (lb + ub)/2;
        if (arr[mid] > n)
        {
            ub = mid - 1;
        }
        else if (arr[mid] < n)
        {
            lb = mid + 1;
        }
        else if (arr[mid] == n)
        {
            cout << "Element found at: " << mid;
            flag = true;
            break;
        }
    }
    if (!flag)
    {
        cout << "Not found";
    }
    return 0;
}

int main(){
    int arr[11]={6,7,8,9,10,11,1,2,3,4,5};
    int lb=0;int ub=10;int mid=0;int n=0;
    cout << "Enter element to be searched: ";
    cin >> n;
    while(lb<ub)
    {
        mid=(lb+ub)/2;
        if(arr[mid]>=arr[0])
        { 
            lb=mid+1;
        }
        else 
        {
            ub=mid;
        }
    }
    if(n>arr[mid] && n>=arr[0]) //first half
    {
        binarysearch(mid-1,0,arr,n);
    }
    else
    {
        binarysearch(11-1,mid,arr,n); // second half
    }
    return 0;
}