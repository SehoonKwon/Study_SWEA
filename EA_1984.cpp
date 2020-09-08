//#include <iostream>
//#include <cstring>
//using namespace std;
//
//int T;
//int Array[10] = { 0 };
//
//int main()
//{
//	cin >> T;
//	for (int num = 1; num < T + 1; num++)
//	{
//		for (int i = 0; i < 10; i++)
//			cin >> Array[i];
//
//		int maxV = 0, minV = 99999;
//		int maxIndex = 0, minIndex = 0;
//
//		for (int i = 0; i < 10; i++)
//		{
//			if (maxV < Array[i])
//			{
//				maxV = Array[i];
//				maxIndex = i;
//			}
//
//			if (minV > Array[i])
//			{
//				minV = Array[i];
//				minIndex = i;
//			}
//		}
//
//		Array[maxIndex] = 0;
//		Array[minIndex] = 0;
//
//		int sum = 0;
//		for (int i = 0; i < 10; i++)
//			sum += Array[i];
//
//		int ans = 0;
//		//<math.t>에 round라는걸 쓰면 반올림 자동계산 가능
//		//but STL안쓰는 연습으로 구현해보자면 8로 나누었을 때 0.5이상이 나오려면 8*0.5 = 4 나머지가 4 이상인 경우 모두 0.5이상이 나온다. 따라서 이 조건으로 검사
//		if ((sum % 8) >= 4) ans = (sum / 8) + 1;
//		else ans = sum / 8;
//
//		cout << "#" << num << " " << ans << "\n";
//	}
//
//	return 0;
//}