class Solution {
public:
    int prefixCount(vector<string>& words, string pref) {
        int n = pref.size();
        int countPrefix = 0;
        // TIME COMPLEXITY : O(N*M)
        for(int i=0 ; i<words.size() ; i++){
            string s = words[i];
            if(s.size() < n) continue;
            else{
                bool flag = true;
                for(int j=0 ; j<n ; j++){
                    if(s[j] != pref[j]){
                        flag = false;
                        break;
                    }
                }
                if(flag == true)  countPrefix++;
            }
        }

        // OTHER OPTIMIZED SOLUTION (O(N))
        // for (int i = 0; i < words.size(); i++) {
        // if (words[i].size() >= n && words[i].substr(0, n) == pref) {
        //     countPrefix++;
        // }
    }
        return countPrefix;
    }
};