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
//	//������ ����
//	cin >> A >> B >> C >> D;
//
//	//�޸��� �̿��ϴ� Ƚ�� ����
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
//	//// for(int i = idx ~) ������� �ϸ� ����. �ֳĸ� �ּڰ��̱� ������ 0������ ó���ϰ� �����޷� �Ѿ�� idx���Ǹ� 13���� �Ѿ�� ��� ������ ����(��� ��츦 �˻����)
//	DFS(idx + 1, COST + Array[idx] * A); // 1�� �̿��
//	DFS(idx + 1, COST + B); // 1�� �̿��
//	DFS(idx + 3, COST + C); // 3�� �̿��, 1�� �̿���� input���� ans�� �س����Ƿ� �ڵ� �ּڰ� ��
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