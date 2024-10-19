#include <iostream>
#include <string>
using namespace std;

bool isPalindrome(const string& word) {
    int left = 0;
    int right = word.length() - 1;

    while (left <= right) {
        if (word[left] != word[right]) {
            return false;
        }

        ++left;
        --right;
    }

    return true;
}

int main() {
    cout << "check kata " << "\n" << endl;
    cout << "Input kata: ";

   string inputWord;
   cin >> inputWord;

    bool result = isPalindrome(inputWord);

    if (result)
       cout << "Hasilnya : True" << '\n';
    else
     cout << "Hasilnya : False" << '\n';

    return 0;
}