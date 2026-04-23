class Solution {
public:
    int countSubArray(vector<int> nums, int k){
        int n = nums.size(), r = 0, l = 0, o = 0, a = 0;
        while(r < n){
            if(nums[r] % 2 == 1) o++;
            while(o > k){
                if(nums[l] % 2 == 1){
                    o--;
                }
                l++;
            }
            a = a + r - l + 1;
            r++;
        }
        return a;
    }
    int numberOfSubarrays(vector<int>& nums, int k) {
        return countSubArray(nums, k) - countSubArray(nums, k - 1);
    }
};