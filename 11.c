#include <stdio.h>
#include <conio.h>
#include <locale.h>
#include <math.h>
#include <windows.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>


using namespace std;

int main(void)
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	char* s;
	s = (char*)malloc(256*sizeof(char));
	printf("Введите строку: ");
	fgets(s,256,stdin);
	if (s[strlen(s)-1]=='\n'){
		s[strlen(s)-1]='\0';
	}
	s = (char*)realloc(s,(strlen(s)+1)*sizeof(char));
	int count = 0;
	for(int i = 0; i<strlen(s); i++){
		if (s[i]>='а'&&s[i]<='я'||s[i]>='a'&&s[i]<='z') count++;
	}
	printf("количество строчных букв в строке: %d", count);
	return(0);
}
