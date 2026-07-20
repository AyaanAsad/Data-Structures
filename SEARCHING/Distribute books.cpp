#include <iostream>
using namespace std;

bool isSolution(int arr[], int books, int students, int mid)
{
    int count = 1;
    int pagesum = 0;
    for (int i = 0; i < books; i++)
    {
        if (pagesum + arr[i] <= mid)
        {
            pagesum += arr[i];
        }
        else
        {
            count++;
            if (count > students || arr[i] > mid)
            {
                return false;
            }
            pagesum = arr[i];
        }
    }
    return true;
}

int distribute(int arr[], int books, int students)
{
    int lb = 0; int ub=0;
    int temp = -1;
    for(int i=0;i<books;i++)
    {
        ub+=arr[i];
    }
    
    while (lb <= ub)
    {
        int mid = (lb + ub) / 2 ;
        if (isSolution(arr, books, students, mid))
        {
            temp = mid;
            ub = mid - 1;
        }
        else
        {
            lb = mid + 1;
        }
    }
    return temp;
}

int main()
{
    int books;
    int ub = 0;
    cout << "Enter the number of books: ";
    cin >> books;
    int arr[books];
    cout << "Enter page number for each book in sorted manner: ";
    for (int i = 0; i < books; i++)
    {
        cin >> arr[i];
    }
    int students;
    cout << "Enter number of students: ";
    cin >> students;
    cout << distribute(arr, books, students);
}