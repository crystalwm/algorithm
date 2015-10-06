/*
问题：最长公共子序列
例如：输入两个字符串 ABCBDAB 和 BDCABA  则字符串BCBA和BDAB都是他们的最长公共子序列
算法思路：
不断递归的过程，
设序列：
X=<x0,x1,...,xm>
Y=<y0,y1,...,yn>
 的最长公共子序列为：
 Z=<z0,z1....zk>
 也就是说
 当Xm=Yn的时候，LCS(Xm,Yn)=LCS(X(m-1),Y(n-1))+1
 当Xm!=Yn的时候，LCS(Xm,Yn)=max(LCS(X(m-1),Y(n)),LCS(X(m),Y(n-1)))
*/
#include<iostream>
#include <windows.h>
#include <windef.h>
#include <string.h>
using namespace std;

int LCS_LENGTH(char * x,char * y);

int main(){

	char *x="ABCBDAB";
	char *y="BDCABA";
	int result=LCS_LENGTH(x,y);
	cout<<result;
return 0;
}

int LCS_LENGTH(char * x, char * y){

	//考虑边界值
	if(x==NULL || y==NULL){
		return 0;
	}

int result=0;
int m=strlen(x);
int n=strlen(y);
//动态创建一个m+1*n+1的数组c
int **c=new int *[m+1];
for(int i=0;i<m+1;i++){
    c[i]=new int[n+1];
}
//给数组中的元素第一列，第一行赋值为0
for(i=0;i<=m;i++){
	c[i][0]=0;
}
for(i=0;i<=n;i++){
	c[0][i]=0;
}
for(i=1;i<=m;i++)
	for(int j=1;j<=n;j++){
		if(x[i]==y[j]){
			c[i][j]=c[i-1][j-1]+1;
		}
		else{
			c[i][j]=max(c[i][j-1],c[i-1][j]);
		}
	}


result=c[m][n];
//删除动态数组
	for(i=0;i<m;i++){
		delete []c[i];
	}
	delete []c;
//返回结果
	return result;

}
