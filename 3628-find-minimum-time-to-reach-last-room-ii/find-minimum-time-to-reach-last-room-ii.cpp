class Solution {
public:
    int minTimeToReach(vector<vector<int>>& moveTime) {
        int n = moveTime.size();
        int m = moveTime[0].size();

        vector<vector<int>> time(n, vector<int>(m, INT_MAX));
        time[0][0] = 0;

        queue<pair<int, int>> q;
        q.push({0, 0});

        int dx[] = {0, 1, 0, -1};
        int dy[] = {1, 0, -1, 0};

        while (!q.empty()) {
            auto [x, y] = q.front();
            q.pop();

            int currentTime = time[x][y];

            for (int d = 0; d < 4; ++d) {
                int nx = x + dx[d];
                int ny = y + dy[d];

                if (nx >= 0 && nx < n && ny >= 0 && ny < m) {
                    int moveCost = ((x + y) % 2 == 0) ? 1 : 2;

                    int waitTime = max(moveTime[nx][ny], currentTime);
                    int newTime = waitTime + moveCost;

                    if (newTime < time[nx][ny]) {
                        time[nx][ny] = newTime;
                        q.push({nx, ny});
                    }
                }
            }
        }

        return time[n - 1][m - 1];
    }
};