/*
#include <iostream>
#include <bitset>

using namespace std;

int main()
{
	{
		int a = 10;
		int b = 0;
		//b = a++; //b = 10, a= 11
		//b = ++a; //b = 11, a= 11
		//b = a--; // b = 11, a = 9
		//b = --a; // b = 9, a = 9
		cout << "a = " << a << " b = " << b << endl;
	}

	{
		int a = 10;
		int b = -5;
		bool result = false;
		result = (a > b) ? true : false;
		result = (a == b) ? true : false;
		result = (a > 0 && b > 0) ? true : false; // and�� �Ѵ� ���϶�
		result = (a > 0 || b > 0) ? true : false; //or�� ���� �ϳ��� ���̾ ��
		result = (a < 0 && --b > 0) ? true : false; // --b : - 5 �տ� ���� �����̶� ��� ����
		result = !(a > 0) ? true : false;
		cout << "Reulst = " << boolalpha << result << noboolalpha 
			<< result << " b = " << b << endl;
	}

	{
		int num = 10;
		cout << "2���� ǥ�� : " << bitset<32>(num) << endl; // bitset �ڿ� ��ȣ�� ���ڸ� ����� ǥ���Ұ��� ��Ÿ��
		cout << "8���� ǥ�� : " << oct << num << endl;
		cout << "10���� ǥ�� : " << dec << num << endl;
		cout << "16���� ǥ�� : " << hex << num << dec << endl;

		int x = 0x35;
		int y = 0xf0;
		cout << "x = " << bitset<8>(x) << endl;
		cout << "y = " << bitset<8>(y) << endl;
		cout << "x & y = " << bitset<8>(x & y) << endl;
		cout << "x | y = " << bitset<8>(x | y) << endl;
		cout << "x ^ y = " << bitset<8>(x ^ y) << endl;
		cout << "~x = " << bitset<8>(~x) << endl;
		
		int x1 = x << 2;
		cout << "x = " << bitset<8>(x) << endl;
		cout << "x1 = " << bitset<8>(x1) << endl;

		char cX = 0b00010100;
		cout << "cX = " << bitset<8>(cX) << endl;
		cX = cX >> 2;
		cout << "cX = " << bitset<8>(cX) << endl;
	}

	{
		// ������ �� ��ȯ

		int intVar = 7;
		double doubleVar = 1.5;
		float floatVar = 3.7f;

		intVar = doubleVar;
		floatVar = intVar;

		//�ڷ��� �켱 ���� - ����� ũ��, �Ǽ��� ���°� �켱 
		//char -> int -> long -> float -> double -> long double
		intVar = doubleVar + intVar * floatVar;
		//                         float
		//       doubleVar + (intVar * floatVar)
		//               double
		//intVar = (doubleVar + (intVar * floatVar))
		//      int
	}

	{
		//static_cast : ���� �߿� �� �˻縦 ���� ������, ������ �� �� ���Ŀ� ������ �״�� ��ȯ��
		//dynamic_cast : ���� Ŭ������ �Ļ� Ŭ���� ���� ������ �Ǵ� ���� �� ��ȯ�� ���α׷� ���� �߿� �Ͼ���� ������
		//reinterpret_cast : �����͸� �ٸ� �ڷ����� �����ͳ� ���� �ڷ�������, �Ǵ� �� ������ ��ȯ��
		//const_cast : const ������ �Ͻ� ������

		double d = 10.5;
		int a = static_cast<int>(d);
	}
}
*/