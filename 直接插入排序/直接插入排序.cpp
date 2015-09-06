// 直接插入排序.cpp : 定义控制台应用程序的入口点。
//
/*
假如待排序的队列中有n个元素
第一个元素，作为初始的有序序列，
后面的n-1个元素，作为无序序列中的元素，
	如果要插入的元素大于有序序列中的最后一个元素，直接插入
	如果待排序的元素小于有序序列中的元素，则在有序序列中寻找待插入的位置，并且移动待插入位置之后的元素后移，
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
					break;  //循环结束的条件之一
			}
			A[j + 1] = A[0];
		}
	}
	
}

