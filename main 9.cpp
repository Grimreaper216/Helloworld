/*
#include <iostream>
#include <Array>
#include <vector>

using namespace std;

int main()

{
	

	int myArray[5] = 0; //��Ʈ ��� �� ��ȣ�� ��������
	myArray[0] = 1;
	myArray[1] = 2;
	myArray[2] = 3;
	myArray[3] = 4;
	myArray[4] = 5;
	// my array [5] <- 0���� �����ϹǷ� 5�� ����

	int myArray[] = { 1,2,3,4 }; // �迭 4���� �����ȴ�
	int myArray[]{ 1,2,3,4 }; // = ��������
	int myArray[5]{ 1,2,3 }; // ������ ���̾��� 4,5 �� 0���� �ʱ�ȭ

	int myArray2[2][4] = { 0 }; // ��[2]�� �� ��[4]�� �� �ٿ� ����

	 0   0   0   0
	 0   0   0   0


	int myArray2[2][4] = { 1,2,3,4 }, {5,6,7,8};

	 1   2   3   4
	 5   6   7   8



	array<int, 3> arr = { 1,2,3 };
	int arraySize = arr.size();
	arr[0] = 1;

	auto [a1, a2, a3] = arr; // array ������� ������ int�� �ֱ⺸�� outo �� �̿��Ͽ� �ڵ����� ������ ����


	vector<int> myVector = { 11,22 }; //vector�� array�� �ٸ��� �ɵ������� �߰��� ����
	myVector.push_back[33]; // [11,22,33]; // push_back ��ɾ�� �߰� ����
	myVector.push_back[44]; // [11,22,33,44];


	//myVector �� ��簪�� ���� ���� ����ϱ�
	{
		vector<int> myVector = { 11,22,33 };

		int vectorSize = myVector.size();
		cout << "myVectorSize = " << vectorSize << endl;
		int sum = 0;

		//for (int i : myVector)
		for (auto iter = myVector.begin(); iter < myVector.end(); iter++)
		{
			sum += *iter;// iter ? ������ ������ �ּҰ�, *�� �ּ� �ȿ� �ִ� ���� �б�
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
		//myVector �� ��� ���� 1�� ���غ���. [11,22,33] -> [12,23,34]
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

		sum = 0; //int�� �Ⱥ��� ������ ���� ������ �̹� int�� �̿��ؼ� ���� ���������Ƿ� �Ⱥ���
		i = 0;  // ���� ����
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






