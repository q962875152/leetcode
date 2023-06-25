class Solution {
public:
    string replaceSpace(string s) {
        while (true) {
            auto pos = s.find(' ');
            if (std::string::npos ==  pos) {
                return s;
            }

            s.replace(pos, 1, "%20");
        }
    }
};