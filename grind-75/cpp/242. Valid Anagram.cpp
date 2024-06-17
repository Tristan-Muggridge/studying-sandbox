#include <vector>
#include <iostream>
#include <string>
#include <unordered_map>
#include <unordered_set>

using namespace std;

class Solution {
public:

    unordered_map<char, int> generateCharacterFrequencyMap (string s) {
        unordered_map<char, int> charOccurrenceMap = {};

        for ( char c : s ) {
            charOccurrenceMap[c]++;
        }

        return charOccurrenceMap;
    }

    bool isAnagram(string s, string t) {

        if (s.length() != t.length()) return false;
        
        unordered_map<char, int> sCharOccurrenceMap = generateCharacterFrequencyMap(s);
        unordered_map<char, int> tCharOccurrenceMap = generateCharacterFrequencyMap(t);
        
        return sCharOccurrenceMap == tCharOccurrenceMap;
    }
};