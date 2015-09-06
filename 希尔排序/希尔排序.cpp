/*
希尔排序是在直接插入排序基础之上的一种排序
空间复制度O（1）
时间复杂度最好O（n1.3），最坏的时候是o(n^2) 

待排序列分成dt组其中dt从 len/2到 1
每次，组内进行插入排序，

ps:
排序的时候数组的长度为n+1,但是待排序的元素有n个。
A[4]={0,1,2,3}
      0，1，2，3 n=3
第一个元素不在排序的里面

在希尔排序的数组中A【0】中没有存放待排序的数据
起到一个暂存数据的作用

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
	cout << "10000个随机数排序的时间大概：" << finish - start;



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
					if (A[j] < A[0])break;   //这里有误，比较的不应该是A[j] 与 A[j+dt] 
					else {
						A[j + dt] = A[j];
					}

				}
				A[j + dt] = A[0];
			}
		}
	
	}
}