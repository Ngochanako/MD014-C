#include<stdio.h>
int sum(int a,int b){
	int sum=0;
	for(int i=a;i<=b;i++){
		sum+=i;
	}
	return sum;
}

int main(){
	int a[2];
	for(int i=0;i<2;i++){
		printf("a[%d]=",i);
		scanf("%d",&a[i]);
	}
	if(a[0]>=a[1]){
		printf("%d",sum(a[1],a[0]));
	} else{
		printf("%d",sum(a[0],a[1]));
	}
}
