#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<assert.h>
void Bubblesort(int* a, int n)//Ã°ÅÝº¯Êý
{
	assert(a);
	for (size_t end = n; end > 0; --end)
	{
		int exchange = 0;
		for (size_t = 1; i < end; ++i)
		{
			if (a[i - 1] > a[i])
			{
				Swap(&a[i - 1], &a[i]);
					exchange = 1;
			}
		}
		if (exchange == 0)
			break;
	}
}