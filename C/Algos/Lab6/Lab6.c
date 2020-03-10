/*
Saul Hennessy
Written on 10/03/2020
Written in Atom (Linux/Windows) and compiled with GCC
*/
#include <stdio.h>
#include <string.h>
#include <time.h>
void merge(int a[], int aux[], int lo, int mid, int hi)
{

  int i,j,k;

	for (int k = lo; k <= hi; k++)
	{
		aux[k] = a[k];
	}

	i = lo;
	j = mid+1;

	for (k = lo; k <= hi; k++)
	{
		if (i > mid)
			a[k] = aux[j++]; //J++ = do it for J then increment AFTER. ++J, increment before
		else if (j > hi)
			a[k] = aux[i++];
		else if (aux[j]<aux[i])
			a[k] = aux[j++];
		else
			a[k] = aux[i++];
   }
}

void msort(int c[], int aux[], int lo, int hi)
{
	if (hi <= lo)
	{
		return;
	}

	int mid = lo + (hi - lo) / 2;
	// left
	msort(c, aux, lo, mid);
	// right
	msort(c, aux, mid+1, hi);
	// merge
	merge(c, aux, lo, mid, hi);
 }

int main()
{
	int i;
	int j=5;
	int a[5] = {1, 3, 5, 7, 9};
	int b[5] = {2, 4, 6, 8, 10};
	int c[10];
	int aux[10];
	double time_taken;
	double t;

	t=clock();

	printf("MergeSort - start with\nArray 1\n");

	for(i=0; i<5; i++)
	{
	printf("%d ",a[i]);
	}

	printf("\nArray 2\n");

	for(i=0; i<5; i++)
	{
	printf("%d ",b[i]);
	}

	printf("\n");

	for(i=0;i<5; i++)
	{
		c[i] = a[i];
		c[j] = b[i];
		j++;
	}

	printf("Merged\n");

	for(i=0; i<10; i++)
	{
	printf("%d ",c[i]);
	}

	printf("\n");

	msort(c, aux, 0, 10 - 1);

	printf("Sorted\n");

	for (int i=0;i<10;i++)
	{
		printf("%d ",c[i]);
	}

	printf("\n");
	
	t=clock() - t;
	time_taken = ((double)t)/CLOCKS_PER_SEC;
	printf("Time takes : %lfs \n", time_taken);
}
