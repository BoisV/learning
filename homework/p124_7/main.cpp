#include <iostream>
#include <string>
#include <cstring>

using namespace std;
struct Pizza {
    string bussiness;
    double diameter;
    double weight;
};

int main() {
    using namespace std;
    Pizza *pizza = new Pizza;
    cout << "输入披萨的公司信息：";
    getline(cin, pizza->bussiness);
    cout << "输入披萨的直径：";
    (cin >> pizza->diameter);
    cout << "输入披萨的重量：";
    cin >> pizza->weight;
    cout << "披萨产自"<< pizza->bussiness << "，直径为" << pizza->diameter << "厘米，重量为" << pizza->weight << "克。";
    return 0;
}