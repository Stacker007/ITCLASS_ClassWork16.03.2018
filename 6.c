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
	int n;
	char c1,c2;
	printf("Ââåäèòå N: ");
	scanf("%d",&n );	
	fflush(stdin);
	printf("Ââåäèòå ñèìâîë 1: ");
	scanf("%c",&c1);
	fflush(stdin);
	printf("Ââåäèòå ñèìâîë 2: ");
	scanf("%c",&c2);
		
	char* s;	
	s = (char*)malloc(n*sizeof(char));	
	for (int i=0; i<n;i+=2){
		s[i] = c1;
		s[i+1] = c2;
	}
	printf("%s", s);

	return(0);
}
