// Last updated: 9/1/2026, 11:35:35 PM
1class Solution {
2public:
3    int minMoves(vector<string>& classroom, int energy) {
4        int m = classroom.size(), n = classroom[0].size();
5        int startR = -1, startC = -1, litterCount = 0;
6        vector<vector<int>> litterId(m, vector<int>(n, -1));
7
8        for (int i = 0; i < m; i++) {
9            for (int j = 0; j < n; j++) {
10                char c = classroom[i][j];
11                if (c == 'S') {
12                    startR = i;
13                    startC = j;
14                } else if (c == 'L') {
15                    litterId[i][j] = litterCount++;
16                }
17            }
18        }
19
20        if (litterCount == 0) return 0; 
21
22        int fullMask = (1 << litterCount) - 1;
23
24        
25        vector<vector<vector<vector<bool>>>> visited(
26            m, vector<vector<vector<bool>>>(
27                   n, vector<vector<bool>>(
28                          energy + 1, vector<bool>(fullMask + 1, false))));
29
30        queue<tuple<int, int, int, int>> q; 
31        q.push({startR, startC, energy, 0});
32        visited[startR][startC][energy][0] = true;
33
34        int dr[4] = {-1, 1, 0, 0};
35        int dc[4] = {0, 0, -1, 1};
36
37        int moves = 0;
38        while (!q.empty()) {
39            int sz = q.size();
40            for (int i = 0; i < sz; i++) {
41                auto [r, c, e, mask] = q.front();
42                q.pop();
43
44                if (mask == fullMask) return moves;
45                if (e == 0) continue; 
46
47                for (int d = 0; d < 4; d++) {
48                    int nr = r + dr[d], nc = c + dc[d];
49                    if (nr < 0 || nr >= m || nc < 0 || nc >= n) continue;
50                    if (classroom[nr][nc] == 'X') continue;
51
52                    int ne = (classroom[nr][nc] == 'R') ? energy : e - 1;
53                    int nmask = mask;
54                    if (litterId[nr][nc] != -1) {
55                        nmask |= (1 << litterId[nr][nc]);
56                    }
57
58                    if (!visited[nr][nc][ne][nmask]) {
59                        visited[nr][nc][ne][nmask] = true;
60                        q.push({nr, nc, ne, nmask});
61                    }
62                }
63            }
64            moves++;
65        }
66
67        return -1;
68    }
69};