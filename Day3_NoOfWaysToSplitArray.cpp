class Solution {
public:
    int waysToSplitArray(vector<int>& nums) {
        int n = nums.size();
        vector<long long>prefixSum(n);
        prefixSum[0] = nums[0];
        for(int i=1 ; i<n ; i++){
            prefixSum[i] = nums[i] + prefixSum[i-1];
        }
        int validSplit = 0;
        for(int i=0 ; i<n-1 ; i++){
            long long leftSum = prefixSum[i];
            long long rightSum = (prefixSum[n-1] - prefixSum[i]);
            if(leftSum >= rightSum) validSplit++;
        }
        return validSplit;
    }
};

// T.C : O(N)
// S.C : O(N)