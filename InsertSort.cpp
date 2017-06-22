#include<stdio.h>
#define N 10
int main(void){
	int a[N]={2,4,5,6,2,1,7,8,9,3,4};
	int temp,p,i;
	for(i=1;i<N;i++){
		//将元素拿出来放到temp中
		temp=a[i];
		p=i-1;
		//依次与之前的元素比较，比他大的往后挪，碰到比他小的或到头就停
		while(p>=0&&a[p]>temp){
			a[p+1]=a[p];
			p--;
		}
		//将temp放到何时的位置
		a[p+1]=temp;
	}
	for(i=0;i<N;i++){
		printf("%5d",a[i]);
	}
}