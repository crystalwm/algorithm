/*
选择排序的算法思想：
待排序的序列大小为n
第一次：从【0，，，，n-1】个元素中选择一个最小的元素，放在第0个位置
第二次：从【1，，，n-1】中选择一个最小的元素，放在index为1的位置。

。。。。
依次类推，直到只有一个元素

总共要进行n-1次选择，


不管待排序的数据是怎样的，这个算法的时间复杂度总是o(n^2)


10000个随机数的时间大概是169s

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
	cout << "10000个随机数排序的时间大概：" << finish - start;




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
		/*这里是交换，而不是简单的赋值
		A[i] = A[min];
		*/
		temp = A[i];
		A[i] = A[min];
		A[min] = temp;
	}

}

