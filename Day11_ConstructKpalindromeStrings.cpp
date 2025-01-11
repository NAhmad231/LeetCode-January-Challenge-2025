class Solution {
public:
    bool canConstruct(string s, int k) {
        int n = s.size();
        if(n < k) return false; // if the length of the string is less than k , how can you produce k strings
        if( n == k) return true; // since each char's will individual strings which will be equal to k

        unordered_map<int,int>count;
        for(auto ele : s){
            count[ele]++; // count of each character
        } 
        int countOddFreq = 0;
        for(auto ele : count){
            if((ele.second) % 2 != 0) countOddFreq++;
        }
        if(countOddFreq > k) return false;
        else return true;
        //  return countOddFreq <= k;
    }
};