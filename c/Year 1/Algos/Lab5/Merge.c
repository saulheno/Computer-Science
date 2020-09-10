/*
Saul Hennessy
Written in Atom (Linux/Windows) and compiled with GCC
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ENT_NUM 5

void insertionSort(int arr[], int num) //function is modular enough to take either arr_entry OR arr_winners depending on wanted usage
{
    int i, key, x;
    for (i = 1; i < num; i++)
    {
        key = arr[i]; //Sets value 1 to the key, saving it like a temp.
        x = i - 1; //sets value 0 to X

        while (x >= 0 && arr[x] > key) //if X > value to its right and is 0 or above
        {
            arr[x + 1] = arr[x]; //Right entry (arr[i]/Key) gets replaced with the left entry (arr[x])
            x = x - 1;  //Checks value of entry to the left to see if it needs to keep moving.
        }
        arr[x + 1] = key; //Moves the key back to where the switched value of X was originally
    }
}

int main()
{
  int i;
  int j=ENT_NUM;
  int arr_1[ENT_NUM];
	int arr_2[ENT_NUM];
  int arr_merge[ENT_NUM+ENT_NUM];
  double time_taken;
  double t;

  printf("Enter Numbers for array 1\n");

  for(i=0;i<ENT_NUM; i++)
  {
    scanf("%d", &arr_1[i]);
  }

  printf("Enter Numbers for array 2\n");

  for(i=0;i<ENT_NUM; i++)
  {
    scanf("%d", &arr_2[i]);
  }

  t=clock();

  insertionSort(arr_1, ENT_NUM);

  insertionSort(arr_2, ENT_NUM);

  printf("Array 1 sorted\n");
  for(i=0;i<ENT_NUM; i++)
  {
    printf("%d", arr_1[i]);
  }

  printf("\n");

  printf("Array 2 sorted\n");

  for(i=0;i<ENT_NUM; i++)
  {
    printf("%d", arr_2[i]);
  }

  printf("\n");

  for(i=0;i<ENT_NUM; i++)
  {
    arr_merge[i] = arr_1[i];
    arr_merge[j] = arr_2[i];
    j++;
  }

  printf("Array's merged\n");

  for(i=0;i<ENT_NUM*2; i++)
  {
    printf("%d", arr_merge[i]);
  }

  printf("\n");

  insertionSort(arr_merge, ENT_NUM*2);

  printf("Array's merged and sorted\n");

  for(i=0;i<ENT_NUM*2; i++)
  {
    printf("%d", arr_merge[i]);
  }
  printf("\n");

  t=clock() - t;
  time_taken = ((double)t)/CLOCKS_PER_SEC;
  printf("Time takes : %lfs \n", time_taken);

	getchar();
	return 0;
}
