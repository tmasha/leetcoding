class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int N = nums.size();
        unordered_map<int, int> complements;

        for (int i = 0; i < N; ++i) {
            int curr = nums[i];
            int complement = target - curr;
            if (complements.find(complement) != complements.end())
                return {complements[complement], i};
            complements[curr] = i;
        }

        return {};
    }
};