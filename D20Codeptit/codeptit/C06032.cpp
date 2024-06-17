#include<stdio.h>
#include<string.h>

main()
{
	int t;
	scanf("%d\n",&t);
	while(t--)
	{
		
		int n=0;
		scanf("%d\n",&n);
		char s[20][20]={};
		for(int i=0;i<n;i++)
		scanf("%s",&s[i]);
		
		for(int i=0; i<n; i++)
   		 {
        for(int j=1; j<n; j++)
        {
            	char q[100],p[100];
	    		strcpy(q,s[j]);
				strcat(q,s[j-1]);
				strcpy(p,s[j-1]);
				strcat(p,s[j]);
				if(strcmp(q,p)<0)
            {
            	char nl[20]={};
                strcpy(nl,s[j-1]);
                strcpy(s[j-1],s[j]);
                strcpy(s[j], nl);
            }
        }
    }
	for(int i=0;i<n;i++)printf("%s",s[i]);
	printf("\n");
	}

}

