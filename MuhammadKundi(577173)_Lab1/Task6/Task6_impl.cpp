#include <vector>
#include <unordered_map>
#include <algorithm>

std::vector<int> findMode(const std::vector<int>& arr) {
    if (arr.empty()) return {};

    std::unordered_map<int, int> freq;
    int maxFreq = 0;

    for (int num : arr) {
        freq[num]++;
        if (freq[num] > maxFreq) {
            maxFreq = freq[num];
        }
    }

    std::vector<int> modes;
    for (const auto& pair : freq) {
        if (pair.second == maxFreq) {
            modes.push_back(pair.first);
        }
    }

    std::sort(modes.begin(), modes.end());
    return modes;
}