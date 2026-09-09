#include <iostream>
#include <vector>
using namespace std;

// Function declaration matching Task5_impl.cpp
vector<vector<int>> generatePascalTriangle(int numRows);

int main() {
    // Test 1: n = 0
    auto res0 = generatePascalTriangle(0);
    cout << "n = 0: " << (res0.empty() ? "PASS" : "FAIL") << endl;

    // Test 2: n = 1
    auto res1 = generatePascalTriangle(1);
    cout << "n = 1: " << (res1.size() == 1 && res1[0] == vector<int>{1} ? "PASS" : "FAIL") << endl;

    // Test 3: n = 5 & row 5 verification ({1, 4, 6, 4, 1})
    auto res5 = generatePascalTriangle(5);
    vector<int> expectedRow5 = {1, 4, 6, 4, 1};
    bool pass5 = (res5.size() == 5 && res5[4] == expectedRow5);
    cout << "n = 5 (Row 5 -> {1, 4, 6, 4, 1}): " << (pass5 ? "PASS" : "FAIL") << endl;

    return 0;
}