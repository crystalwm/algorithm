/*
ѡ��������㷨˼�룺
����������д�СΪn
��һ�Σ��ӡ�0��������n-1����Ԫ����ѡ��һ����С��Ԫ�أ����ڵ�0��λ��
�ڶ��Σ��ӡ�1������n-1����ѡ��һ����С��Ԫ�أ�����indexΪ1��λ�á�

��������
�������ƣ�ֱ��ֻ��һ��Ԫ��

�ܹ�Ҫ����n-1��ѡ��


���ܴ�����������������ģ�����㷨��ʱ�临�Ӷ�����o(n^2)


10000���������ʱ������169s

*/



#include<iostream>
#include "stdio.h" 
#include "stdlib.h" 
#include "time.h" 
using namespace std;

void selectSort(int A[], int n);


int main() {


	clock_t start, finish;
	int A[10000] = { 0 };
	for (int i = 0; i < 10000; i++) {
		A[i] = rand();
	}

	for (int i = 0; i < 10000; i++) {
		cout << A[i] << " ";
	}


	cout << endl;
	start = clock();
	selectSort(A, 10000);
	finish = clock();


	for (int i = 0; i < 10000; i++) {
		cout << A[i] << " ";
	}
	cout << endl;
	cout << "10000������������ʱ���ţ�" << finish - start;




	return 0;
}

void selectSort(int A[],int n) {
	int i, j;
	int min;
	int temp;
	for (i = 0; i < n-1; i++) {
		min = i;
		for (j = i + 1; j < n; j++) {
			if (A[j] < A[min]) {
				min = j;
			}
		
		}
		/*�����ǽ����������Ǽ򵥵ĸ�ֵ
		A[i] = A[min];
		*/
		temp = A[i];
		A[i] = A[min];
		A[min] = temp;
	}

}

