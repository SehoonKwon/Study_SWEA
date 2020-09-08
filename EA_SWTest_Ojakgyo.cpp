//#include <iostream>
//#include <queue>
//#include <algorithm>
//#include <cstring>
//using namespace std;
//
//#define endl "\n"
//
//// 2시간 걸림 / BJ에도 문제있음 16137 / 문제이해 잘못해서 뻘짓 밑에 주석처리했음
//
//int T, N, M;
//int Array[11][11], Array2[11][11];
//int visit[11][11];
//int dx[] = { 0,0,-1,1 };
//int dy[] = { 1,-1,0,0 };
//int ans = 9999;
//
//struct MOVE
//{
//	int x;
//	int y;
//	int time;
//	int flag;
//};
//
//struct point
//{
//	int x;
//	int y;
//};
//
//vector<point> v;
//
//void input()
//{
//	cin >> N >> M;
//
//	for (int i = 0; i < N; i++)
//	{
//		for (int j = 0; j < N; j++)
//		{
//			cin >> Array[i][j];
//			if (Array[i][j] == 0) v.push_back({ j, i });
//		}
//	}
//
//	memcpy(Array2, Array, sizeof(Array));
//}
//
//void check()
//{
//	int cnt;
//	for (int i = 0; i < v.size(); i++)
//	{
//		cnt = 0;
//		int x = v[i].x;
//		int y = v[i].y;
//
//
//		//교차하는 경우
//		int lr = 0, ud = 0;
//		for (int i = 0; i < 4; i++)
//		{
//			int nx = x + dx[i];
//			int ny = y + dy[i];
//
//			if (nx > -1 && nx < N && ny > -1 && ny < N)
//			{
//				if (i < 2) //상하 경우
//				{
//					if (Array[ny][nx] != 1) ud = 1;
//				}
//				else
//					if (Array[ny][nx] != 1) lr = 1;
//			}
//		}
//
//		if (ud == 1 && lr == 1)
//		{
//			v.erase(v.begin() + i);
//			i--;
//		}
//	}
//}
//
//int BFS()
//{
//	visit[0][0] = true;
//	queue<MOVE> q;
//	q.push({ 0, 0, 0, 0 });
//
//	int MIN = 999;
//
//	while (!q.empty())
//	{
//		int X = q.front().x;
//		int Y = q.front().y;
//		int Time = q.front().time;
//		int Flag = q.front().flag;
//		q.pop();
//
//		if (X == N - 1 && Y == N - 1)
//		{
//			while (!q.empty()) q.pop();
//			return Time;
//		}
//
//		for (int i = 0; i < 4; i++)
//		{
//			int nx = X + dx[i];
//			int ny = Y + dy[i];
//
//			if (nx > -1 && nx < N && ny > -1 && ny < N)
//			{
//				if (Array[ny][nx] == 1 && visit[ny][nx] == false)
//				{
//					visit[ny][nx] = true;
//					q.push({ nx, ny, Time + 1, 0 });
//				}
//
//				//절벽인 경우
//				else if (Array[ny][nx] > 1 && visit[ny][nx] == false)
//				{
//					
//					if (Flag == 1)
//					{
//						continue; //절벽 건넜으면 길 지나기 전까진 절벽 못건넘
//						//q.push({ X, Y, Time + 1, 0 }); //오작교 건넌거 초기화 <- 초기에 시도 방법 / 연속해서 못 건너는걸 1초 쉬는 걸로 이해한 경우 / 16개중 15개 테이스 통과
//					}
//
//					else
//					{
//						int D = Time % Array[ny][nx];
//						D = Array[ny][nx] - D;
//
//						if (D == 1)
//						{
//							visit[ny][nx] = true;
//							q.push({ nx, ny, Time + 1, 1 }); //오작교 건너면 한 턴 쉴 수 있도록 flag = 1
//						}
//						else
//						{
//							q.push({ X, Y, Time + 1, 0 });
//						}
//					}
//				}
//			}
//		}
//	}
//
//	return MIN;
//}
//
//void solve()
//{
//	check();
//
//	for (int i = 0; i < v.size(); i++)
//	{
//		memcpy(Array, Array2, sizeof(Array));
//		memset(visit, 0, sizeof(visit));
//		Array[v[i].y][v[i].x] = M;
//
//		int t = BFS();
//		
//		if(t > -1)	ans = min(ans, t);
//	}
//
//	cout << ans << endl;
//}
//
//int main()
//{
//	std::ios::sync_with_stdio(false);
//	cin.tie(NULL);
//	cout.tie(NULL);
//
//	cin >> T;
//	for (int num = 1; num < T + 1; num++)
//	{
//		ans = 9999;
//		memset(Array, 0, sizeof(Array));
//		memset(visit, 0, sizeof(visit));
//
//		input();
//
//		cout << "#" << num << " ";
//		solve();
//	}
//	return 0;
//}