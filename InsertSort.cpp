#include<stdio.h>
#define N 10
int main(void){
	int a[N]={2,4,5,6,2,1,7,8,9,3,4};
	int temp,p,i;
	for(i=1;i<N;i++){
		//��Ԫ���ó����ŵ�temp��
		temp=a[i];
		p=i-1;
		//������֮ǰ��Ԫ�رȽϣ������������Ų����������С�Ļ�ͷ��ͣ
		while(p>=0&&a[p]>temp){
			a[p+1]=a[p];
			p--;
		}
		//��temp�ŵ���ʱ��λ��
		a[p+1]=temp;
	}
	for(i=0;i<N;i++){
		printf("%5d",a[i]);
	}
}