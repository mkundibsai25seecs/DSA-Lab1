#include <iostream>
#include <vector>
using namespace std;

// Function declaration matching Task3_impl.cpp
vector<int> findAllIndices(const vector<int>& arr, int key);

int main() {
    vector<int> sample = {10, 20, 30, 20, 40, 20};
    vector<int> emptyArr;

    // Test 1: Multiple occurrences
    vector<int> res1 = findAllIndices(sample, 20);
    cout << "Multiple occurrences: " << (res1 == vector<int>{1, 3, 5} ? "PASS" : "FAIL") << endl;

    // Test 2: Key not present
    vector<int> res2 = findAllIndices(sample, 99);
    cout << "Key not present: " << (res2.empty() ? "PASS" : "FAIL") << endl;

    // Test 3: Empty array
    vector<int> res3 = findAllIndices(emptyArr, 10);
    cout << "Empty array: " << (res3.empty() ? "PASS" : "FAIL") << endl;

    return 0;
}