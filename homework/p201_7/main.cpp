#include <iostream>

int main() {
    using namespace std;
    char word[20];
    int count_words_vowels = 0;
    int count_words_consonants = 0;
    int count_others = 0;
    char ch;
    cout << "Enter words (q to quit)" << endl;
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
        if (isalpha(word[0])) {
            switch (tolower(word[0])) {
                case 'a':
                case 'e':
                case 'i':
                case 'o':
                case 'u':
                    count_words_vowels++;
                    break;
                default:
                    count_words_consonants++;
            }
        } else {
            count_others++;
        }
        if (word[i-1] == 'q' && ch == '\n')
            break;
    }
    cout << count_words_vowels << " words beginning with vowels" << endl;
    cout << count_words_consonants << " words beginning with consonants" << endl;
    cout << count_others << " others" << endl;
    return 0;
}