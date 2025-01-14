class Solution {
 public:
  int minimumLength(string s) {
    // SOLUTION 1 , T.C : O(N) & S.C = O(26)
    int ans = 0;
    vector<int> count(26);

    for (const char c : s)
        count[c - 'a']++;

    for (int i = 0; i < 26; ++i)
      if (count[i] > 0)
        ans += count[i] % 2 == 0 ? 2 : 1;

    return ans;

     // SOLUTION 2 , T.C : O(N) & S.C = O(N)
    // unordered_map<int , int>count;
    // for(auto ele : s){
    //     count[ele]++;
    // }
    // for(auto pair : count){
    //     int freq = pair.second;
    //     if(freq > 0){
    //         freq = (freq%2 == 0 ? 2 : 1);
    //         ans += freq;
    //     }
    // }
    // return ans;
  }
};
