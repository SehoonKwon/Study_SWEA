#include <iostream>
#include <cstring>
#include <vector>
using namespace std;

//20.10.15 46분25초

int N;
int Array[102][102];
int dx[] = { 0,0,-1,1 };
int dy[] = { 1,-1,0,0 };
int MAX;

struct point
{
	int x;
	int y;
};

struct HOLE
{
	int x1, y1;
	int x2, y2;
};

vector<point> space;
HOLE WH[11];

void input()
{
	cin >> N;
	for (int i = 1; i < N + 1; i++)
	{
		for (int j = 1; j < N + 1; j++)
		{
			cin >> Array[i][j];
			if (Array[i][j] == 0)
				space.push_back({ j, i });
			else if (Array[i][j] >= 6)
			{
				int num = Array[i][j];
				if (WH[num].x1 == 0)
				{
					WH[num].x1 = j;
					WH[num].y1 = i;
				}
				else
				{
					WH[num].x2 = j;
					WH[num].y2 = i;
				}
			}
		}
	}
}

int go(int x, int y, int dir)
{
	int sx = x, sy = y;
	int score = 0;
	while (1)
	{
		x += dx[dir];
		y += dy[dir];

		//종료조건
		if (Array[y][x] == -1 || (x == sx && y == sy))
			break;

		//방향 전환
		if (x == 0)
		{
			dir = 3;
			score++;
			continue;
		}
		else if (x == N + 1)
		{
			dir = 2;
			score++;
			continue;
		}
		else if (y == 0)
		{
			dir = 0;
			score++;
			continue;
		}
		else if (y == N + 1)
		{
			dir = 1;
			score++;
			continue;
		}

		//웜홀
		if (Array[y][x] >= 6)
		{
			int num = Array[y][x];
			if (x == WH[num].x1 && y == WH[num].y1)
			{
				x = WH[num].x2;
				y = WH[num].y2;
			}
			else
			{
				x = WH[num].x1;
				y = WH[num].y1;
			}
			continue;
		}

		if (Array[y][x] == 1)
		{
			if (dir == 2)
				dir = 1;
			else if (dir == 0)
				dir = 3;
			else if (dir == 1)
				dir = 0;
			else if (dir == 3)
				dir = 2;

			score++;
			continue;
		}
		else if (Array[y][x] == 2)
		{
			if (dir == 0)
				dir = 1;
			else if (dir == 1)
				dir = 3;
			else if (dir == 2)
				dir = 0;
			else if (dir == 3)
				dir = 2;

			score++;
			continue;
		}
		else if (Array[y][x] == 3)
		{
			if (dir == 0)
				dir = 1;
			else if (dir == 1)
				dir = 2;
			else if (dir == 2)
				dir = 3;
			else if (dir == 3)
				dir = 0;

			score++;
			continue;
		}
		else if (Array[y][x] == 4)
		{
			if (dir == 0)
				dir = 2;
			else if (dir == 1)
				dir = 0;
			else if (dir == 2)
				dir = 3;
			else if (dir == 3)
				dir = 1;

			score++;
			continue;
		}
		else if (Array[y][x] == 5)
		{
			if (dir == 0)
				dir = 1;
			else if (dir == 1)
				dir = 0;
			else if (dir == 2)
				dir = 3;
			else if (dir == 3)
				dir = 2;

			score++;
			continue;
		}
	}

	return score;
}

void solve()
{
	//각 0 위치에서 4방향으로 돌리기 반복 -> 스코어 갱신
	int len = space.size();
	for (int i = 0; i < len; i++)
	{
		int x = space[i].x;
		int y = space[i].y;
		for (int j = 0; j < 4; j++)
		{
			int res = go(x, y, j);
			if (MAX < res) MAX = res;
		}
	}
	cout << MAX << "\n";
}

int main()
{
	std::ios::sync_with_stdio(false);
	cin.tie(NULL);

	int T;
	cin >> T;
	for (int i = 1; i < T + 1; i++)
	{
		memset(Array, 0, sizeof(Array));
		space.clear();
		for (int j = 0; j < 11; j++)
			WH[j] = { 0,0,0,0 };
		MAX = 0;

		input();
		cout << "#" << i << " ";
		solve();
	}
	return 0;
}