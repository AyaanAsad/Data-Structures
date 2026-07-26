#include <fstream>
#include <iostream>
#include <utility>
#include <vector>

int main() {
    std::ifstream inputFile("sampleArray.txt");
    if (!inputFile) {
        std::cerr << "Unable to open file.\n";
        return 1;
    }

    int n;
    std::cout << "Enter the number of elements you want from the file: ";
    std::cin >> n;

    std::vector<int> arr(n);
    std::cout << "Original Array:\n";
    for (int i = 0; i < n; ++i) {
        inputFile >> arr[i];
        std::cout << arr[i] << ' ';
    }

    for (int i = 0; i < n - 1; ++i) {
        for (int j = 0; j < n - i - 1; ++j) {
            std::swap(arr[j], arr[j + 1]);
        }
    }

    int max = 0;
    int count = 0;
    int mostDup = 0;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (arr[i] == arr[j]) {
                ++count;
            }
        }
        if (count > max) {
            mostDup = arr[i];
            max = count;
        }
        count = 0;
    }

    std::cout << "\nMost duplicated number: " << mostDup << '\n';
    std::cout << "Times duplicated: " << max << '\n';
    return 0;
}