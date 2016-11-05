#include<stdio.h>
int a[100], n;
void fun(int low, int high) {
	int i, j, temp, t;
	i = low, 
	j = high,
	temp = a[low];
	if (low >= high)
		return;
	while (i < j) {
		while (temp < a[j] && i < j) 
			j--;
		while (temp > a[i] && i < j)
			i++;
		t = a[i];
		a[i] = a[j];
		a[j] = t;
	}
	a[i] = temp;
	fun(low, i-1);
	fun(i+1, high);
}
int main () {
	int i;
	printf("the length of array: ");
	scanf("%d", &n);
	for(i=0; i < n; i++)
		scanf("%d", a+i);
	fun(0, n-1);
	for (i=0; i < 5; i++)
		printf("%d ", a[i]);
	return 0;
} 
