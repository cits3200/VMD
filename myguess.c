#include<unistd.h> 
#include<stdbool.h>
#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#include<time.h>

int main(void)
{	
	char	base[52];
	clock_t	start, finish;
	double	duration;
	char 	combinations[3];

	base[0] = 'a';
	base[26] ='A';

	for(int i=1;i<26;i++)
	{
		base[i] = 'a'+ i;
	}
	for(int i=0;i<26;i++)
	{
		base[26+i] = 'A' + i;
	}	
	/*output all combinations with 3 characters*/
	start = clock();
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<26;j++)
		{
			for(int z=0;z<26;z++)
			{
				for(int k=0;k<26;k++)
				{
					printf("%c%c%c\n",base[j],base[z],base[k]);	
				}
			}
		}
		
		printf("\n");
	}
	finish = clock();
	duration = (double)(finish-start)/CLOCKS_PER_SEC;
	printf("output all combinations with 3 characters takes %lf sec\n",duration);
	
	/*output all combinations with 5 characters*/
	start = clock();
	for(int i=0;i<5;i++)
	{
		for(int j=0;j<52;j++)
		{
			for(int z=0;z<52;z++)
			{
				for(int k=0;k<52;k++)
				{	
					for(int a=0;a<52;a++)
					{
						for(int b=0;b<52;b++)
						{
								printf("%c%c%c%c%c\n",base[j],base[z],base[k],base[a],base[b]);	
						}	
					}
				}
			}
		}
		
		printf("\n");
	}
	finish = clock();
	duration = (double)(finish-start)/CLOCKS_PER_SEC;
	printf("output all combinations with 3 characters takes %lf sec\n",duration);
	/*output all combinations with 6 characters*/
	/*
	for(int i=0;i<6;i++)
	{
		for(int j=0;j<52;j++)
		{
			for(int z=0;z<52;z++)
			{
				for(int k=0;k<52;k++)
				{	
					for(int a=0;a<52;a++)
					{
						for(int b=0;b<52;b++)
						{
							for(int c=0;c<52;c++)
							{
								printf("%c%c%c%c%c%c\n",base[j],base[z],base[k],base[a],base[b],base[c]);	
							}
						}	
					}
				}
			}
		}
		
		printf("\n");
	}
	*/	
		
	
	return 0;
} 
