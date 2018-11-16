#include <iostream>

template<typename T>
T max5(T arr[5]) {
    T max = arr[0];
    for (int i = 1; i < 5; ++i) {
        max = max < arr[i] ? arr[i] : max;
    }
    return max;
}

int main() {
    int arr1[] = {1, 2, 3, 4, 5};
    double arr2[] = {1.5, 1.3, 5.2, 9.1, 0.7};
    std::cout << max5(arr1) << std::endl;
    std::cout << max5(arr2) << std::endl;
    return 0;
}