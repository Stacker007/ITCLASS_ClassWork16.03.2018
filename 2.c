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
	printf("ïðåäøåñòâóþùèé ñèìâîë: %c \nÑëåäóþùèé ñèìâîë: %c", c-1, c+1);

	return(0);
}
