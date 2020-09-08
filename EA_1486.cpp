//#include <iostream>
//#include <cstring>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//#define endl "\n"
//
//int N, S;
//int Array[21];
//
//vector<int> v;
//
//void input()
//{
//	cin >> N >> S;
//	for (int i = 0; i < N; i++)
//		cin >> Array[i];
//}
//
//void DFS(int idx, int sum)
//{
//	if (sum >= S)
//	{
//		v.push_back(sum);
//		return;
//	}
//
//	if (idx >= N) return; //이게 23번 line보다 위로가면 N번째에서 vector에 아무것도 저장되지 않고 return되서 빈 벡터가 됌
//
//	DFS(idx + 1, sum + Array[idx]);
//	DFS(idx + 1, sum);
//
//	return;
//}
//
//void solve()
//{
//	int ans = 0;
//	DFS(0, 0);
//
//	sort(v.begin(), v.end());
//
//	ans = v.front() - S;
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
//		memset(Array, 0, sizeof(Array));
//		v.clear();
//
//		input();
//
//		cout << "#" << num << " ";
//		solve();
//	}
//
//	return 0;
//
//}