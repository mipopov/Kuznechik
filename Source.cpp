#include <iostream>

int f(int *a, int n, int m);

int main()
{
	int n, m;
	std::cin >> n >> m;
	int *a = new int[n + 1];
	std::cout << f(a, n, m);
//	system("pause");
	return 0;
}
int f(int *a, int n, int m)
{
	int k = 0;
	if (n < 0)
		return 0;
	if (n == 0)
		return 1;
	if (a[n] > 0)
		return a[n];
	for (int i = 1; i <= m; ++i)
		k += f(a, n - i, m);
	return  a[n] = k;
}