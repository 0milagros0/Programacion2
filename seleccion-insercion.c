#include <stdio.h>

int main() {
    int arr[] = {7, 4, 2, 9, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    int i, j, min, temp;

    for (i = 0; i < n - 1; i++) {
        min = i;
        for (j = i + 1; j < n; j++) {
            if (arr[j] < arr[min]) {
                min = j;
            }
        }

        // Intercambio
        temp = arr[i];
        arr[i] = arr[min];
        arr[min] = temp;
    }

    printf("Arreglo ordenado: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}
//INSERCION
#include <stdio.h>
#define n 8

int main()
{
	int t,a[]={10,8,5,3,9,2,11,51};
	int i,j;
	
	for(i = 1; i < n; i++)
	{
		j = i-1;
		t = a[i];
		while (j >= 0 && t < a[j])
		{
			a[j+1] = a[j];
			j = j-1;
		}
		a[j+1] = t;
	}
	for(i = 0; i < n; i++)
		printf("%d %d \n",i,a[i]);
	
	return 0;
}
