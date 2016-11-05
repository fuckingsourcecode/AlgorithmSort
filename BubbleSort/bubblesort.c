#include<stdio.h>
int a[100], n;
void fun () {
	int i, j, temp;
	for (i=0; i<n; i++) {
		for (j=0; j<n-i-1; j++) {
			if (a[j] > a[j+1]) {
				temp = a[j];
				a[j] = a[j+1];
				a[j+1] = temp;
			}
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
	return 0;
}

