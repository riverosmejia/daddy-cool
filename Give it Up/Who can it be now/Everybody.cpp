#include <iostream>
#include <algorithm>

extern "C" int findOriginalLength(int parts[], int n) {
    std::sort(parts, parts + n);

    int result = parts[0] + parts[n - 1];

    for (int i = 1; i < n / 2; ++i) {
        int current_sum = parts[i] + parts[n - 1 - i];

        if (current_sum > result) {
            result = current_sum;
        }
    }

    return result;
}