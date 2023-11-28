#include<stdio.h>
void print_number(int n,int a[n],int m,int b[m]){
	for(int i=0;i<n;i++){
		int check=1;
		for(int j=0;j<m;j++){
			if(b[j]==a[i]){
				check=0;
				break;
			}			
		}
		if(check){
			printf("%d",a[i]);
		}
	}
}

int main(){
	int n,m;
	scanf("%d%d",&n,&m);
	int arr1[n];
	int arr2[m];
	for(int i=0;i<n;i++){
		printf("arr1[%d]=",i);
		scanf("%d",&arr1[i]);
	}
	for(int i=0;i<m;i++){
		printf("arr2[%d]=",i);
		scanf("%d",&arr2[i]);
	}
	if(n>=m){
		print_number(n,arr1,m,arr2);
	}else{
		print_number(m,arr2,n,arr1);
	}
	
}
