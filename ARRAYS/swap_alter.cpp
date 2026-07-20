#include <iostream>
using namespace std;

void printarray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void altswap(int arr[], int size)
{
    for (int i = 0; i < size; i = i + 2)
    {
        if (i + 1 < size)
        {
            swap(arr[i], arr[i + 1]);
        }
    }
    printarray(arr, size);
}
int main()
{
    int arr[10];
    int n;
    cout << "Enter number of elements less than 10" << endl;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Original Array: " << endl;
    cout << "Modified Array: " << endl;
    altswap(arr, n);
}