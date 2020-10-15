#include <iostream>
#include <vector>
#include <algorithm>
#include <cstring>
#include <functional>
using namespace std;

//칸이 최대 700이 아니라 350칸이었음. 칸의 수가 곧 실행시간이므로 700으로 잡았더니 TLE였던 것
//20.10.16 1시간 3분

int N, M, K;
int dx[] = { 0,0,-1,1 };
int dy[] = { 1,-1,0,0 };
int visit[351][351];

struct sepo
{
	int time;
	int life;
	int live;
	int dead;
};

vector<sepo> Array[351][351];

struct point
{
	int x;
	int y;
};

void input()
{
	cin >> N >> M >> K;
	for (int i = 150; i < 150 + N; i++)
	{
		for (int j = 150; j < 150 + M; j++)
		{
			int x;
			cin >> x;
			if (x == 0) continue;
			visit[i][j] = true;
			Array[i][j].push_back({ x, x, 0, 0 });
		}
	}
}

void solve()
{
	while (K--)
	{
		vector<point> v;
		for (int i = 0; i < 351; i++)
		{
			for (int j = 0; j < 351; j++)
			{
				if (visit[i][j] == false) continue;
				int x = j;
				int y = i;
				if (Array[y][x][0].dead == 1) continue;

				if (Array[y][x][0].live == 1 && Array[y][x][0].time > 0)
				{
					int l = Array[y][x][0].life;

					for (int k = 0; k < 4; k++)
					{
						int nx = x + dx[k];
						int ny = y + dy[k];

						if (visit[ny][nx] == false)
						{
							if (Array[ny][nx].size() == 0)
							{
								Array[ny][nx].push_back({ l, l, 0, 0 });
								v.push_back({ nx, ny });
							}
							else if (Array[ny][nx][0].life < l) Array[ny][nx][0] = { l, l, 0, 0 };
						}
					}
				}

				Array[y][x][0].time--;
				if (Array[y][x][0].time == 0)
				{
					if (Array[y][x][0].live == 1)
						Array[y][x][0].dead = 1;
					else
					{
						Array[y][x][0].live = 1;
						Array[y][x][0].time = Array[y][x][0].life;
					}
				}
			}
		}

		for (int i = 0; i < v.size(); i++)
			visit[v[i].y][v[i].x] = true;

		v.clear();
	}

	int cnt = 0;
	for (int i = 0; i < 351; i++)
		for (int j = 0; j < 351; j++)
			if (visit[i][j] == true && Array[i][j][0].dead == 0)
				cnt++;

	cout << cnt << "\n";
}

int main()
{
	std::ios::sync_with_stdio(false);
	cin.tie(NULL);

	int T;
	cin >> T;
	for (int num = 1; num < T + 1; num++)
	{
		memset(visit, 0, sizeof(visit));
		for (int i = 0; i < 351; i++)
			for (int j = 0; j < 351; j++)
				Array[i][j].clear();

		input();
		cout << "#" << num << " ";
		solve();
	}
	return 0;
}