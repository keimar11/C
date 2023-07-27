#include <stdio.h>
void	print_array(int arr[], int n);
void	swap(int *a, int *b);
void	bubble_sort(int arr[], int n);

int	g_cnt = 0;

void	swap(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

void	bubble_sort(int arr[], int n)
{
	// int flag;
	int i, j;

	// flag = 0;
	i = 0;
	while (i < (n - 1))
	{
		j = 0;
		while (j < (n - 1) - i)
		{
			if (arr[j] > arr[j+1])
			{
				swap(&arr[j], &arr[j+1]);
				// flag = 1;
			}
			j++;
			g_cnt++;
		}
		// if (flag == 0)
		// 	break;
		i++;
	}
}

void	print_array(int arr[], int n)
{
	int i;

	i = 0;
	while (i++ < n - 1)
		printf("%d ", arr[i]);
	printf("\n");
}

int main(void)
{
	int arr[] = {4, 53, 26, 20, 77, 11};
	int n = sizeof(arr) / sizeof(arr[0]);

	printf("Unsorted Array: \n");
	print_array(arr, n);

	bubble_sort(arr, n);
	printf("Sorted Array: \n");
	print_array(arr, n);

	printf("Total Count: %d\n", g_cnt);
	return (0);
}