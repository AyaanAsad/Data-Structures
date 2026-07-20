#include <iostream>
using namespace std;

int findfirst(int arr[], int lb,int mid,int n)
{
    int upper=mid;
    int first = -1;
    while (lb <= upper)
    {
        int middle = (lb+upper)/2;
        if (arr[middle] > n)
        {
            upper = middle - 1;
        }
        else if (arr[middle] < n)
        {
            lb = middle + 1;
        }
        else if (arr[middle] == n)
        {
            first=middle;
            upper=middle-1;
        }
    }
    return first;
}
int findlast(int arr[],int ub, int mid,int n)
{
    int lower=mid;
    int last = -1;
    while (ub >= lower)
    {
        int middle = (lower+ub)/2;
        if (arr[middle] > n)
        {
            ub = middle - 1;
        }
        else if (arr[middle] < n)
        {
            lower = middle + 1;
        }
        else if (arr[middle] == n)
        {
            last=middle;
            lower=middle+1;
        }
    }
    return last;
}

int main()
{
    int arr[9] = {1, 2, 3, 3, 3, 3, 4, 6, 6};
    int lb = 0;
    int ub = 8;
    int mid = (lb + ub) / 2;
    bool flag = false;
    cout << "Enter number to search for: " << endl;
    int n;
    cin >> n;
    while (lb <= ub)
    {
        if (arr[mid] > n)
        {
            ub = mid - 1;
            mid = (lb + ub) / 2;
        }
        else if (arr[mid] < n)
        {
            lb = mid + 1;
            mid = (lb + ub) / 2;
        }
        else if (arr[mid] == n)
        {
            cout << "First Position at: " << findfirst(arr, lb, mid,n) << endl;
            cout << "Last Position at: " << findlast(arr, ub, mid,n);
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