//  ALGORITHM:(PREFIX SUM PROBLEM)
// STEP 1 : CREATE AN ARRAY PREFIXSUM ,  WHERE EACH ELE AT IDX i STORE COUNT OF "VOWEL WORDS" FROM 0 TO i IN WORDS ARRAY 
// STEP 2 : CREATE A VECTOR ANS
// STEP 3 : TRAVERSE THE QUERIES ARRAY , FIND LEFT AND RIGHT THEN USE 
//            ans[i] = prefixSum[right] - prefixSum[left-1] (if left > 0)
//            ans[i] = prefixSum[right]  if(left <=0)
// STEP 4 : RETURN THE ANS VECTOR 



class Solution {
public:
    vector<int> vowelStrings(vector<string>& words, vector<vector<int>>& queries) {
        int n = words.size();
        vector<int>prefixSum(n);
        int vowel = 0;
        for(int i=0 ; i<n ; i++){
            string str = words[i];
            int s = str.size();
            if((str[0] == 'a' || str[0] == 'e' || str[0] == 'i' || str[0] == 'o' || str[0] == 'u') &&
            (str[s-1] == 'a' || str[s-1] == 'e' || str[s-1] == 'i' || str[s-1] == 'o' || str[s-1] == 'u') ){
                vowel++;
            }
            prefixSum[i] = vowel;
        }

        int m = queries.size();
        vector<int>ans(m);
        int countV = 0;
        for(int i=0 ; i<m ; i++){
            vector<int>a = queries[i];
                int left = a[0];
                int right = a[1];
                if(left > 0){
                    ans[i] = prefixSum[right] - prefixSum[left-1];
                }
                else{
                    ans[i] = prefixSum[right];
                }
        }
        return ans;
    }
};

// COMPLEXITY 
// T.C : O(n+m) , WHERE n = SIZE OF WORD ARRAY & m = SIZE OF QUERIES ARRAY
// S.C : O(n+m)
