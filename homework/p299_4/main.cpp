#include <iostream>
#include <cstring>

using namespace std;


struct stringy {
    char *str;
    int ct;
};

void show(stringy stringy1, int num);

void show(const char chars[], int num);

void set(stringy stringy1, char *chars);

void show(const stringy stringy1, int num = 1) {
    while (num-- > 0) {
        cout << stringy1.str;
    }
}

void show(const char chars[], int num = 1) {
    while (num-- > 0) {
        cout << chars;
    }
}

void set(stringy stringy1, char *chars) {
    char * p = stringy1.str;
    strcpy(p, chars);
    stringy1.ct = static_cast<int>(strlen(chars));
}


int main() {
    stringy beany;
    char testing[] = "Reality isn't what it used to be.";
    set(beany, testing);
    show(beany);
    show(beany, 2);
    testing[0] = 'D';
    testing[1] = 'u';
    show(testing);
    show(testing, 3);
    show("Done!");
    return 0;
}