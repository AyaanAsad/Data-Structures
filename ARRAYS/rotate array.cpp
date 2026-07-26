#include <iostream>
#include <fstream>
#include <vector>

void rotate_right(std::vector<int>& arr, int rot) {
    int n = static_cast<int>(arr.size());
    if (n <= 0) return;
    rot %= n;
    if (rot < 0) rot += n;
    if (rot == 0) return;
    std::vector<int> tail(arr.end() - rot, arr.end());
    for (int i = n - rot - 1; i >= 0; --i) {
        arr[i + rot] = arr[i];
    }
    for (int i = 0; i < rot; ++i) {
        arr[i] = tail[i];
    }
}

int main() {
    std::ifstream input("sampleArray.txt");
    if (!input) {
        std::cerr << "Unable to open sampleArray.txt\n";
        return 1;
    }

    std::cout << "Enter the number of elements you want from the file: ";
    int n;
    if (!(std::cin >> n) || n <= 0) {
        return 1;
    }

    std::vector<int> arr(n);
    std::cout << "Original Array:\n";
    for (int i = 0; i < n; ++i) {
        if (!(input >> arr[i])) {
            break;
        }
        std::cout << arr[i] << " ";
    }
    std::cout << "\n";

    std::cout << "Enter end rot: ";
    int rot = 0;
    std::cin >> rot;
    rotate_right(arr, rot);

    std::cout << "Rotated Array:\n";
    for (int value : arr) {
        std::cout << value << " ";
    }
    std::cout << "\n";
    return 0;
}
