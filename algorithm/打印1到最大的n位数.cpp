/*
�ַ��ļӷ���Ȼ���ӡ

2���ٽ�����

3:�ַ���������ַ����ת������

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
	
	//��ʼ���ַ� 0--n-1 λ������ֵ��
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
			//�����λ��0Ϊ�ϲ����Ļ�����˵�����ʱ���Ѿ���999999������
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