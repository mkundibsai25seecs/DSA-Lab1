#include <iostream>
#include <string>
using namespace std;

int naivePatternSearch(const string& text, const string& pattern);

int main() {
    string text = "hello world";

    cout << "Pattern at beginning: " << (naivePatternSearch(text, "hello") == 0 ? "PASS" : "FAIL") << endl;
    cout << "Pattern at end: " << (naivePatternSearch(text, "world") == 6 ? "PASS" : "FAIL") << endl;
    cout << "Pattern not present: " << (naivePatternSearch(text, "code") == -1 ? "PASS" : "FAIL") << endl;
    cout << "Empty pattern: " << (naivePatternSearch(text, "") == 0 ? "PASS" : "FAIL") << endl;

    return 0;
}