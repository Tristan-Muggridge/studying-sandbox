#include <iostream>
#include <vector>
#include <regex>

using namespace std;

class Solution {
public:
    bool isPalindrome(string s) {
        string cleaned = regex_replace(s, regex("[^a-zA-Z0-9]"), "");
        transform(cleaned.begin(), cleaned.end(), cleaned.begin(), ::tolower);

        int left = 0;
        int right = cleaned.size() - 1;

        while (left < right) {
            if (cleaned[left++] != cleaned[right--]) return false;
        }

        return true;
    }
};


int main() {
    Solution solution;
    cout << solution.isPalindrome("mam");
}