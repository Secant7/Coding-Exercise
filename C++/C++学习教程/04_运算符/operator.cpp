#include <iostream>
using namespace std;

int main() {

	//cout << "1+2=" << 1 + 2 << endl;
	//cout << "1+2-3*4" << 1 + 2 - 3 * 4 << endl;
	//int a = 2, b = 6;
	//short a2 = 3;
	//long long b2 = 23435;

	//cout << "a2 * b2 = " << a2 * b2 << endl; 

	//float a3 = 20;
	//cout << "a3/b=" << a3 / b << endl;

	////2.��ֵ�����
	////a = 1;
	////1=1;
	////a = b + 5;

	//const int c = 10;


	//int arr[] = { 1,2,3,4,5 };

	//int a = b = 20;

	////���ϸ�ֵ�����
	//int  sum = 0;
	//sum += a;

	//	//�����ݼ������
	//cout << "++a=" << ++a << endl;

	////3.��ϵ���߼������
	//cout << "1<2��" << (1 < 2) << endl;
	//cout << "(10==4)+6=" << (10 == 4) + 6 << endl;

	////4.λ�����
	//unsigned char bits = 0xb5;
	//cout << hex; 
	//cout << (bits << 2) << endl;

	//λ�߼�����
	//��һ�������Ŵ��ó��ֵ��Ǹ���
	int i1 = 5, i2 = 12, i3 = 12, i4 = 9, i5 = 5;
	cout << "ֻ����һ�ε���:" << (i1 ^ i2 ^ i3 ^ i4 ^ i5) << endl;


	//5.����ת��
	//��ʽ����ת��

	short s = 15.2 + 20;
	cout << "s=" << s << endl;

	cout << sizeof(15.2 + 20) << endl; 

	int a = -1;

	cout << ((0 < a < 100) ? "true" : "false") << endl; 


	//ǿ������ת��

	int total = 20, num = 6;
	double avg = total / num;
	cout << "avg= " << avg << endl;

	//c���Է��
	cout << "avg=" << (double)total / num << endl;

	cout << "avg=" << static_cast<double> (total) / num << endl;

	cin.get();




}