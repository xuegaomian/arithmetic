#include<stdio.h>
#define N 10
int main (void){
	int a[N]={5,2,7,4,9,1,6,7,8,3};
	int i,j,t,k;
	for(i=0;i<N-1;i++){
		//�����i��Ԫ����С�������±�k
		k=i;
		//ֻҪ����б�a[k]��С�ģ��Ͱ�j��ֵ��k����ѭ�����±�Ϊk��Ԫ��һ���Ǳ�����Сֵ
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