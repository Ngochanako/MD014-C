#include<stdio.h>
#include<string.h>

int main(){
	char str[100];
	scanf("%s",str);
	int cnt,check;
	for(int i=0;i<strlen(str);i++){
		cnt=1;
		check=1;
		for(int j=0;j<i;j++){
			if(str[j]==str[i]){
			  check=0;
			  break;
	    }
	}
	    if(check){
		for(int j=i+1;j<strlen(str);j++){
			if(str[j]==str[i]){
				cnt++;	
			}
		}
		printf("%c:%d\t",str[i],cnt);
	}
	}	
}


