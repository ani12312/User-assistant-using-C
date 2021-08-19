#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include"interface.h"
void login();
struct user{
char name[20];
char id[20];
};
struct user profile[4]={{"Anirban","1170123$"} , {"Dhrubojyoti", "1170124$"} ,{"Sourav","1170125$"}};
int main()
{  
 	login();
}
void login()
{	loginagain:
	printf("Options:\n\t1.Anirban Misra\n\t2.Dhrubojyoti Mallick\n\t3.Sourav Saha");
	int charoption;
	printf("\nWho you are?--");
	scanf("%d",&charoption);
	if (charoption==1)
	charoption=0;
	else if(charoption==2)
	charoption=1;
	else if(charoption==3)
	charoption=2;
	switch(charoption)
	{
		case 0:
			{	char charpass[10],ch;
				int i=0;
				printf("Enter your password:");
				while(i<8)
				{
			   	 ch=getch();
			   	 charpass[i]=ch;
			   	 ch='*';
			   	 printf("%c",ch);
			   	 i++;
			    }
			    charpass[i]='\0';
				if(strcmp(charpass,profile[charoption].id)==NULL)
				{	enteragain:
					system("cls");
					printf("1.My Profile\n2.My Asisstant\n");
					printf("Choose an Option-->");
					int profilecase;
					scanf("%d",&profilecase);
					switch(profilecase)
					{
						case 2:
							interface();
							break;
						case 1:
							{
								system("cls");
								printf("My Name:");
								puts(profile[charoption].name);
								printf("\nMy Password:");
								puts(profile[charoption].id);
								system("pause");
							}
							break;
						default :
							
							goto enteragain;
					}
				}
				else
				{	
					printf("\nALERT!!!");
					system("pause");
					system("cls");
					goto loginagain;
				}	
			}
		case 1:
			{	char charpass[10], ch;
				int i=0;
				printf("Enter your password:");
				while( i<8)
				{
			   	 ch=getch();
			   	 charpass[i]=ch;
			   	 ch='*';
			   	 printf("%c",ch);
			   	 i++;
			    }
			    charpass[i]='\0';
				if(strcmp(charpass,profile[charoption].id)==NULL)
				{
					enteragain1:
					system("cls");
					printf("1.My Profile\n2.My Asisstant\n");
					printf("Choose an Option-->");
					int profilecase;
					scanf("%d",&profilecase);
					switch(profilecase)
					{
						case 2:
							interface();
							break;
						case 1:
							{
								system("cls");
								printf("My Name:");
								puts(profile[charoption].name);
								printf("\nMy Password:");
								puts(profile[charoption].id);
								system("pause");
							}
							break;
						default :
							goto enteragain1;
					}
				}
				else
				{	printf("\nALERT!!!");
					system("pause");
					system("cls");
					goto loginagain;
				}
			}
		case 2:
			{	char charpass[10],ch;
				int i=0;
				printf("Enter your password:");
				while(i<8)
				{
			   	 ch=getch();
			   	 charpass[i]=ch;
			   	 ch='*';
			   	 printf("%c",ch);
			   	 i++;
			    }
			    charpass[i]='\0';
				if(strcmp(charpass,profile[charoption].id)==NULL)
				{
					enteragain2:
					system("cls");
					printf("1.My Profile\n2.My Asisstant\n");
					printf("Choose an Option-->");
					int profilecase;
					scanf("%d",&profilecase);
					switch(profilecase)
					{
						case 2:
							interface();
							
							break;
						case 1:
							{
								system("cls");
								printf("My Name:");
								puts(profile[charoption].name);
								printf("\nMy Password:");
								puts(profile[charoption].id);
								system("pause");
							}
							break;
						default :
							goto enteragain2;
					}
				}
				else
				{	printf("\nALERT!!!");
					system("pause");
					system("cls");
					goto loginagain;
				}		
			}
		default:
			{printf("\n");
			goto loginagain;
			}
		}
}
