class Solution {
public:
    int maxScore(string s) {
        int n = s.size();
        int countOne = 0;
        for(char i : s){
            if(i == '1') countOne++;
        }
        int ans = 0;
        int countZero = 0;
        for(int i=0 ; i<n-1 ; i++){
            if(s[i] == '0') countZero++;
            else countOne--;

            ans = max(ans , countZero + countOne);
        }
        return ans;
    }
};