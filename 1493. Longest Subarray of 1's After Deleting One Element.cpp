class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int n = nums.size();
        int j = 0;
        int mx = 0;
        int prevcnt = 0 , cnt = 0;
        for(int i = 0 ; i < n ; i++) {
            if(nums[i] == 1) cnt++;
            else {
                mx = max(mx,cnt+prevcnt);
                prevcnt = cnt;
                cnt = 0;
            }
        }
        mx = max(mx,cnt+prevcnt);
        return mx == n ? n-1 : mx;
    }
};