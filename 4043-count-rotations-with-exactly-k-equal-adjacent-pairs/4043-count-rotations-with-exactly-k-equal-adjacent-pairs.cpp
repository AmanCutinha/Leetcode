class Solution {
public:
    int countRotations(string s, int k) {
        int n = s.size();
        int ans = 0;

        for (int r = 0; r < n; r++) {

            // Create rotation
            string rotated = s.substr(r) + s.substr(0, r);

            int score = 0;

            // Count equal adjacent pairs
            for (int i = 0; i < n - 1; i++) {
                if (rotated[i] == rotated[i + 1]) {
                    score++;
                }
            }

            if (score == k) {
                ans++;
            }
        }

        return ans;
    }
};