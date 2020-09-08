//#include <iostream>
//using namespace std;
//
//#define endl "\n"
//
//// 입출력 속도에 대한 문제
//
//int T;
//float A, B, C, D;
//
//void input()
//{
//	cin >> A >> B >> C >> D;
//}
//
//void solve()
//{
//	float Alice = A / B;
//	float Bob = C / D;
//
//	//if (Alice == 0 && (A / B) == 1) Alice = 9999;
//	//if (Bob == 0 && (C / D) == 1) Bob = 9999;
//
//	if (Alice > Bob)
//		cout << "ALICE" << endl;
//	else if (Alice == Bob)
//		cout << "DRAW" << endl;
//	else cout << "BOB" << endl;
//}
//
//int main()
//{
//	std::ios::sync_with_stdio(false);
//	cout.tie(NULL); 
//	cin.tie(NULL); //영향력 가장 큼
//
//	cin >> T;
//
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