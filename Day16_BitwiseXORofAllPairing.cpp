class Solution {
public:
    int xorAllNums(vector<int>& nums1, vector<int>& nums2) {
        int result = 0;

        // If nums2 has an odd number of elements, XOR all elements of nums1
        if (nums2.size() % 2 == 1) {
            for (int num : nums1) {
                result ^= num;
            }
        }

        // If nums1 has an odd number of elements, XOR all elements of nums2
        if (nums1.size() % 2 == 1) {
            for (int num : nums2) {
                result ^= num;
            }
        }

        // Return the final result of the XOR operation
        return result;
    }
};