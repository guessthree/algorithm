#include <stdio.h>

void QuickSort(int a[],int left,int right)
{
	if(left < right)
	{
		int i = left;
		int j = right;
		int key = a[left];
		while(i < j)
		{
			while(i < j && a[j] >= key)
				j--;
			a[i] = a[j];
			
			while(i < j && a[i] <= key)
				i++;
			a[j] = a[i];
		}
		a[i] = key;
		QuickSort(a,left,i-1);
		QuickSort(a,i+1,right);
	}
}
