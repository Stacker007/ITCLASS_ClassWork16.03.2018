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
	printf("Ââåäèòå ñòðîêó: ");
	fgets(s,256,stdin);
	if (s[strlen(s)-1]=='\n'){
		s[strlen(s)-1]='\0';
	}
	s = (char*)realloc(s,(strlen(s)+1)*sizeof(char));
	
	
	
	for(int i = 0; i<strlen(s)/2; i++){
		char tmp;
		tmp = s[i];
		s[i]=s[strlen(s)-i-1];
		s[strlen(s)-i-1]=tmp;
		
	}
	printf("ïîëó÷àåòñÿ ñòðîêà:\n%s",s);
	

	return(0);
}
