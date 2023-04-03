#include<stdio.h>
#include<string.h>
int main(){
	
	FILE *p;
	char ch[50];
	int i;
	
	p=fopen("demo.txt","w");
	if(p == NULL){
		printf("file can't open");
	}
	else{
		printf("enter text :");
		gets(ch);
		
		for(i=0; i<strlen(ch); i++){
			fputc(ch[i],p);
		}
		
		fclose(p);
	}
	return 0;
	
}
