#include <iostream>
#include <fstream>

int main() {
    using namespace std;
    char filename[60];
    int count = 0;
    char ch;
    ifstream inFile;
    cout << "path:" << endl;
    cin >> filename;
    inFile.open(filename);
    while (inFile.good() && inFile.get(ch)){
        if (isalpha(ch))
            count++;
    }
    cout << count << endl;
    return 0;
}