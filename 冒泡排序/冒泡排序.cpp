/*
ð�������˼�룺
ÿһ�������������Ӵ���������ѡ����С��ֵ�����뵽��i��λ��
�����һ���У�û�з������������Ǿ���Ϊ��������Ѿ����������ˣ���������

�����n��Ԫ�صĻ���������Ҫ����n-1��

10000������������ʱ���ţ�352
�����ʱ���Ƚ϶࣬�о�ϣ�������ʱ��ֻ��2s
*/



#include<iostream>
#include "stdio.h" 
#include "stdlib.h" 
#include "time.h" 
using namespace std;
void BubbleSort(int A[], int n);

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
	BubbleSort(A, 10000);
	finish = clock();


	for (int i = 0; i < 10000; i++) {
		cout << A[i] << " ";
	}
	cout << endl;
	cout << "10000������������ʱ���ţ�" << finish - start;


	return 0;
}

void BubbleSort(int A[], int n) {

	int flag;
	int i, j;
	int temp;
	for ( i = 0; i < n - 1; i++) {
		flag = 1;
		for ( j = n - 1; j > i;j--) {
			if (A[j] < A[j - 1]) {
			    temp = A[j];
				A[j] = A[j - 1];
				A[j - 1] = temp;
				//����flag��˵������ð���й�������
				flag = 0;
			}

		}
		//�������ð����û�н�����ʱ��˵�����������ˣ����ʱ��Ͳ���Ҫ�����������ˣ�˵�������Ѿ�����������
		if (flag) {
			break;
		}
	
	}

}