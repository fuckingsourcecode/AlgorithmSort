#include<stdio.h>
int a[100], n;
void fun() {
	int i, j, gap, temp, k;
	for (gap = n/2; gap>0; gap/=2) {
		for (i=0; i<gap; i++) {
			for (j=i+gap; j<n; j+=gap) {
				if (a[j] < a[j-gap]) {
					temp = a[j];
					k = j - gap;
					while (k>=0 && a[k] > temp) {
						a[k+gap] = a[k];
						k = k - gap;
					}
					a[k+gap] = temp; 
				}
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
	printf("\n");
	return 0;
}
