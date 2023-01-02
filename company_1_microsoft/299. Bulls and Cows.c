class Solution {
public:
    string getHint(string secret, string guess) {
        int n = secret.length();
        int bulls =0 , cows = 0;
        vector<int> nums(10, 0);

         for(int i=0; i<n; i++){
               int s = secret[i]-'0';
               int g = guess[i]-'0';

               if(s == g) 
                   bulls++;

               else{
                   if(nums[s]++ < 0) 
                       cows++;
                   if(nums[g]-- > 0) 
                       cows++;
               }
         }
         return to_string(bulls) + 'A'+ to_string(cows) + 'B';
    }
};