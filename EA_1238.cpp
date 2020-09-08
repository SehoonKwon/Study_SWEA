//#include <iostream>
//#include <queue>
//#include <cstring>
//#include <algorithm>
//using namespace std;
//
//int N, start;
//int temp[1000] = { 0 };
//int Array[101][101] = { 0, };
//int visit[101] = { 0 };
//
//struct point
//{
//	int x;
//	int step;
//};
//
//queue<point> q;
//
//void BFS(int v)
//{
//	visit[v] = true;
//	q.push({ v,0 });
//
//	int T_step = 0;
//	int ans = 0;
//
//	while (!q.empty())
//	{
//		int node = q.front().x;
//		int step = q.front().step;
//		q.pop();
//
//		if (T_step < step)
//		{
//			ans = node;
//			T_step = step;
//		}
//
//		else if (T_step == step)
//			ans = max(ans, node);
//
//		for (int i = 1; i < 101; i++)
//		{
//			if (Array[node][i] == 1 && visit[i] == 0)
//			{
//				visit[i] = true;
//				T_step = step;
//				q.push({ i,step + 1 });
//			}
//		}
//	}
//
//	cout << ans << "\n";
//
//}
//
//int main()
//{
//	for (int num = 1; num < 11; num++)
//	{
//		memset(visit, 0, sizeof(visit));
//		memset(Array, 0, sizeof(Array));
//
//		cin >> N >> start;
//
//		int from, to;
//		for (int i = 0; i < N; i++)
//		{
//			if((i%2) == 0) cin >> from;
//			else
//			{
//				cin >> to;
//				Array[from][to] = 1;
//			}
//		}
//
//		cout << "#" << num << " ";
//		BFS(start);
//	}
//
//	return 0;
//}