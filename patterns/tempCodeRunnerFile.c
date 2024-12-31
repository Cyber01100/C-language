for(i=num-1;i>=1;i--)
	{
		for(k=1;k<=num-i;k++)
		{
			printf(" ");
		}
		for(j=1;j<=i;j++)
		{
            if(j==i||j==1||i==9)
			printf("* ");
            else
        {
        	printf("  ");
		}	
		}
		printf("\n");
	}