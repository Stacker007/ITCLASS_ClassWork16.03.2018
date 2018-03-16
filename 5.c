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
	char c;
	printf("Ââåäèòå N è ñèìâîë: ");
	scanf("%d",&n );	
	fflush(stdin);
	printf("Ââåäèòå ñèìâîë: ");
	scanf("%c",&c);
	char* s;
	
	s = (char*)malloc(n*sizeof(char));	
	for (int i=0; i<n;i++){
		s[i] = c;
	}
	printf("%s", s);

	return(0);
}
