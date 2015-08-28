
/*
1:向右移动一位相当于除以2，移位运算可以用除法运算代替吗，为什么？
	不能，这是由于，从效率上来说：移位运算要比除法运算快。
2：如果输入的数，是一个负数，进行移位运算会怎样？
	会进入死循环，变成0xFFFFFFFF

*/


#include<iostream>
using namespace std;
int NumberOf1(int n);

/*
int main() {
	
	int n = 0;
	cin >> n;
	cout << n<<"中二进制1的数目为：" <<NumberOf1(n)<< endl;
	system("pause");
	return 0;
}
*/


/*
下面这个方法并没有考虑负数，可能会进入死循环
*/
/*
int NumberOf1(int n) {
	int count = 0;
	while (n != 0) {
		if ((n&1)==1) {
			count++;
		}
		n = n >> 1;
	}
	return count;
}
*/


int NumberOf1(int n) {
	int count = 0;
	int flag = 1;
	while (flag) {
		/*
		flag变成负数也会在循环中，只有flag为0的时候，才不会在循环中
		*/
		cout << "flag" << flag<<endl;
		if (flag&n) {
			count++;
		}
		flag=flag << 1;
	}
	//左移最后变为0
	//
	cout <<"flag最后:"<< flag;

	return count;
}