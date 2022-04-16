#include <vector>

using std::vector;

class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int leng1 = nums1.size();
        int leng2 = nums2.size();
        int leng = leng1 + leng2;
        vector<int> nums3;
        double ret = 0;
        auto iter1 = nums1.begin();
        auto iter2 = nums2.begin();
        while (iter1 != nums1.end() && iter2 != nums2.end()) {
            if (*iter1 <= *iter2) {
                nums3.push_back(*iter1);
                iter1++;
            } else {
                nums3.push_back(*iter2);
                iter2++;
            }
        }
        while (iter1 != nums1.end()) {
            nums3.push_back(*iter1);
            iter1++;
        }
        while (iter2 != nums2.end()) {
            nums3.push_back(*iter2);
            iter2++;
        }
        if (!(leng % 2)) {
            int index = leng / 2;
            ret = static_cast<double>(nums3[index - 1] + nums3[index]) / 2;
        } else {
            int index = leng / 2;
            ret = nums3[index];
        }
        return ret;
    }
};