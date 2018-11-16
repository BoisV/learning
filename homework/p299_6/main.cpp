#include <iostream>
#include <cstring>

template<typename T>
T maxn(T arr[], int length) {
    T max = arr[0];
    for (int i = 1; i < length; ++i) {
        max = max < arr[i] ? arr[i] : max;
    }
    return max;
}

char *maxn(char **strings, int length) {
    char **p = strings;
    char *q = *p;
    int max = static_cast<int>(strlen(*p));
    for (int i = 1; i < length; ++i) {
        int strlength = static_cast<int>(strlen(*(p)));
        if (max < strlength) {
            max = strlength;
            q = *p;
        }
        p++;
    }
    return q;
}

int main() {
    int arr1[] = {1, 2, 3, 4, 5, 6};
    double arr2[] = {1.5, 1.3, 5.2, 9.1};
    char str1[] = {'a','\0'};
    char str2[] = {'e', 'b','\0'};
    char str3[] = {'q', 'd', 'q', 'z','\0'};
    char str4[] = {'p', 'c', 'q','\0'};
    char *strs[] = {str1, str2, str3, str4};

    std::cout << maxn(arr1, 6) << std::endl;
    std::cout << maxn(arr2, 4) << std::endl;
    std::cout << maxn(strs, 4) << std::endl;
    return 0;
}