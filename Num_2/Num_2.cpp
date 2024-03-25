#include<iostream>
using namespace std;
int main() {
	int q, n, i=0, j, s, p, fact = 1, sum = 0, r = 0, e = 0;
	cin >> n;
	q = n * n;
	int** m;
	m = new int* [q];
	//Ввод матрицы
	for (i = 0; i < n; i++)
	{
		m[i] = new int[n];
		for (j = 0; j < n; j++)
			cin >> m[i][j];
	}
	i = 0;
	//Подсчет суммы и факториала
	while (i != n)
	{
		i++;
		fact = i * fact;
		sum = i + sum;
	}
	//Проверка матрицы
	for (j = 0; j < n; j++)
	{
		s = 1; p = 0; r = 0;
		for (i = 0; i < n; i++)
		{
			e = m[i][j];
			p = m[j][i];
			s *= p;
			r += e;
		}
		if ((s != fact) || (r != sum))
		{
			q = 0;
			cout << "no" << endl;
			break;
		}
	}
	if (q != 0)
		cout << "yes" << endl;
	return 0;
}
