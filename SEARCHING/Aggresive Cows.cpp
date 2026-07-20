#include <iostream>
#include <algorithm>
using namespace std;

bool isSolution(int arr[], int cows, int stalls, int mid)
{
    int count = 1;
    int lastpos=arr[0];
    for (int i = 0; i < stalls; i++)
    {
        if (arr[i] - lastpos >= mid)
        {
            count++;
            if(count==cows)
            {
                return true;
            }
            lastpos = arr[i];
        }
    }
    return false;
}

int distribute(int arr[], int cows, int stalls)
{
    sort(arr,arr+stalls);
    int maxi=INT_MIN;
    int lb = 0; 
    int temp = -1;
    for(int i=0;i<stalls;i++)
    {
        maxi=max(maxi,arr[i]);
    }
    int ub=maxi;
    while (lb <= ub)
    {
        int mid = (lb + ub) / 2 ;
        if (isSolution(arr, cows, stalls, mid))
        {
            temp = mid;
            lb = mid+1;
        }
        else
        {
            ub=mid-1;
        }
    }
    return temp;
}

int main()
{
    int stalls;
    int ub = 0;
    cout << "Enter the number of stalls: ";
    cin >> stalls;
    int arr[stalls];
    cout << "Enter stall position: ";
    for (int i = 0; i < stalls; i++)
    {
        cin >> arr[i];
    }
    int cows;
    cout << "Enter number of cows: ";
    cin >> cows;
    cout << distribute(arr, cows, stalls);
}