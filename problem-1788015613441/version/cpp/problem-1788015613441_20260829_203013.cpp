// Last updated: 8/29/2026, 8:30:13 PM
1class Solution {
2public:
3    int minBishopMoves(vector<int>& source, vector<int>& target) {
4        int s1 = source[0], s2 = source[1];
5        int t1 = target[0], t2 = target[1];
6
7        // different color squares -> unreachable
8        if ((s1 + s2) % 2 != (t1 + t2) % 2) return -1;
9
10        // same square
11        if (s1 == t1 && s2 == t2) return 0;
12
13        // same diagonal (either direction)
14        if (s1 - s2 == t1 - t2 || s1 + s2 == t1 + t2) return 1;
15
16        // same color, different diagonal -> always 2 moves on empty 8x8 board
17        return 2;
18    }
19};