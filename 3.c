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
	char c;
	
	printf("Ââåäèòå ñèìâîë: ");
	scanf("%c", &c);
	if (c>='A'&& c<='Z'||c>='a'&& c<='z')	printf("lat");
	if (c>='À'&& c<='ß'||c>='à'&& c<='ÿ')	printf("rus");
	if (c>='0'&& c<='9')	printf("digit");

	return(0);
}
