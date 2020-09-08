//#include <iostream>
//#include <cstring>
//#include <queue>
//#include <algorithm>
//using namespace std;
//
//int T, N, A, B, C, D;
//int Array[16][16] = { 0, };
//int visit[16][16] = { 0, };
//int Tone[250] = { 0 };
//int dx[] = { 0,0,1,-1 };
//int dy[] = { 1,-1,0,0 };
//int cnt = 0;
//int t_cnt = 0;
//int minimum = 999;
//
//void renew(int cnt)
//{
//	cnt %= 3;
//
//	if (cnt == 0)
//	{
//		for (int i = 0; i < 251; i = i + 2)
//		{
//			if (Tone[i] != 0)
//				Array[Tone[i]][Tone[i + 1]] = 2;
//		}
//
//		cnt = 1;
//	}
//
//	if (cnt == 1)
//	{
//		return;
//	}
//
//	if (cnt == 2)
//	{
//		for (int i = 0; i < t_cnt + 2; i = i + 2)
//		{
//			if (Tone[i] != 0)
//				Array[Tone[i]][Tone[i + 1]] = 0;
//		}
//
//		return;
//	}
//
//}
//
//struct point
//{
//	int x;
//	int y;
//	int step;
//};
//
//queue<point> q;
//
//int BFS(int y, int x)
//{
//	visit[y][x] = true;
//	q.push({ x,y,0 });
//
//	while (!q.empty())
//	{
//		int X = q.front().x;
//		int Y = q.front().y;
//		int step = q.front().step;
//		q.pop();
//
//
//				//도착하면
//		if (X == D && Y == C)
//		{
//			while (!q.empty()) q.pop();
//			minimum = min(step, minimum);
//		}
//
//		//		renew(step); <-하면 배열 for문 추가 되는거니까 시간초과 걸림 어차피 %3이 포인트니까 배열 갱신하지말고 바로 ㄱ
//
//		for (int i = 0; i < 4; i++)
//		{
//			int nx = X + dx[i];
//			int ny = Y + dy[i];
//
//			if (nx > -1 && nx <N && ny>-1 && ny < N)
//			{
//				//지나갈 수 있으면
//				if (Array[ny][nx] == 0 && visit[ny][nx] == 0)
//				{
//					visit[ny][nx] = true;
//					q.push({ nx,ny,step + 1 });
//				}
//
//				//지나가야 하는데 소용돌이면 그대로 카운트만 +1
//				if (Array[ny][nx] == 2 && visit[ny][nx] == 0)
//				{
//					if ((step % 3) < 2)
//						q.push({ X,Y,step + 1 });
//					else if ((step % 3) == 2)
//					{
//						visit[ny][nx] = true;
//						q.push({ nx,ny,step + 1 });
//					}
//				}
//			}
//		}
//	}
//
//	return -1;
//}
//int main()
//{
//	cin >> T;
//	for (int num = 1; num < T + 1; num++)
//	{
//		memset(Array, 0, sizeof(Array));
//		memset(visit, 0, sizeof(visit));
//		memset(Tone, 0, sizeof(Tone));
//		minimum = 999;
//
//		cin >> N;
//
//		t_cnt = 0;
//		for (int i = 0; i < N; i++)
//		{
//			for (int j = 0; j < N; j++)
//			{
//				cin >> Array[i][j];
//				if (Array[i][j] == 2)
//				{
//					Tone[t_cnt] = i;
//					Tone[t_cnt + 1] = j;
//					t_cnt += 2;
//				}
//			}
//		}
//		cin >> A >> B >> C >> D;
//
//		int ans = BFS(A, B);
//
//		cout << "#" << num << " ";
//		if (minimum != 999) cout << minimum;
//		else cout << "-1";
//		cout << "\n";
//	}
//
//	return 0;
//}