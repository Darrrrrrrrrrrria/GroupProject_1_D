#include<iostream>
using namespace std;
int main() {
	int q, n, i=0, j, s, p, fact = 1, sum = 0, r = 0, e = 0;
	//cout << "n=";
	cin >> n;
	q = n * n;
	int** m;
	m = new int* [q];
	//cout << "Vvedi matr:\n";
	//���� �������
	for (i = 0; i < n; i++)
	{
		m[i] = new int[n];
		for (j = 0; j < n; j++)
			cin >> m[i][j];
	}
	//cout << endl << "Matr:";
	//����� �������
	//for (i = 0; i < n; i++)
	//{
	//	cout << endl;
	//	for (j = 0; j < n; j++)
	//		cout << " " << m[i][j];
	//}
	//cout << endl;
	i = 0;
	//������� ����� � ����������
	while (i != n)
	{
		i++;
		fact = i * fact;
		sum = i + sum;
	}
	//�������� �������
	for (j = 0; j < n; j++)
	{
		s = 1; p = 0; r = 0;
		for (i = 0; i < n; i++)
		{
			e = m[j][i];
			p = m[j][i];
			s *= p;
			r += e;
		}
		if ((s != fact) || (r != sum))
		{
			q = 0;
			cout << "No" << endl;
			break;
		}
	}
	if (q != 0)
		cout << "Yes" << endl;
	return 1;
}