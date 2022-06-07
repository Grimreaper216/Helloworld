/*
#include <iostream>
#include <Array>
#include <vector>

using namespace std;

int main()

{
	

	int myArray[5] = 0; //인트 어래이 뒤 괄호는 갯수설정
	myArray[0] = 1;
	myArray[1] = 2;
	myArray[2] = 3;
	myArray[3] = 4;
	myArray[4] = 5;
	// my array [5] <- 0부터 시작하므로 5는 없음

	int myArray[] = { 1,2,3,4 }; // 배열 4개가 생성된다
	int myArray[]{ 1,2,3,4 }; // = 생략버전
	int myArray[5]{ 1,2,3 }; // 나머지 값이없는 4,5 는 0으로 초기화

	int myArray2[2][4] = { 0 }; // 앞[2]은 줄 뒤[4]는 각 줄에 갯수

	 0   0   0   0
	 0   0   0   0


	int myArray2[2][4] = { 1,2,3,4 }, {5,6,7,8};

	 1   2   3   4
	 5   6   7   8



	array<int, 3> arr = { 1,2,3 };
	int arraySize = arr.size();
	arr[0] = 1;

	auto [a1, a2, a3] = arr; // array 같은경우 일일히 int를 넣기보다 outo 를 이용하여 자동으로 삽입이 가능


	vector<int> myVector = { 11,22 }; //vector는 array와 다르게 능동적으로 추가가 가능
	myVector.push_back[33]; // [11,22,33]; // push_back 명령어로 추가 가능
	myVector.push_back[44]; // [11,22,33,44];


	//myVector 에 모든값을 더한 값을 출력하기
	{
		vector<int> myVector = { 11,22,33 };

		int vectorSize = myVector.size();
		cout << "myVectorSize = " << vectorSize << endl;
		int sum = 0;

		//for (int i : myVector)
		for (auto iter = myVector.begin(); iter < myVector.end(); iter++)
		{
			sum += *iter;// iter ? 각각의 원소의 주소값, *는 주소 안에 있는 값을 읽기
		}

		for (int i = 0; i < myVector.size(); ++i)
		{
			sum += myVector[i];
		}
		cout << "sum =" << sum << endl;

		//for (auto iter = myVector .begin(); iter <mtVector.end(); iter++
		for (int i = 0; i < myVector.size(); i++)
		{
			sum += myVector[i];
		}
		cout << "sum = " << sum << endl;

		// <---

		int myArray[3] = { 11,22,33 };
		//myVector 에 모든 값에 1씩 더해보자. [11,22,33] -> [12,23,34]
		for (int& i : myArray)
		{
			i++;
		}

		for (int i : myArray)
		{
			cout << "myArray[" << i << "] =" << i << endl;
		}
	}
	{
		vector<int> myVector = { 11,22,33 };

		int vectorSize = myVector.size();
		cout << "myVectorSize = " << vectorSize << endl;
		int sum = 0;

		int i = 0;
		while (i < 3)
		{
			sum += myVector[i];
			i++;
		}

		sum = 0; //int를 안붙인 이유는 위에 구문에 이미 int를 이용해서 새로 생성했으므로 안붙임
		i = 0;  // 위와 동일
		do {
			sum += myVector[i];
			i++;
		} while (i > 3);
	}

	{
		int selection = 0;

		do {
			system("cls");
			cout << "what do you like? : \n";
			cout << "1) Red \n";
			cout << "2) Blue  \n";
			cout << "3) Black \n";
			cout << "4) Whihe \n";
			cin >> selection;
		} while (!(4 >= selection || selection >= 0));

		cout << " you like " << selection << endl;
	}
	
	{
	int selection = 0;

	do {
		system("cls");
		int a, b = { 0 };
		cout << "put number [A,B] : \n";
		cin >> a >> b;

		cout << "A + B =" << a + b << endl;
		cout << "Quit? (Y/N) : ";
		char q = ' ';
		cin >> q;
		if (q == 'Y')
		{
			break;
		}
	} while (1);
}
*/






