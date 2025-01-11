/// THOUGHT PROCESS
// A STRING TO BE PALINDROMIC MUST CONTAIN PAIR OF CHARACTERS LIKE  "abba" or "ecbbce"
// IF WE HAVE A CHARCTER OF SINGLE FREQUENCY THEN IT MUST BE THE MIDDLE ELEMENT OF THE STRING , TO MAKE IT AS A PALINDROMIC STRING i.e " abeba" of " cefdfec"
// SO THE CHARACTES HAVING THE EVEN FREQUENCY ARE NOT CREATING ANY PROBLEM , THEY CAN EASILY PARTICIPATE TO FORM OF A PALINDROMIC STRING OF SIZE K 
/// BUT THE PROBLEM COMES WITH THE CHARACTERS HAVING THE ODD FREQUENCY , IF THE NUMBER OF THE CHARACTERS HAVING THE ODD FRWQUENCY ID GREATER THAN 'K' THEN PALINDROMIC STRING OS SIZE KCAN NEVER BE FORMED
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

// TIME COMPLEXITY : O(N)
// SPACE COMPLEXITY : O(N) // CAN BE REDUCED BY USING A VECTOR OF SIZE 26 

// OPTIMIZED SPACE COMPLEXIY: SPACE COMPLEXITY : O(26)
class Solution {
public:
    bool canConstruct(string s, int k) {
        int n = s.size();
        if(n < k) return false; // if the length of the string is less than k , how can you produce k strings
        if( n == k) return true; // since each char's will individual strings which will be equal to k

        vector<int>count(26,0);
        for(auto ele : s){
            count[ele-'a']++; // count of each character
        } 
        int countOddFreq = 0;
        for(auto ele : count){
            if(ele) % 2 != 0) countOddFreq++;
        }
        if(countOddFreq > k) return false;
        else return true;
        //  return countOddFreq <= k;
    }
};
