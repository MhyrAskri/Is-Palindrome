#include <iostream>
#include <cctype>
#include <deque>
#include <string>
#include <vector>
#include <iomanip>

using namespace std;

bool isPalindrome(const string &s){

    deque<char> d;
    for(char c : s) {

        if (isalpha(c)) {

            d.push_back(toupper(c));

        }

    }

    char c1{};
    char c2{};
    while (d.size() > 1) {
        c1 = d.front();
        c2 = d.back();
        d.pop_front();
        d.pop_back();
        if (c1 != c2) {

            return false;

        }

        return true;

    }

}

int main() {

    vector<string> testString {
        "a",
        "aa",
        "aba",
        "abba",
        "abbcbba",
        "ab",
        "abc",
        "radar",
        "bob",
        "ana",
        "avid diva",
        "Amore, Roma",
        "A Toyota's a toyota",
        "A Santa at NASA",
        "C++",
        "A man, a plan, a cat, a ham, a yak, a yam, a hat, a canal-Panama",
        "This is a palindrome",
        "palindrome",
    };

    cout << boolalpha;
    cout << setw(8) << left << "Result" << "String" << endl;
    for(const auto &s : testString) {

        cout << setw(8) << left << isPalindrome(s) << s << endl;

    }
    cout << endl;

    return 0;
}
