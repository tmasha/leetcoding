class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        
        int N = s.size();
        if (N == 0) return N;
        
        int longest = 0;
        int start = 0;

        unordered_map<char, int> seen;

        for (int i = 0; i < N; ++i) {
            char c = s[i];
            if (seen.find(c) != seen.end() && seen[c] >= start) {
                longest = max(longest, i - start);
                start = seen[c] + 1;
            }
            seen[c] = i;
        }

        return max(longest, N - start);

    }
};