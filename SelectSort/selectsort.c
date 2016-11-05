#include<stdio.h>
int a[100], n;
void fun () {
	int i, j, k, temp;
	for (i=0; i<n; i++) {
		k = i;
		for (j=i+1; j<n; j++) {
			if (a[k] > a[j]) {
				k = j;
			}
		}
		if (k != i) {
			temp = a[i];
			a[i] = a[k];
			a[k] = temp;
		}
	}
}
int main () {
	int i;
	printf("the length of array: ");
	scanf("%d", &n);
	for (i=0; i<n; i++)
		scanf("%d", a+i);
	fun();
	for (i=0; i<n; i++) 
		printf("%d ", a[i]);
	printf("\n");
	return 0;
}
