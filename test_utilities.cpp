#include <iostream>
#include <vector>
#include "utilities.h"
using namespace std;

int main() {
  
    vector<int> sample = {10, 20, 30, 20, 40, 20};
    vector<int> emptyArr;

    
    vector<int> res1 = findAllIndices(sample, 20); // Expected: {1, 3, 5}
    cout << "Multiple occurrences: " << (res1 == vector<int>{1, 3, 5} ? "PASS" : "FAIL") << endl;

    
    vector<int> res2 = findAllIndices(sample, 99); // Expected: {}
    cout << "Key not present: " << (res2.empty() ? "PASS" : "FAIL") << endl;

   
    vector<int> res3 = findAllIndices(emptyArr, 10); // Expected: {}
    cout << "Empty array: " << (res3.empty() ? "PASS" : "FAIL") << endl;

    return 0;
}