// ֱ�Ӳ�������.cpp : �������̨Ӧ�ó������ڵ㡣
//
/*
���������Ķ�������n��Ԫ��
��һ��Ԫ�أ���Ϊ��ʼ���������У�
�����n-1��Ԫ�أ���Ϊ���������е�Ԫ�أ�
	���Ҫ�����Ԫ�ش������������е����һ��Ԫ�أ�ֱ�Ӳ���
	����������Ԫ��С�����������е�Ԫ�أ���������������Ѱ�Ҵ������λ�ã������ƶ�������λ��֮���Ԫ�غ��ƣ�
*/

#include "stdafx.h"

using namespace std;
void InsertSort(int A[], int n);


int main()
{

	int A[6] = { 0,1,3,2,4,1 };
	for (int i = 1; i < 6; i++) {
		cout << A[i] << " ";
	}
	cout << endl;
	InsertSort(A, 5);

	for (int i = 1; i < 6; i++) {
		cout << A[i] << " ";
	}
    return 0;
}

void InsertSort(int A[],int n) {
	int i,j;
	for (i = 2; i <= n; i++) {
		
		if (A[i] >= A[i - 1] );
		else {
			A[0] = A[i];
			for (j = i - 1; j >0; j--) {
				if (A[j] > A[0]) {
					A[j + 1] = A[j];
				}
				else
					break;  //ѭ������������֮һ
			}
			A[j + 1] = A[0];
		}
	}
	
}

