class Solution {
public:
    int countPrefixSuffixPairs(vector<string>& words) {
        int count = 0;                    
        int numWords = words.size();       
        for (int i = 0; i < numWords; ++i) {
            string prefixSuffix = words[i];      
            for (int j = i + 1; j < numWords; ++j) {
                string candidate = words[j]; 
                if (candidate.find(prefixSuffix) == 0 &&
                    candidate.rfind(prefixSuffix) == candidate.length() - prefixSuffix.length()) {
                    count++;    
                }
            }
        }
        return count; 
    }
};