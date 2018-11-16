#include <iostream>
#include <string>
#include <vector>
#include <cstring>

using namespace std;
struct patron {
    string name;
    double amount;
};

int main() {

    int num;
    cout << "输入捐款者数目：" << endl;
    cin >> num;
    vector<patron> patrons(num);
    vector<bool> flags(num);
    for (int i = 0; i < num; i++) {
        string name;
        double amount;
//        getline(cin, name);
        cin >> name;
        patrons[i].name = name;
        cin >> amount;
        patrons[i].amount = amount;
    }

    for (int i = 0; i < num; ++i) {
        if (patrons.at(i).amount > 1000)
            flags.at(i) = true;
        else
            flags.at(i) = false;
    }

    cout << "----Grand Patrons----" << endl;
    for (int i = 0; i < num; ++i) {
        if (flags.at(i))
            cout << patrons.at(i).name << "\t" << patrons.at(i).amount << endl;
    }
    cout << endl;
    cout << "-------Patrons-------" << endl;
    for (int i = 0; i < num; ++i) {
        if (!flags.at(i))
            cout << patrons.at(i).name << "\t" << patrons.at(i).amount << endl;
    }
    return 0;
}