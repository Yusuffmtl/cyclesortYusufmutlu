#include <iostream>
#include <vector>
#include <cassert>
#include "cycle_sort.cpp"

void printArray(const std::vector<int>& arr) {
    for (int num : arr)
        std::cout << num << " ";
    std::cout << std::endl;
}

bool isSorted(const std::vector<int>& arr) {
    for (size_t i = 1; i < arr.size(); ++i)
        if (arr[i - 1] > arr[i])
            return false;
    return true;
}

int main() {
    std::vector<std::vector<int>> test_cases = {
        {4, 3, 2, 1},
        {1, 2, 3, 4, 5},
        {5, 1, 4, 2, 3},
        {1, 1, 1, 1},
        {2, 3, 2, 1, 3},
        {},
        {10}
    };

    for (auto& test : test_cases) {
        std::vector<int> original = test;
        cycleSort(test);
        assert(isSorted(test));
        std::cout << "Test passed for input: ";
        printArray(original);
    }

    std::cout << "All tests passed successfully!" << std::endl;
    return 0;
}
