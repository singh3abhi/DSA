class Solution {
public:
    int maximizeSum(vector<int>& nums, int k) {
        int max = 0;
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] > max){
                max = nums[i];
            }
        }
        
        int sol = max*k + (k-1)*(k+1-1)/2;
        return sol;
    }
};