#include<stdio.h>
int main(){
	int a[10],pos,value,i,n=8;
	printf("Enter elements in an array:");
	for(i=0; i<8; i++){
		scanf("%d",&a[i]);
	}

	printf("Enter the position where you want to enter: ");
	scanf("%d",&pos);
	
	for(i=pos-1; i<n-1; i++){
		a[i]=a[i+1];
	}

	n--;
	
	printf("Array after the deletion: ");
	for(i=0; i<n; i++){
		printf("%d",a[i]);
	}
	return 0;
}
