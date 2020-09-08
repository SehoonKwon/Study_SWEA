//#include <iostream>
//#include <cstring>
//#include <vector>
//using namespace std;
//
////이렇게 푸는게 아닌듯..? 완전 새로운 알고리즘
//
//int N;
//int Array[101];
//int IN[10001];
//int cnt = 0;
//int MAX = 0;
//vector<int> v;
//
//void input()
//{
//	cin >> N;
//	for (int i = 0; i < N; i++)
//	{
//		cin >> Array[i];
//		MAX += Array[i];
//	}
//}
//
//void DFS(int idx, int sum)
//{
//	if (idx > N) return; // 0이 있다고 치면 tc 1번의 경우 0 2 3 5 로 총 4개! N = 3 이니까 idx >= N 해버리면 마지막꺼에서 5를 고려 못하고 return
//
//	//int IN = 0;
//	//for (int i = 0; i < v.size(); i++)
//	//{
//	//	if (sum == v[i])
//	//	{
//	//		IN = 1;
//	//		break;
//	//	}
//	//}
//
//	//if (IN == 0) v.push_back(sum);
//
//	if (IN[sum] == 0)
//	{
//		IN[sum]++;
//		cnt++;
//	}
//
//	DFS(idx + 1, sum + Array[idx]);
//	DFS(idx + 1, sum);
//
//}
//
//void solve()
//{
//	DFS(0, 0);
//
//	cout << cnt << endl;
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
//		memset(IN, 0, sizeof(IN));
//		memset(Array, 0, sizeof(Array));
//		cnt = 0;
//		MAX = 0;
//		v.clear();
//
//		input();
//
//
//		cout << "#" << num << " ";
//		solve();
//	}
//
//	return 0;
//}