//author: XZY
//Date: 2023/5/20
//File:goto

#include<iostream>
using namespace std;

int main(){


    int x = 0;
    cout << "����ʼ" << endl;
    begin:
    do {
        cout << "x=" <<  ++x <<endl;
    } while (x < 10);

    if (x < 15){
        cout << "�ص�ԭ��" << endl;
        goto begin;
    }

    cout <<"�������" << endl;

}