// Last updated: 8/30/2026, 11:22:26 PM
class Solution {
public:
    int minBishopMoves(vector<int>& source, vector<int>& target) {
        int s1 = source[0], s2 = source[1];
        int t1 = target[0], t2 = target[1];

        // different color squares -> unreachable
        if ((s1 + s2) % 2 != (t1 + t2) % 2) return -1;

        // same square
        if (s1 == t1 && s2 == t2) return 0;

        // same diagonal (either direction)
        if (s1 - s2 == t1 - t2 || s1 + s2 == t1 + t2) return 1;

        // same color, different diagonal -> always 2 moves on empty 8x8 board
        return 2;
    }
};