/*
算法思想：
每次排序之后又一个元素有一个元素会在最终排序的位置。

算法思想一定要写好了之后在写程序，那样子出错的可能性比较少


10000随机数个数排序的时间大概是2s
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
	cout << "10000个随机数排序的时间大概：" << finish - start;

	return 0;
}

void QuickSort(int A[],int low,int high) {
	
	
	
	//while (low<high) {  进入了死循环，当时后面的结果没有出来，自己就想到是不是由于进入了死循环导致的，果然如此
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
		A[high] = A[low]; //自己一直忘记了写这么一句导致的错误，如果在低位找到了去中qu
	}
	A[low] = temp;
	return low;
}