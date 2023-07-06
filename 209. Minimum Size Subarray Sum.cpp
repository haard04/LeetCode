class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n = nums.size();
        int mn = INT_MAX;
        int i = 0 , j = 0;
        int sum = 0;
        while(i < n ) {
            while(j < n && sum < target) {
                sum += nums[j];
                j++;
            }
            if(sum < target) break;
            mn = min(mn,j-i);
            sum -= nums[i];
            i++;
        }
        return mn == INT_MAX ? 0 : mn;
    }
};