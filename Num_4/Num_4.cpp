#include<iostream>
using namespace std;
int main() {
	int n, i = 0, j = 0, time = 0,num=0;
	//cout << "n=";
	cin >> n;
	int** a;
	a= new int*[n];
	//�������� �������, ��� a[0]-����� ����������, a[1]-����� �������, a[2]-����� �����, a[3]-�����, �����������
	for (i = 0; i < n; i++) {
		a[i] = new int[4];
		for (j = 1; j < 3; j++)
			cin >> a[i][j];
	}
	for (i = 0; i < n; i++) {
		a[i][3] = (a[i][2] - a[i][1]);
		a[i][0] = i+1;
	}
	for (i=0;i<n;i++)
		if (a[i][3] > time) { time = a[i][3], num = a[i][0]; }
	cout << num << endl;
	return 1;
}