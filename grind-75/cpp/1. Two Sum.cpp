#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {
    unordered_map<int, int> valueToLocationMap;

    for (int i = 0; i < nums.size(); ++i) {
        int num = nums[i];  // current number
        int numTarget = target - num;

        // Check if complement is in map
        auto it = valueToLocationMap.find(numTarget);
        if ( it != valueToLocationMap.end()) {
            return { it->second, i};
        }

        valueToLocationMap[num] = i;
    }

    return {};
}