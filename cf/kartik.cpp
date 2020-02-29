#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
	int a[10], b[10], c[10], NR[10];
	int i, j, n;
	int m = 0;
	int k = 0;
	int t = 0;
	int q = 0;
	int f = 0;
	int z = 0;
	int l;
	for(l=1;;)
	{
	cout << "Enter number of elements\n";
	cin >> n;
	cout << "Enter elements of 1st array\n";
	for (i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	cout << "Enter elements of 2nd array\n";
	for (i = 0; i < n; i++)
	{
		cin >> b[i];
	}
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			if (a[i] == a[j])
				k++;
		}
		if (k >= ((n + 1) / 2))
		{
			t = a[i];
			break;
		}
		else
		{
			k = 0;
			j = 0;
		}

	}
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < n; j++)
			{
				if (b[i] == b[j])
					z++;
			}
			if (z >= ((n + 1) / 2))
			{
				q = b[i];
				break;
			}
			else
			{
				z = 0;
				j = 0;
			}

		}
	
	if ((t != 0) && (q != 0))
	{
		if (t == q)
		{
			cout << "Not possible\n";
			cout << "-1\n";
			exit(0);
		}
	}
	for (i = 0, j = 1; (i < (n - 1) && j < n); i++, j++)
	{
		if (b[i] == b[j])
			f++;
		else
			break;
	}
	if (f == (n - 1))
	{
		for (j = 0; j < n; j++)
		{
			if (b[i] == a[j])
			{
				cout << "Not possible\n";
				cout << "-1\n";
				exit(0);
			}
		}
	}
	j = 0;
	k = 0;
	i = 0;
M:if (a[i] != b[k])
{
	c[j] = b[k];
	j++;
	i++;
	k++;
	if (k > (n - 1))
		goto Y;
	else
		goto M;
}
else
{
	NR[m] = b[k];
	m++;
	k++;
	goto M;
}
Y:for (m = 0; j < n; j++, m++)
{
	c[j] = NR[m];
}
cout << "The sequence is \n";
for (i = 0; i < n; i++)
{
	cout << "" << c[i] << "\t";
}
cout << "\n";
cin >> l;
if (l == -1)
break;
}
     return 0;
}
