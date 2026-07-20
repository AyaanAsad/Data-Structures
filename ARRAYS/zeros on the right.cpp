#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n;
    cout << "Enter the length of the array: ";
    cin >> n;
    vector<int> array;
    cout << "Enter the elements:";
    for(int i=0;i<n;i++){
        int ele;
        cin >> ele;
        array.push_back(ele);
    }
    int *zeroPtr, *nonZeroPtr;
    zeroPtr = &array[0];
    nonZeroPtr = &array[0];
    while(zeroPtr <= &array[n-1]){
        if(*zeroPtr!=0)
        {
            zeroPtr++;                                
            if(nonZeroPtr < zeroPtr)
            {             
                nonZeroPtr = zeroPtr;
            }
        }
        else
        {
            while(nonZeroPtr <= &array[n-1] && *nonZeroPtr == 0){
                nonZeroPtr++;
            }
            if(nonZeroPtr > &array[n-1]){              
                break;
            }
            swap(*zeroPtr, *nonZeroPtr);
            zeroPtr++;                                
            nonZeroPtr++;
        }
    }
    cout << "Array after moving zeros to the right: ";
    for(int i=0; i<n; i++){
        cout << array[i] << " ";
    }
    cout << endl;
}