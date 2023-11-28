#include<stdio.h>

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
	int new_arr[n+m];
	int j=0;
	for(int i=0;i<(n+m);i++){
		if(i<n){
			new_arr[i]=arr1[i];
		} else{
			new_arr[i]=arr2[j]; 
			j++ ;           
			}
	}	
	//in ra phan tu cua mang moi
//	for(int i=0;i<(n+m);i++){
//		printf("a[%d]=%d\t",i,new_arr[i]);	
//	}
	for(int i=0;i<n+m;i++){
		int check=1;
		for(int j=0;j<i;j++){
			if(new_arr[j]==new_arr[i]){
				check=0;
				break;
			}			
		}
		if(check){
			printf("%d\t",new_arr[i]);
		}
	}	
}
