#include <iostream>
#include <stdio.h>

using namespace std;

int main ()
{
	setlocale(0,"");
	int x, y ;
	printf("Aaaaeoa ?enei x:");
	scanf("%1f",&x) ;
	printf("Aaaaeoa ?enei y:");
	scanf("%1.f",&y);
	printf("c=%.0lf\n"); 
	int c = x - y;

	return 0;
}
