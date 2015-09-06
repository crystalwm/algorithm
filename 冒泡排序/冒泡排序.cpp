/*
冒泡排序的思想：
每一轮两两交换，从待排序列中选出最小的值，插入到第i个位置
如果这一趟中，没有发生交换，我们就认为这个序列已经基本有序了，跳出排序

如果有n个元素的话，至多需要进行n-1次

10000个随机数排序的时间大概：352
这个的时间会比较多，感觉希尔排序的时间只有2s
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
	cout << "10000个随机数排序的时间大概：" << finish - start;


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
				//设置flag，说明该趟冒泡有过交换了
				flag = 0;
			}

		}
		//如果该趟冒泡中没有交换的时候，说明基本有序了，这个时候就不需要后续的排序了，说明表中已经基本有序了
		if (flag) {
			break;
		}
	
	}

}