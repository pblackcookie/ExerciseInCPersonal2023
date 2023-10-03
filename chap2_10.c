//secret codes

#include<stdio.h>
#include<ctype.h>

int scode(int a);

int main(){
	int c;
	while((c=getchar())!=EOF){
		putchar(scode(c));
	}
	//putchar('\n');
	return 0;
}

int scode(int a){
	int scode_a;
	if(a<='z' && a>='a'){
		scode_a = 'z' - a;
	}
	if(a<='Z'&& a >='A'){
		scode_a = 'Z' - a;
	}
	return scode_a;
}
