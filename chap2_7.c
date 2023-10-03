//vowelness
#include<stdio.h>
#include<ctype.h>

int isvowel(int c);

int main(){
	int c;
	while((c = getchar())!= EOF){
		putchar(isvowel(c));
	}
	putchar('\n');
	return 0;
}

int isvowel(int c){
	int convert_c;
	if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u'){
		convert_c = toupper(c);
	}else{
		convert_c = tolower(c);
	}
	return convert_c;
}
