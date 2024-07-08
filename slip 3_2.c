#include<stdio.h>
#include<string.h>
int main()
{
	char s1[10],s2[20];
	int k,ch;
	printf("\n Enter string 1 : ");
	scanf("%s",s1);
	printf("\n Enter String 2 : ");
	scanf("%s",s2);
	do 
	{
	    printf("\n Menus : \n");
		printf(" 1 - Length of String \n 2 - Copy String \n 3 - Connect Two String \n 4 - compare two strings ");
		printf("\n Enter Choice : ");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1 : printf("\n length of string 1 : %d\n",strlen(s1));
			         printf("\n length of string 2 : %d\n",strlen(s2));
					 break;
			case 2 : strcpy(s1,s2);
					 printf("\n String 1 : %s\n",s1);
					 printf("\n String 2 : %s\n",s2);
					 break;
			case 3 : strcat(s1,s2);
			         printf("\n String 1 : %s\n",s1);
					 printf("\n String 2 : %s\n",s2);
					 break;
			case 4 : k=strcmp(s1,s2);
			         if(k==0);
					 printf("\n String are same\n");
					 if(k>0)
					 printf("\n String 1 is greater\n");
					 if(k<0)
					 printf("\n String 2 is greater\n");
					 break;	
			default : printf("\n Invalid Choice...........\n");	  
		}
    }while(ch<5);
}
