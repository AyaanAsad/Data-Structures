#include <iostream>
#include <fstream>
#include <vector>
#include <climits>

int main()
{
    std::ifstream fp("sampleArray.txt");
    if(!fp){
        std::cerr << "Failed to open sampleArray.txt\n";
        return 1;
    }

    std::cout << "Reading length from the file...\n";
    int n;
    fp >> n;
    std::cout << "The length is found to be: " << n << "\n";

    std::vector<int> arr(n);
    for (int i = 0; i < n; i++){
        fp >> arr[i];
        std::cout << arr[i] << " ";
    }

    // sort array (simple selection sort as in original)
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]>arr[j]){
                int temp=arr[i]; arr[i]=arr[j]; arr[j]=temp;
            }
        }
    }

    int max = INT_MIN;
    int min = INT_MAX;
    for(int v: arr){
        if(v>max) max=v;
        if(v<min) min=v;
    }

    int secondLargest = INT_MIN;
    int secondSmallest = INT_MAX;
    for(int v: arr){
        if(v>secondLargest && v!=max) secondLargest=v;
        if(v<secondSmallest && v!=min) secondSmallest=v;
    }

    std::cout << "\nSecond Smallest: " << secondSmallest << " \nSecond Largest: " << secondLargest;
    fp.close();
    return 0;
}
