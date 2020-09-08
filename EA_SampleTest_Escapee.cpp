//#include <iostream>
//#include <cstring>
//#include <queue>
//#include <vector>
//using namespace std;
//
//#define endl "\n"
//
//int N, M, R, C, L;
//int Array[51][51];
//int visit[51][51];
//int ans = 0;
//int dx[4];
//int dy[4];
//
//struct point
//{
//	int x, y;
//	int step;
//};
//
//void input()
//{
//	cin >> N >> M >> R >> C >> L;
//
//	for (int i = 0; i < N; i++)
//		for (int j = 0; j < M; j++)
//			cin >> Array[i][j];
//}
//
////움직일 수 있는 곳
//int Pmove(int X, int Y)
//{
//	int cnt = 2;
//	if (Array[Y][X] == 1)
//	{
//		dx[0] = 0; dx[1] = 0; dx[2] = -1; dx[3] = 1;
//		dy[0] = 1; dy[1] = -1; dy[2] = 0; dy[3] = 0;
//		cnt = 4;
//	}
//
//	else if (Array[Y][X] == 2)
//	{
//		dx[0] = 0; dx[1] = 0;
//		dy[0] = 1; dy[1] = -1;
//	}
//
//	else if (Array[Y][X] == 3)
//	{
//		dx[0] = -1; dx[1] = 1;
//		dy[0] = 0; dy[1] = 0;
//	}
//
//	else if (Array[Y][X] == 4)
//	{
//		dx[0] = 0; dx[1] = 1;
//		dy[0] = -1; dy[1] = 0;
//	}
//
//	else if (Array[Y][X] == 5)
//	{
//		dx[0] = 0; dx[1] = 1;
//		dy[0] = 1; dy[1] = 0;
//	}
//
//	else if (Array[Y][X] == 6)
//	{
//		dx[0] = 0; dx[1] = -1;
//		dy[0] = 1; dy[1] = 0;
//	}
//
//	else if (Array[Y][X] == 7)
//	{
//		dx[0] = 0; dx[1] = -1;
//		dy[0] = -1; dy[1] = 0;
//	}
//
//	return cnt;
//}
//
////연결되어 있는지 확인
//int isP(int nx, int ny, int dir)
//{
//	if (dir == 1)
//	{
//		if (Array[ny][nx] == 1 || Array[ny][nx] == 2 || Array[ny][nx] == 5 || Array[ny][nx] == 6) return true;
//		else return false;
//	}
//
//	else if (dir == 2)
//	{
//		if (Array[ny][nx] == 1 || Array[ny][nx] == 2 || Array[ny][nx] == 4 || Array[ny][nx] == 7) return true;
//		else return false;
//	}
//
//	else if (dir == 3)
//	{
//		if (Array[ny][nx] == 1 || Array[ny][nx] == 3 || Array[ny][nx] == 4 || Array[ny][nx] == 5) return true;
//		else return false;
//	}
//
//	else if (dir == 4)
//	{
//		if (Array[ny][nx] == 1 || Array[ny][nx] == 3 || Array[ny][nx] == 6 || Array[ny][nx] == 7) return true;
//		else return false;
//	}
//}
//
////제자리에 멈추고 있을 수도 있으므로 visit활용
//void BFS()
//{
//	visit[R][C] = true;
//	queue<point> q;
//	q.push({ C, R, 1 });
//	ans++;
//
//	while (!q.empty())
//	{
//		int X = q.front().x;
//		int Y = q.front().y;
//		int step = q.front().step;
//		q.pop();
//
//		if (step == L)
//			return;
//
//		int c = Pmove(X, Y);
//
//		for (int i = 0; i < c; i++)
//		{
//			int nx = X + dx[i];
//			int ny = Y + dy[i];
//
//			int dir = 0;
//			if (dx[i] == 0 && dy[i] == -1) dir = 1;
//			else if (dx[i] == 0 && dy[i] == 1) dir = 2;
//			else if (dx[i] == -1 && dy[i] == 0) dir = 3;
//			else if (dx[i] == 1 && dy[i] == 0) dir = 4;
//
//			if (nx > -1 && nx < M && ny > -1 && ny < N)
//			{
//				if (isP(nx, ny, dir))
//				{
//					if (Array[ny][nx] != 0 && visit[ny][nx] == false)
//					{
//						visit[ny][nx] = true;
//						ans++;
//						q.push({ nx, ny, step + 1 });
//					}
//				}
//			}
//		}
//	}
//
//}
//
//void solve()
//{
//	BFS();
//
//	cout << ans << endl;
//}
//
//int main()
//{
//	std::ios::sync_with_stdio(false);
//	cin.tie(NULL);
//
//	int T;
//	cin >> T;
//	for (int num = 1; num < T + 1; num++)
//	{
//		memset(visit, 0, sizeof(visit));
//		memset(Array, 0, sizeof(Array));
//		ans = 0;
//
//		input();
//
//		cout << "#" << num << " ";
//		solve();
//	}
//	
//	return 0;
//}