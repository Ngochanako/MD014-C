#include<stdio.h>


//int fibo(int n){
//	if(n>1){
//		return fibo(n-1)+fibo(n-2);
//	}else{
//		return n;
//	}
//}
//int fibo(int n){
//	int fb1=0;
//	int fb2=1;
//	longlong fb;
//	if(n==0||n==1){
//		return n;
//	}
//	for(int i=0;i<n;i++){
//		fb=fb1+fb2;
//		fb2=fb1;
//		fb1=fb;
//	}
//	return fb;
//}
int fibo[1000];

int main(){
	int n;
	long long sum=1;
	printf("Nhap vao so n");
	scanf("%d",&n);
	fibo[0]=0;
	fibo[1]=1;
	if(n>1){
		for(int i=2;i<=n;i++){
		fibo[i]=fibo[i-1]+fibo[i-2];
		if(fibo[i]%2==1){
			sum+=fibo[i];
		}
	}
	}
	printf("%lld",sum);	
}
