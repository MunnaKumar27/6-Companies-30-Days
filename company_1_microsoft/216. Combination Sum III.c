class Solution {
public:
    void solve(int ind,int sum, int n, vector<vector<int>>&ans,vector<int>temp,int k){
        //base case
        if(sum==n && k==0){
            ans.push_back(temp);
            return;
        }
        if(sum>n)
        return;
         
        // for 1 to 9 numbers
        for(int i=ind;i<=9;i++){
            if(i>n)
            break;

            temp.push_back(i);
            solve(i+1,sum+i,n, ans, temp, k-1);
            temp.pop_back();
        }
    }
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<int>temp;
        vector<vector<int>>ans;
        solve(1,0,n,ans,temp,k);
        return ans;
    }
};