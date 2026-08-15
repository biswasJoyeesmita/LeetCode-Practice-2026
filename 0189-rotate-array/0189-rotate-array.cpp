class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        if(k<0){
            return ;
        }
        int n = nums.size();
         k = k%n;
        std::reverse(nums.begin(), nums.end());
        std::reverse(nums.begin(), nums.begin()+k);
        std::reverse(nums.begin()+k, nums.end());
        return ;
    }
};