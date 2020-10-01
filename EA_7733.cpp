#include <iostream>
#include <cstring>
using namespace std;

int N;
int Array[101][101];
int visit[101][101];
int dx[] = { 0,0,1,-1 };
int dy[] = { 1,-1,0,0 };
int MAX_day = 0;

void input()
{
	memset(visit, 0, sizeof(visit));
	memset(Array, 0, sizeof(Array));
	MAX_day = 0;

	cin >> N;
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			cin >> Array[i][j];
			if (MAX_day < Array[i][j]) MAX_day = Array[i][j];
		}
	}
}

void Eat(int x)
{
	for (int i = 0; i < N; i++)
		for (int j = 0; j < N; j++)
			if (Array[i][j] == x) Array[i][j] = 0;
}

void DFS(int x, int y)
{
	if (visit[y][x] == true) return;
	visit[y][x] = true;

	for (int i = 0; i < 4; i++)
	{
		int nx = x + dx[i];
		int ny = y + dy[i];

		if (nx > -1 && nx < N && ny > -1 && ny < N)
			if (visit[ny][nx] == false && Array[ny][nx] > 0)
				DFS(nx, ny);
	}
}

void solve()
{
	int MAX = 0;
	for (int i = 0; i <= MAX_day; i++)
	{
		Eat(i);
		memset(visit, 0, sizeof(visit));
		int cnt = 0;
		for (int j = 0; j < N; j++)
		{
			for (int k = 0; k < N; k++)
			{
				if (visit[j][k] == false && Array[j][k] > 0)
				{
					cnt++;
					DFS(k, j);
				}
			}
		}
		if (MAX < cnt)  MAX = cnt;
	}

	cout << MAX << "\n";
}

int main()
{
	std::ios::sync_with_stdio(false);
	cin.tie(NULL);

	int T;
	cin >> T;
	for (int num = 1; num < T + 1; num++)
	{
		input();
		cout << "#" << num << " ";
		solve();
	}

	return 0;
}