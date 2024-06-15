#include <iostream>
#include <vector>
#include <limits>

using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minPrice = numeric_limits<int>::max();
        int profit = 0;

        for ( int price : prices ) {
            if (minPrice > price) minPrice = price;
            if (profit < price - minPrice) profit = price - minPrice;
        }      

        return profit;
    }
};