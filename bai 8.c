#include<stdio.h>
#include<string.h>

void sort(char str[100]){
	for(int i=0;i<strlen(str);i++){
		for(int j=0;j<strlen(str)-i-1;j++){
			if(str[j]<str[j+1]){
				int temp=str[j];
				str[j]=str[j+1];
				str[j+1]=temp;
			}
		}
	}
}

int main(){
	char str1[100];
	char str2[100];
    gets(str1);
    gets(str2);
	if(strlen(str1)!=strlen(str2)){
		printf("2 chuoi khong phai la 2 chuoi hoan vi");
	}else{
		sort(str1);
		sort(str2);
		int check=strcmp(str1,str2);
		if(check==0){
			printf("2 chuoi la 2 chuoi hoan vi cua nhau");
		}else{
			printf("2 chuoi khong phai la 2 chuoi hoan vi");
		}
	}
	
}
