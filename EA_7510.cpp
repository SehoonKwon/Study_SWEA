//#include <iostream>
//#include <cstring>
//using namespace std;
//
//#define endl "\n"
//
//int T, N;
//int cnt;
//int visit[1000001];
//
//void solve(int cntA)
//{
//	int sum = 0;
//	while (1)
//	{
//		if (sum == N)
//		{
//			cnt++;
//			break;
//		}
//
//		else if (sum > N) break;
//
//		sum += cntA;
//		cntA++;
//	}
//}
//
//int main()
//{
//	cin >> T;
//	for (int num = 1; num < T + 1; num++)
//	{
//		cnt = 0;
//		memset(visit, 0, sizeof(visit));
//		cin >> N;
//
//		for (int i = 1; i < N + 1; i++)
//			solve(i);
//
//		cout << "#" << num << " "<< cnt << endl;
//	}
//
//	return 0;
//}