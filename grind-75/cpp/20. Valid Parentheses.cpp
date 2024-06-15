#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

bool isValid(string s) {
    if (s.length() % 2 != 0) return false;

    unordered_map<char, char> closerToOpener = {
        {')', '('},
        {']', '['},
        {'}', '{'}
    };

    vector<char> stack;

    for (char c : s) {

        // Check to see if c is in map (meaning it's a closer)
        auto it = closerToOpener.find(c);

        if ( it != closerToOpener.end() ) {
            if ( !stack.empty() || stack.back() != it->second ) {
                return false;
            }

            stack.pop_back();
        }

        stack.push_back(c);
    }

    return stack.empty();
}