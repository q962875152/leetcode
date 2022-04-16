#include <string>

using std::string;

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        string str;
        int leng = s.size();
        int max = 0;
        int tmp_num = 0;
        for (int i = 0; i < leng; i++) {
            for (int j = i; j < leng; j++) {
                if (str.find(s[j]) == string::npos) {
                    str.push_back(s[j]);
                } else {
                    break;
                }
            }
            tmp_num = str.size();
            if (tmp_num > max) {
                max = tmp_num;
            }
            str.clear();
        }
        return max;
    }
};