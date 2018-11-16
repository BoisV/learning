#include <iostream>
#include <cstring>


struct CandyBar {
    char brand[30];
    double weight;
    int calories;
};

void getCandyBar(CandyBar &candyBar, const char *brand = const_cast<char *>("Millennium"), const double weight = 2.85, const int calories = 350);

void showCandyBar(const CandyBar &candyBar);

int main() {
    using namespace std;
    CandyBar candyBar;
    getCandyBar(candyBar);
    showCandyBar(candyBar);
    getCandyBar(candyBar, const_cast<char *>("BOIS"));
    showCandyBar(candyBar);
    getCandyBar(candyBar, const_cast<char *>("Apple"), 3.98);
    showCandyBar(candyBar);
    getCandyBar(candyBar, const_cast<char *>("Banana"), 4.86, 400);
    showCandyBar(candyBar);
    return 0;
}

void getCandyBar(CandyBar &candyBar, const char *brand, const double weight, const int calories) {
    strcpy(candyBar.brand, brand);
    candyBar.weight = weight;
    candyBar.calories = calories;
};

void showCandyBar(const CandyBar &candyBar) {
    using namespace std;
    cout << candyBar.brand << " " << candyBar.weight << " " << candyBar.calories << endl;
};
