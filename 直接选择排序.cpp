#include<stdio.h>
#define N 10
int main (void){
	int a[N]={5,2,7,4,9,1,6,7,8,3};
	int i,j,t,k;
	for(i=0;i<N-1;i++){
		//假设第i个元素最小，保留下标k
		k=i;
		//只要后边有比a[k]还小的，就把j的值给k，即循环后下标为k的元素一定是本趟最小值
		for(j=i+1;j<N;j++){

			if(a[j]<a[k]){
				k=j;
			}
		}
		if(i-k){
			t=a[i];
			a[i]=a[k];
			a[k]=t;
		}
		
	}
	for(i=0;i<N;i++){
		printf("%5d",a[i]);
	}
}