#include <stdio.h>
#include <string.h>

void permuteo(char *a, int l, int r)
{
int i;
if (l == r)
	printf("%s\n", a);
else
{
	for (i = l; i <= r; i++)
	{
		swap((a+l), (a+i));
		permuteo(a, l+1, r);
		swap((a+l), (a+i));
	}
}
}
void swap(char *x, char *y)
{
	char temp;
	temp = *x;
	*x = *y;
	*y = temp;
}

int main()
{
	char str[100];
	printf("Enter your String to permute[please keep it below three letters]: \n");
	scanf("%s",&str);
	int n = strlen(str);
	permuteo(str, 0, n-1);
	return 0;
}

