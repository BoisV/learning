#include <iostream>
#include <cstring>


int main() {
    using namespace std;
    char word[20];
    char ch;
    int count = 0;
    cout << "Enter words (to stop, type the word done):" << endl;
    while (true) {
        int i = 0;
        cin.get(ch);
        while (ch != ' ') {
            word[i++] = ch;
            cin.get(ch);
            if (ch == '\n')
                break;
        }
        word[i] = '\0';
        if (strcmp(word, "done")!=0) {
            count++;
        } else {
            break;
        }
    }
    cout << "You entered a total of " << count << " words.";
    return 0;
}