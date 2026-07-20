#include <iostream>
using namespace std;

//WILL ONLY WORK WHEN EXPLICITLY STATED THAT ONLY 1 ELEMENT IS UNIQUE IN THE ENTIRE ARRAY

void printarray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int findunique(int arr[],int size)
{

    int result=0;
    for(int i=0;i<size;i++)
    {
        result =~( result ^ arr[i]);
    }
    return result;
}
int main()
{
    int size;
    cout << "Enter size: " << endl;
    cin >> size;
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    cout << "Original Array: " << endl;
    printarray(arr,size);
    cout << "Unique: " << findunique(arr,size);
}