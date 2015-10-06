/**
1:问题描述
有一个排序数组 {1,2,3,3,3,3,4,5} 和数字3 ，由于3在这个数组中出现了4次，因此输出4
2：算法思想
准备：在有序数组中查找一个数，我们一般是使用的二分查找，但是在一个有重复数组中用二分查找，查找到的index未必是它首次出现的位置。
  因此我们需要准备两个函数GetFirstK 和GetLastK 
  GetFirstK 中间值和k比较，如果中间值小于k，则在上部分查找
							如果中间值大于k，则在下部分查找
							如果中间值等于k，如果存在左边的元素，且左边的元素与k相同，则在下部分查找
											 如果不存在左边的元素，或者左边的元素与k不相同，则返回index。
							最后，如果没有找到则返回-1
GetLastK 中间值和k比较  如果中间值小于k，则在上部分查找
							如果中间值大于k，则在下部分查找
							如果中间值等于k，如果存在右边的元素，且右边的元素与k相同，则在上部分查找
											 如果不存在右边的元素，或者右边的元素与k不相同，则返回index。
							最后，如果没有找到则返回-1
*/
#include<iostream>
using namespace std;

int GetFirstK(int *A,int l,int k);
int GetLastK(int *A,int l,int k);

int main(){

	int A[8]={1,2,3,3,3,3,4,5};
	int firstIndex=GetFirstK(A,8,3);
	int lastIndex=GetLastK(A,8,3);
	int total=lastIndex-firstIndex+1;
	cout<<total;
	if(firstIndex==-1){
	   cout<<0;
	}
	else
	{
	   cout<<total;
	}


return 0;
}

int GetFirstK(int *A,int l,int k){
	int low=0;
	int high=l-1;
	int middle=l/2;
	while(low<=high){
		if(A[middle]==k){
			if(middle!=0 && A[middle]==A[middle-1]){
				high=middle-1;
			}
			else{
				return middle;
			}
		}
		else if(A[middle]<k){
			low=middle+1;
		}
		else{
			high=middle-1;
		}
	
	}
	// 没有找到
	return -1;
}

int GetLastK(int *A,int l,int k){
	int low=0;
	int high=l-1;
	int middle=l/2;
	while(low<=high){
		if(A[middle]==k){
			if(middle!=l-1 && A[middle]==A[middle+1]){
				low=middle+1;
			}
			else{
				return middle;
			}
		}
		else if(A[middle]<k){
		  low=middle+1;
		}
		else{
			high=middle-1;
		}
	
	}
	// 没有找到
	return -1;
}
