#include<stdio.h>
int a[101], n;
void quicksort(int left, int right) {
	int i, j, t, temp;
	temp = a[left];
	i = left;
	j = right;
	
	if (left >= right) 
		return;
		
	while (i < j) {
		while (a[j] > temp && i < j)
			j--;
		if (temp > a[j]) {
			a[i] = a[j];
			a[j] = temp;
			i++;
		}
		while (a[i] < temp && i < j)
			i++;
		if (temp < a[i]) {
			a[j] = a[i];
			a[i] = temp;
			j--;
		}
	}
	quicksort(left, i - 1);
	quicksort(i + 1, right);
}
int main () {
	int i, j, t;
	scanf("%d", &n);
	for (i = 1; i <= n; i++)
		scanf("%d", &a[i]);
	quicksort(1, n);
	for(i = 1; i <= n; i++) 
		printf("%d ", a[i]);
	printf("\n");
	return 0;
}
