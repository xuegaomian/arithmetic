#include<stdio.h>

int cnt=0;
	int col[8]={0},left[15]={0},right[15]={0},Q[8]={0};
//	j=0;
//	i=0;
//	cnt=0;
int	top=-1; 
void PrintQueen(){
	int i=0;
	int j=0;
	printf("这是第%d组:\n",++cnt);
				for(i=0;i<8;i++){
					for(j=0;j<8;j++){
						if(j==Q[i]){
							printf("  ");
							printf("Q");
						}
						else{
							printf("  ");
							printf("X");
						}
					}
						printf("\n");
				}
}
void Queen(){
	int i=0;
	int j=0;
	int top=-1;
	for(i=0;i<8;){
		for(;j<8;j++){
			if(!col[j]&&!left[i+j]&&!right[7+i-j]){				
				break;
			}
		}
		if(j<8){
			Q[++top]=j;
			left[i+j]=right[7+i-j]=col[j]=1;
			if(i<7){
				i++;
				j=0;
			}else{
				PrintQueen();
				j=Q[top--];
				left[i+j]=right[7+i-j]=col[j]=0;
				j++;
			}
			
		}else{
			if(i==0){
				break;
			}else{
				i--;
				j=Q[top--];
				left[i+j]=right[7+i-j]=col[j]=0;
				j++;
			}
		}
	}	
}
//递归实现八皇后所有解
void Queen1(int i){
	int j;
	for(j=0;j<8;j++){
		if(!col[j]&&!left[i+j]&&!right[7+i-j]){
			Q[++top]=j;
			left[i+j]=right[7+i-j]=col[j]=1;
			if(i<7){
				Queen1(i+1);
			}else{
				PrintQueen();
			}
			left[i+j]=right[7+i-j]=col[j]=0;
		top--;
		}
	}
}
int main (void){
	//Queen();
	Queen1(0);//递归实现
	return 0;

	
} 