#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#include<string.h>
#include<conio.h>
#include<math.h>
#include"MYFINALE.h"
#include"towerofhanoi.h"
#include"minesweeper.h"
struct tm *tm_now;
struct tm *current_time();
void greetings();
void interface();
void mathkid();
void games();
void appendnote();
void displaynote();
void deletenote();
void interface ()
{	operation:
	int hours,min;
	tm_now=current_time();
	hours=tm_now->tm_hour;
	min=tm_now->tm_min;
	printf("                                                            WELCOME\n");
	greetings();
	printf("Options:\n        Math\n        Game\n        Google\n        Gmail\n        YouTube\n        Date and Time\n        Weather Report\n        Shutdown\n        Daily News\n        Facebook\n        NOTES(Appointments)\n");
	printf("Enter what you want ->");
	char operation[150];
	gets( operation);
	if ((strstr(operation,"mat")!=NULL)||(strstr(operation,"Mat")!=NULL))
	{
		mathkid();
		system("pause");
		system("cls");
		goto operation;
	}
	else if ((strstr(operation,"Gam")!=NULL)||(strstr(operation,"gam")!=NULL))
	{
		games();
		system("pause");
		system("cls");
		goto operation;
	}
	else if ((strstr(operation,"Goog")!=NULL)||(strstr(operation,"goog")!=NULL))
	{
		system(" START www.google.com");
		
		system("cls");
		goto operation;
	}
	else if((strstr(operation,"mail")!=NULL)||(strstr(operation,"mail")!=NULL))
	{
		system(" START www.gmail.com");
		system("cls");
		goto operation;
	}
	else if((strstr(operation,"Tube")!=NULL)||(strstr(operation,"tube")!=NULL)||(strstr(operation,"you tube")!=NULL))
	{
		system(" START www.youtube.com");
		
		system("cls");
		goto operation;
	}
	else if((strstr(operation,"Date")!=NULL)||(strstr(operation,"date")!=NULL))
	{
		printf("So,Today's is-");
		system("date /t");
		printf("\nAnd now the clock shows-");
		system("time /t");
		system("pause");
		system("cls");
		goto operation;
	}	
	else if((strstr(operation,"Weath")!=NULL)||(strstr(operation,"weath")!=NULL))
	{
		system(" START https://www.yahoo.com/news/weather/india/west-bengal/kolkata-29226486 ");
		system("cls");
		goto operation;
	}
	else if((strstr(operation,"Shut")!=NULL)||(strstr(operation,"shut")!=NULL))
	{
		system("shutdown /s");
	}
	else if((strstr(operation,"New")!=NULL)||(strstr(operation,"new")!=NULL))
	{
		printf("Options:\n\t1.Google news feed\n\t2.Times of India-->");
		int newsoperation;
		scanf("%d",&newsoperation);
		switch(newsoperation)
		{
			case 1:
				{
					system(" START https://news.google.com/?hl=en-IN&gl=IN&ceid=IN:en");
				}
				break;
			case 2:
				{
					system("START https://timesofindia.indiatimes.com");
				}
				break;
			default:
				{
					printf("Go back to main menu");
				}	
		}
		system("cls");
		goto operation;
	}
	else if((strstr(operation,"Hello")!=NULL)||(strstr(operation,"Hii")!=NULL)||(strstr(operation,"hii")!=NULL)||(strstr(operation,"hello")!=NULL)||(strstr(operation,"hey")!=NULL)||(strstr(operation,"Hey")!=NULL))
	{
		printf("Hey There!!!!\n");
		printf("Do you like me? Though I am not too Good\n\n");
		printf("\n========================================================\n");
		system("pause");
		system("cls");
		goto operation;
	}
	else if((strstr(operation,"Name")!=NULL)||(strstr(operation,"name")!=NULL)||(strstr(operation,"oing")!=NULL))
	{
		printf("Hey I'm Jarvis-YOUR FUN ASISSTANT!!!\n");
		
		printf("Do you like me? Though I am not too Good\n");
		printf("\n========================================================\n");
		system("pause");
		system("cls");
		goto operation;
	}
	else if((strstr(operation,"Facebook")!=NULL)||(strstr(operation,"facebook")!=NULL))
	{
		system("start https://en-gb.facebook.com/");
		system("cls");
		goto operation;
	}
	else if((strstr(operation,"Note")!=NULL)||(strstr(operation,"note")!=NULL))
	{
		FILE *fnote;
		int check;
		printf("Do you want to write or to check(1 to write/ 2 to check/3 to delete):");
		scanf("%d",&check);
		switch(check)
		{
			case 1:
				appendnote();
				break;
			case 2:
				displaynote();
				system("pause");
				break;
			case 3:
				deletenote();
				system("pause");
				break;
			default:
				{
					system("pause");
				}	
		}
		system("cls");
		goto operation;
	}
	else
	{	
		system("cls");
		goto operation;
	}
}
struct tm *current_time()
{
	time_t now;
	int hours,min;
	now=time(NULL);
	tm_now=localtime(&now);
	return (tm_now);
}
void greetings()
{
	int hours,min;
	tm_now=current_time();
	hours=tm_now->tm_hour;
	min=tm_now->tm_min;
 	if(hours>=0 && hours<12)
	printf("\nGood Morning........SIR");
	if(hours>=12 && hours<16)
	printf("\nGood Afternoon...........SIR");
	if(hours>=16 && hours<21)
	printf("\nGood Evening........SIR");
	if(hours>=21 && hours<=24)
	printf("\nGood Night..........SIR");
	printf("\nI am Jarvis-YOUR FUN ASISSTANT . What can I do for you?\n");
}
void mathkid()
{
	mathagain:
	printf("\nWhat do you want to do:\n");
	printf("\n You can do--->\nOptions:\n\t1.calculator\n\t2.solve quadratic equation\n\t3.(for exit write anything)-->");
	int mathoperation;
	scanf("%d",&mathoperation);
	switch(mathoperation)
	{
	case 1:
	{
		system("calc");
		goto mathagain;
	}
	break;
	case 2:
	{
	printf("\nI can solve quadratic equation only:");
	
	int a,b,c;
    float e,d1,x1,d2,x2;
   
    printf("Enter A,B,C(Ax^2+Bx+C)\n");
    scanf("%d %d %d",&a,&b,&c);
    printf("You entered %dx^2+%dx+%d=0\n",a,b,c);
    e=(pow(b,2)-4*a*c);
    if(e>=0)

    {
        d1=(+sqrt(e));
        x1=((-b+d1)/(2*a));
        d2=(-sqrt(e));
        x2=((-b+d2)/(2*a));
        if(x1!=x2)
        {
            printf("Roots of the quadratic equation are:\nx1=%0.2f\nx2=%0.2f",x1,x2);
        }
        else if(x1==x2)
        {
             printf("Root of the quadratic equation is:\nx1=%0.2f",x1);
        }
    }
    else
    printf("Roots are imaginary");
	}
	break;
	default:
		{printf("sorry,didn't get'");
		goto mathagain;
		}
	}
	return;
}
void games()
{	
	printf("\nYou can play--->\nOptions: 1.tic tac toe    2.tower of hanoi    3.Minesweeper    4.for exit write anything\n");
	
	int  gameoperation;
	scanf("%d",&gameoperation);
	switch(gameoperation)
	{
	case 1:
	finaltictactoe();
	break;
	case 2:
	towerofhanoi();
	break;
	case 3:
    minesweeper();
	break;
	default:
	{printf("sorry,didn't get'");
		}
	}
	return;
}
char note;
void appendnote()
	{
	FILE *fp;
	fp=fopen("notes","a+");
	printf("\nEnter:");
	while((note=getchar())!=EOF)
		putc(note,fp);
	fclose(fp);
}
void displaynote()
{
FILE *fp;
fp=fopen("notes","r+");
while((note=getc(fp))!=EOF)
		printf("%c",note);
printf("\n========================================================\n");
fclose(fp);
}
void deletenote()
{
	FILE *fp;
	fp=fopen("notes","w");
	fclose(fp);
	printf("All clear");
}
