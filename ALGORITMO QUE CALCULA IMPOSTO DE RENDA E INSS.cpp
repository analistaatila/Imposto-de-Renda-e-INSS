#include <stdio.h>
#include <locale.h>


int main()
{
	setlocale(LC_ALL,"Portuguese");
	int x;
	float salbruto[5], salliq[5];
   	printf("\n\n   **** Reajusta 5 sal�rios ****");
	printf("\n   ----------------------------\n");
	for(x=0;x<=4;x++)
	{
		printf("\n Digite o %d� sal�rio: ", x+1);
		scanf("%f", &salbruto[x]);
	}

	for(x=0;x<=4;x++)
	{
		if (salbruto[x]<1500)
		{
			salliq[x]=salbruto[x]-(salbruto[x]*0.08);
		}
		else
		{
			salliq[x]=salbruto[x]-(salbruto[x]*0.16);
		}
	}
	for(x=0;x<=4;x++)
	{
		printf("\n   O sal�rio l�quido %d � %.2f ", x+1, salliq[x]);
	}
}
