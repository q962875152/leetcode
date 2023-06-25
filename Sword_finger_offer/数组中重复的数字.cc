#include <vector>
#include <unordered_map>

using namespace std;

class Solution {
public:
    int findRepeatNumber(vector<int>& nums) {
        int len = nums.size();
        if (len < 2) {
            return 0;
        }

        unordered_map<int, bool> map;

        for (const auto& value : nums) {
            if (map[value]) {
                return value;
            }
            map[value] = true;
        }

        return 0;
    }
};