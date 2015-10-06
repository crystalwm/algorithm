/**
 堆排序：
 他的存储结构：完全二叉树，使用数组实现。

  1：建立大根堆
  2：堆排序

  某一个结点向下调整。
  1：选择孩子结点中的较大者
  2：如果孩子结点比父节点大，则我们把孩子结点与父节点交换。
	如果孩子结点比父节点小，则调整结束。
  3：重复2中的流程。

  建立大根堆
  1：【l/2--0】这个范围内的结点不断的向下调整，从而形成一个大根堆

堆排序，
1：建立一个大根堆
2：最大的元素和最最后一个元素交换
3：在第一个元素相下调整，堆的范围是【0.。。l-1】
4：重复2,3，直到堆中只有一个元素

  时间复杂度：o(nlgn)
  空间复杂度：o(1)
  是否稳定：否

*/



#include<iostream>
using namespace std;

void heapSort(int A[],int l);
void buildMaxHeap(int A[],int l);
void adjustDown(int A[],int l,int k);



int main(){
	cout<<"hell"<<endl;
	int A[]={0,1,3,2,4};
	heapSort(A,4);
	for(int i=0;i<5;i++){
		cout<<A[i]<<" ";
	}
  
	return 0;
}
void heapSort(int A[],int l){
	buildMaxHeap(A,l);
	for(int i=l;i >1;i--){
	   swap(A[1],A[i]);
	 //  l=l-1;  //错误在这里，for循环中有l，这里也有l
		adjustDown(A,i-1,1);
	}
}


void buildMaxHeap(int A[],int l){
	for(int i=l/2;i>0;i--){
		adjustDown(A,l,i);
	}
     
}

void adjustDown(int A[],int l,int k){
    A[0]=A[k];
    for(int i=2*k;i<=l;i++){
	  //选出孩子结点中的较大者
		if(i+1<=l && A[i]<A[i+1])i++;
	  //较大的结点与调整结点进行比较
		if(A[0]>A[i]) break;
		else{
		//不断的向下调整
			A[k]=A[i];
			k=i;
		}
	}
	A[k]=A[0];
}
