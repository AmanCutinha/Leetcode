class Solution {
public:
    int maxNumberOfFamilies(int n, vector<vector<int>>& reservedSeats) {
        unordered_map<int, int> rowMask;

        // Create bitmask for each row
        for (auto &seat : reservedSeats) {
            int row = seat[0];
            int col = seat[1];

            if (col >= 2 && col <= 9)
                rowMask[row] |= (1 << col);
        }

        int ans = (n - rowMask.size()) * 2;

        int left  = (1 << 2) | (1 << 3) | (1 << 4) | (1 << 5);
        int mid   = (1 << 4) | (1 << 5) | (1 << 6) | (1 << 7);
        int right = (1 << 6) | (1 << 7) | (1 << 8) | (1 << 9);

        for (auto &[row, mask] : rowMask) {
            bool L = (mask & left) == 0;
            bool M = (mask & mid) == 0;
            bool R = (mask & right) == 0;

            if (L && R)
                ans += 2;
            else if (L || M || R)
                ans += 1;
        }

        return ans;
    }
};