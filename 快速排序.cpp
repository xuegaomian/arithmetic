#include<stdio.h>
#define N 10
quickSort(int a[],int low,int high){
	int i=low,j=high;
	int temp=a[i];
	if(low<high){
			while(a[j]>=temp&&i<j){
				j--;
			}
			a[i]=a[j];
			while(a[i]>=temp&&i<j){
				i++;
			}
			a[j]=a[i];
	}
	else
	{
		return;
	}
		a[i]=temp;
			quickSort(a,low,i-1);
			quickSort(a,i+1,high);
}
int main(void){
	int a[N]={3,5,6,9,4,2,8,1,7,3};
	int low=0,high=N-1;
	quickSort(a,low,high);
	for(int i=0;i<N;i++){
		printf("%5d",a[i]);
	}


}

