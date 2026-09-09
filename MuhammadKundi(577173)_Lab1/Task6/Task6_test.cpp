#include <iostream>
#include <vector>
using namespace std;

// Function declaration matching Task6_impl.cpp
vector<int> findMode(const vector<int>& arr);

int main() {
    // Test 1: Array with unique mode
    vector<int> arr1 = {1, 2, 2, 3, 4};
    cout << "Unique mode: " << (findMode(arr1) == vector<int>{2} ? "PASS" : "FAIL") << endl;

    // Test 2: Array with multiple modes
    vector<int> arr2 = {1, 1, 2, 2, 3};
    cout << "Multiple modes: " << (findMode(arr2) == vector<int>{1, 2} ? "PASS" : "FAIL") << endl;

    // Test 3: Empty array
    vector<int> arr3 = {};
    cout << "Empty array: " << (findMode(arr3).empty() ? "PASS" : "FAIL") << endl;

    return 0;
}