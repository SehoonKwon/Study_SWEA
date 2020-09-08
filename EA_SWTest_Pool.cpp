//#include <iostream>
//#include <algorithm>
//using namespace std;
//
//#define endl "\n"
//
//int T;
//int Array[13];
//int A, B, C, D;
//int ans;
//int cost;
//
//void input()
//{
//	//수강료 정보
//	cin >> A >> B >> C >> D;
//
//	//달마다 이용하는 횟수 정보
//	for (int i = 1; i < 13; i++)
//		cin >> Array[i];
//
//	ans = D;
//}
//
//void DFS(int idx, int COST)
//{
//	if (idx > 12)
//	{
//		ans = min(ans, COST);
//		return;
//	}
//
//
//	//// for(int i = idx ~) 방식으로 하면 오답. 왜냐면 최솟값이기 때문에 0원으로 처리하고 다음달로 넘어가서 idx조건만 13으로 넘어가는 경우 오답이 나옴(모든 경우를 검사못함)
//	DFS(idx + 1, COST + Array[idx] * A); // 1일 이용권
//	DFS(idx + 1, COST + B); // 1달 이용권
//	DFS(idx + 3, COST + C); // 3달 이용권, 1년 이용권은 input에서 ans로 해놨으므로 자동 최솟값 비교
//}
//
//void solve()
//{
//	DFS(1, 0);
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
////	T = 1;
//	for (int num = 1; num < T + 1; num++)
//	{
//		input();
//
//		cout << "#" << num << " ";
//		solve();
//	}
//
//	return 0;
//}