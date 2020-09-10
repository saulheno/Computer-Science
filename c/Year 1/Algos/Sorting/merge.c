#include <stdio.h>
#include <string.h>
void printvals(char a[],int h)
{
/*	for (int i=0;i<h;i++)
		printf("char %d is %c\n",i,a[i]);
*/
	printf ("finished string is %s",a);
}

void merge(char a[], char aux[], int lo, int mid, int hi){

    int i,j,k;

    // debug lines
	printf ("merge lo=%d, hi=%d,mid=%d lhs=",lo,hi,mid);
	for (i=lo;i<=mid;i++) putchar(a[i]);
	printf (" rhs=");
	for (i=mid+1;i<=hi;i++) putchar(a[i]);
	printf(" - |");
	for (i=lo;i<=hi;i++) putchar(a[i]);
	puts ("|");

	// copy a[] to aux[], work on aux[] below and copy sorted values
	// to a[]
	for (int k = lo; k <= hi; k++) aux[k] = a[k];

	i = lo;
	j = mid+1;

	// cycle between the lo and hi values of aux[], decide in what
	// order to copy them to a[]
	for (k = lo; k <= hi; k++){
		if (i > mid)
			a[k] = aux[j++]; //J++ = do it for J then increment AFTER. ++J, increment before
		else if (j > hi)
			a[k] = aux[i++];
		else if (aux[j]<aux[i])
			a[k] = aux[j++];
		else
			a[k] = aux[i++];
   }
   // that's it, a[] now has sorted values for aux[] between lo and hi
}

void msort(char *a, char *aux, int lo, int hi)
 {
	// base case, return when hi and lo are less than or equal.
	if (hi <= lo) return;

	//debug
	printf ("msort lo=%d, hi=%d\n",lo,hi);

	// mid = (lo+hi)/2, but what about overflow?
	int mid = lo + (hi - lo) / 2;
	// lhs
	msort(a, aux, lo, mid);
	// rhs
	msort(a, aux, mid+1, hi);
	// merge left and right
	merge(a, aux, lo, mid, hi);
 }

int main()
{
	char a[] = "mergesortexample";
	char aux[sizeof(a)];
	printf("MergeSort - start with %s\n",a);
	msort(a, aux, 0, strlen(a) - 1);
	printvals(a,strlen(a));
}
