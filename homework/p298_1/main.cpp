#include <iostream>
#include <string>

void printStr(std::string *str, int n = 1);

int main() {
    using namespace std;
    string str;
    cout << "input a string:" << endl;
    getline(cin, str);
    int n = 10;
    printStr(&str);
    return 0;
}


void printStr(std::string *str, int n) {
    using namespace std;
    if (n == 0)
        return;
    cout << "The string is \"" << *str << "\"" << endl;
    printStr(str, --n);
};
