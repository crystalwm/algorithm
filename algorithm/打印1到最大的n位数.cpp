/*
字符的加法，然后打印

2：临界条件

3:字符数组的中字符如何转成数字

*/

#include<iostream>
using namespace std;
bool Increment(char s[], int length);
void PrintNBit(int n);


int main() {
	PrintNBit(9);
	system("pause");
	return 0;
}


void PrintNBit(int n) {
	char * s = new char(n + 1);
	
	//初始化字符 0--n-1 位都是有值的
	int i = 0;
	for (i = 0; i < n; i++) {
		s[i] = '0';
		
	}
	s[n] = '\0';
	

	while (Increment(s, n)) {
		
			cout << s << "    ";
		
	}
}

bool Increment(char s[],int length) {
	int i = 0;
	int carryBit = 1;
	int sum = 0;
	for (i = length-1; i >= 0; i++) {
		sum = s[i] - '0' + carryBit;
		if (sum > 10) {
			//如果进位是0为上产生的话，这说明这个时候已经是999999。。了
			if (i == 0) {
				return false;
			}
			s[i] = sum - 10+'0';
			carryBit = 1;

		}
		else
		{
			s[i] = sum;
			break;
		}
	}
	return true;
}