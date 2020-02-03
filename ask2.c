#include <stdio.h>
#include <stdlib.h>
#define N 9

int main()
{
	char input[N+3];
	int len,i, psifia = 0, valid;

	long int x, sum = 0, temp, yp, p;

	do{
		printf("Dwste enan akeraio (mexri %d psifia):" ,N);
		fgets(input, sizeof input, stdin);
		input[strlen (input)-1 ]='\0';
		fflush (stdin);
		len = strlen(input);
		valid = 1;
		for (i=0; i<len; i++)
			if (input [i]<'0' || input[i]>'9')
				valid=0;
			if (!valid)
				printf("Mh egkyroi xaraktires eisodou!\n");
			else if (len>N)
				printf("Megali eisodos!\n");
			else if ( (x = atol(input)) == 0)
				printf("Keni i mideniki eisodos!\n");
			else
				break;
	} while (1);

	temp = x;



	while (temp > 0) {
		psifia++;
		
		p = temp%10;
		
		sum = sum + (p*p*p);
		temp = temp/10;		
		
	}
	
	if (sum == x)	
		printf("O akeraios %d einai Narkissos.\n", x);
		
	else if (sum != x)
		printf("O akeraios %d den einai Narkissos.\n", x);
		

	return 0;
}
