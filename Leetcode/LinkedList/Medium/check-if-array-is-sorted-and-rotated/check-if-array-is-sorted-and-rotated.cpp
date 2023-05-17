class Solution {
public:
    // TC = O(N);
    // SC = O(1);
    bool check(vector<int>& nums) {
        // [1,1,1,1] , count = 0 
        // [1,2,3,4,5] -> count = 1
        // [3,4,5,1,2] -> breaks once count = 1
        // count increases when array breaks

        int count = 0;
        int n = nums.size();
        for(int i = 1; i < n; i++){
            if(nums[i] < nums[i-1]){
                count++;
            }
        }
        if(nums[n-1] > nums[0]){
            count++;
        }
        return count <= 1 ;
    }
};