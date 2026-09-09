#include <vector>

std::vector<int> findAllIndices(const std::vector<int>& arr, int key) {
    std::vector<int> indices;
    for (size_t i = 0; i < arr.size(); ++i) {
        if (arr[i] == key) {
            indices.push_back(static_cast<int>(i));
        }
    }
    return indices;
}