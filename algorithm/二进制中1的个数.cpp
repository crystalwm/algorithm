
/*
1:�����ƶ�һλ�൱�ڳ���2����λ��������ó������������Ϊʲô��
	���ܣ��������ڣ���Ч������˵����λ����Ҫ�ȳ�������졣
2����������������һ��������������λ�����������
	�������ѭ�������0xFFFFFFFF

*/


#include<iostream>
using namespace std;
int NumberOf1(int n);

/*
int main() {
	
	int n = 0;
	cin >> n;
	cout << n<<"�ж�����1����ĿΪ��" <<NumberOf1(n)<< endl;
	system("pause");
	return 0;
}
*/


/*
�������������û�п��Ǹ��������ܻ������ѭ��
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
		flag��ɸ���Ҳ����ѭ���У�ֻ��flagΪ0��ʱ�򣬲Ų�����ѭ����
		*/
		cout << "flag" << flag<<endl;
		if (flag&n) {
			count++;
		}
		flag=flag << 1;
	}
	//��������Ϊ0
	//
	cout <<"flag���:"<< flag;

	return count;
}