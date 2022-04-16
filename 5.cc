#include<string>

using std::string;

class Solution {
public:
    string longestPalindrome(string s) {
        int leng = s.size();
        int max_leng = 0;
        int last_begin = 0;
        int count = 0;
        for (int i = 0; i < leng; i++)
            for (int j = 1; j <= leng - i; j++) {
                int begin = i;
                int end = i + j - 1;
                while (begin <= end)
                    if (s[begin] == s[end]) {
                        begin++;
                        end--;
                    } else {
                        break;
                    }
                if (begin >= end)
                    if (max_leng < j) {
                        max_leng = j;
                        last_begin = i;
                        count = j;
                    }
            }
        string str = s.substr(last_begin, count);//只是为了程序运行不超时
        return s.substr(last_begin, count);
    }
};