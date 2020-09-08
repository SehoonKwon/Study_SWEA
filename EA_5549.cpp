//#include <iostream>
//#include <string>
//using namespace std;
//
//int T;
//
//int main()
//{
//	cin >> T;
//	for (int num = 1; num < T + 1; num++)
//	{
//		//int N;
//		//cin >> N;
//
//		////이 방식으로 하면 왜 안되지 ?? -> 100자리 수는 long long int로도 못담음. 젤 많이담는 언사인드 롱롱인트도 10자리가 최대
//		//if (N % 2 == 0) cout << "#" << num << " " << "Even" << "\n";
//		//else cout << "#" << num << " " << "Odd" << "\n";
//
//		string str;
//		cin >> str;
//
//		int N = str.size();
//		if (str[N-1] == '0' || str[N-1] == '2' || str[N-1] == '4' || str[N-1] == '6' || str[N-1] == '8')
//			cout << "#" << num << " " << "Even" << "\n";
//		else cout << "#" << num << " " << "Odd" << "\n";
//
//	}
//
//	return 0;
//}