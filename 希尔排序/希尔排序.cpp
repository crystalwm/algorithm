/*
ϣ����������ֱ�Ӳ����������֮�ϵ�һ������
�ռ临�ƶ�O��1��
ʱ�临�Ӷ����O��n1.3�������ʱ����o(n^2) 

�������зֳ�dt������dt�� len/2�� 1
ÿ�Σ����ڽ��в�������

ps:
�����ʱ������ĳ���Ϊn+1,���Ǵ������Ԫ����n����
A[4]={0,1,2,3}
      0��1��2��3 n=3
��һ��Ԫ�ز������������

��ϣ�������������A��0����û�д�Ŵ����������
��һ���ݴ����ݵ�����

*/



#include<iostream>
#include "stdio.h" 
#include "stdlib.h" 
#include "time.h" 
using namespace std;

void ShellSort(int A[], int n);

int main() {
	clock_t start, finish;
	int A[10001] = {0};
	for (int i = 1; i <= 10000; i++) {
		A[i] = rand();
	}

	for (int i = 1; i <= 10000; i++) {
		cout << A[i] << " ";
	}


	cout << endl;
	start = clock();
	ShellSort(A,10000);
	finish = clock();

	
	for (int i = 1; i <= 10000; i++) {
		cout << A[i] << " ";
	}
	cout << endl;
	cout << "10000������������ʱ���ţ�" << finish - start;



	return 0;
}

void ShellSort(int A[], int n) {
	int dt;
	int i,j;
	for (dt = n / 2; dt >= 1; dt = dt / 2) {
		for (i = dt + 1; i <= n; i++) {
			if (A[i - dt] > A[i]) {
				A[0] = A[i];
				for (j = i - dt; j > 0; j = j - dt) {
					if (A[j] < A[0])break;   //�������󣬱ȽϵĲ�Ӧ����A[j] �� A[j+dt] 
					else {
						A[j + dt] = A[j];
					}

				}
				A[j + dt] = A[0];
			}
		}
	
	}
}