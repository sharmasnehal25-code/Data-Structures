#include<stdio.h>
int main(){
	int a[10],pos,value,i,n=8;
	printf("Enter elements in an array:");
	for(i=0; i<8; i++){
		scanf("%d",&a[i]);
	}
	printf("Enter elements which you have to insert:\n ");
	scanf("%d",&value);
	printf("Enter the position where you want to insert: ");
	scanf("%d",&pos);
	
	for(i=n; i>pos; i--){
		a[i]=a[i-1];
	}
	a[pos-1]=value;
	n++;
	
	printf("Array after the insertion: ");
	for(i=0; i<10; i++){
		printf("%d",a[i]);
	}
	return 0;
}
