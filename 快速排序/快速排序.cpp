/*
�㷨˼�룺
ÿ������֮����һ��Ԫ����һ��Ԫ�ػ������������λ�á�

�㷨˼��һ��Ҫд����֮����д���������ӳ���Ŀ����ԱȽ���


10000��������������ʱ������2s
*/

#include<iostream>
using namespace std;

#include "stdio.h" 
#include "stdlib.h" 
#include "time.h" 


void QuickSort(int A[], int low, int high);
int SearchPivot(int A[], int low, int high);

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
	QuickSort(A,0, 10000);
	finish = clock();


	for (int i = 0; i < 10000; i++) {
		cout << A[i] << " ";
	}
	cout << endl;
	cout << "10000������������ʱ���ţ�" << finish - start;

	return 0;
}

void QuickSort(int A[],int low,int high) {
	
	
	
	//while (low<high) {  ��������ѭ������ʱ����Ľ��û�г������Լ����뵽�ǲ������ڽ�������ѭ�����µģ���Ȼ���
	  if(low<high){
		int pivot = SearchPivot(A, low, high);
		QuickSort(A, low, pivot - 1);
		QuickSort(A, pivot + 1, high);
	
	}
}

int SearchPivot(int A[],int low,int high) {
	int temp = A[low];
	while (low<high) {
		while (low<high && A[high]>= temp)
		{
			high--;
		}
		A[low] = A[high];
		while (low<high && A[low]<= temp)
		{
			low++;

		}
		A[high] = A[low]; //�Լ�һֱ������д��ôһ�䵼�µĴ�������ڵ�λ�ҵ���ȥ��qu
	}
	A[low] = temp;
	return low;
}