//secret codes
#include<stdio.h>
#include<assert.h>

int scode(int a);
void test(void);

int main(){
	// define the letter enter by the user
	int c;
	test();
	printf("The test is ending, all parts are correct.\n");	
	printf("If you want to end this program, pleaze enter 'Ctrl + D' on the keyboard.\n");
	while((c = getchar())!=EOF){
		putchar(scode(c));	
	}
	putchar('\n');
	return 0;
}

int scode(int a){
	
	int secret_code_a;
	// lowercase letter --> resverse
	if('a' <= a && a <= 'z'){
		secret_code_a = 'a' + 'z' - a; 
	}
	// uppercase letter --> resverse
	else if('A' <= a && a <= 'Z'){
		secret_code_a = 'A' + 'Z' - a;
	}
	// all other situations
	else{
		secret_code_a = a;
	}
	return secret_code_a;
}

void test(void){
	assert(scode('a') == 'z');
	assert(scode('b') == 'y');
	assert(scode('c') == 'x');
	assert(scode('d') == 'w');
	assert(scode('e') == 'v');
	assert(scode('f') == 'u');
	assert(scode('g') == 't');
	assert(scode('h') == 's');
	assert(scode('i') == 'r');
	assert(scode('j') == 'q');
	assert(scode('k') == 'p');
	assert(scode('l') == 'o');
	assert(scode('m') == 'n');
	assert(scode('A') == 'Z');
	assert(scode('B') == 'Y');
	assert(scode('C') == 'X');
	assert(scode('D') == 'W');
	assert(scode('E') == 'V');
	assert(scode('F') == 'U');
	assert(scode('G') == 'T');
	assert(scode('H') == 'S');
	assert(scode('I') == 'R');
	assert(scode('J') == 'Q');
	assert(scode('K') == 'P');
	assert(scode('L') == 'O');
	assert(scode('M') == 'N');
	assert(scode(' ') == ' ');
	assert(scode(',') == ',');
	assert(scode('.') == '.');
	assert(scode(':') == ':');
	assert(scode(';') == ';');
}

