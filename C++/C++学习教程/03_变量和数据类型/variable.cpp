#include<iostream>
#define PI 3.14

using namespace std;

int number = 1;//ȫ�ֱ���

int main() {
	int a, b = 10;
	a = 10;
	cout << "a=" << a << endl;
	cout << "b=" << b << endl;

	//�ֲ�����

	int number = 1;
	cout << "number=1" << number << endl;
	cout << "::number" << ::number << endl;

	cout << "PI" << PI << endl;

	//����
	const float pi = 3.14; 

	cin.get();
}