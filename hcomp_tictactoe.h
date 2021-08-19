#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<time.h>
struct my2ndDataType{
	int i1;
	char ch1;
};
void hcomp_tictactoe_run();
struct my2ndDataType inputValue_hcomp(char sym[9],int count);
int my2ndcheck(char sym[9],char ch,int count);
void my2nddisp(char sym[9]);
void hcomp_tictactoe_run()
  {
	int count=0;
	struct my2ndDataType insert;
	char symbol[9]  = {' ',' ',' ',' ',' ',' ',' ',' ',' '};
	my2nddisp(symbol);
	again:
	insert= inputValue_hcomp(symbol,count);
	symbol[insert.i1]=insert.ch1;
	system("cls");
	my2nddisp(symbol);
	if(my2ndcheck(symbol,insert.ch1,count)==1);
	else if(my2ndcheck(symbol,insert.ch1,count)==0)
		{count++;
	     goto again;}
  }
int my2ndcheck(char sym[9],char ch,int count)
{		//its for row
		if ((sym[0]==ch&&sym[1]==ch&& sym[2]==ch)||(sym[3]==ch&&sym[4]==ch&& sym[5]==ch)||(sym[6]==ch&&sym[7]==ch&& sym[8]==ch)){
			printf("The Winner is : %c",ch);return 1;
	}
	//its for column
		if ((sym[0]==ch&& sym[3]==ch&& sym[6]==ch)||(sym[1]==ch&&sym[4]==ch&& sym[7]==ch)||(sym[2]==ch&&sym[5]==ch&& sym[8]==ch)){
			printf("The Winner is : %c",ch);return 1;
	}
		if (sym[0]==ch&&sym[4]==ch&& sym[8]==ch){
			printf("The Winner is : %c",ch);return 1;
	}
		if (sym[2]==ch&&sym[4]==ch&& sym[6]==ch){
			printf("The Winner is : %c",ch);return 1;
	}
	else if(count==8){
		printf(" THE GAME IS DRAW ");
		return 1;
	}
	else
		return 0;
}
struct my2ndDataType inputValue_hcomp(char sym[9],int count)
{
	struct my2ndDataType insert;
	int value,i,num,j=0;
	srand(time(0));
	while(count==0)
	{
	num= (rand()%(10));
	value=num;
	insert.i1=value-1;
	insert.ch1='X';
	break;
	}
	inputAgain:
	if((count>0)&&(count%2==0))
		{
			valueagainX:
		           	for(i=0;i<1;i++)
					{
					 num= (rand()%(10));
					}
					value=num;
					insert.i1=value-1;
	    	 		if (sym[insert.i1]==' ')
		    			insert.ch1='X';
		    		else 
		    		goto valueagainX;	
		}

	else if((count>0)&&(count%2!=0))
	   {	
	   		valueagainO:
			printf("\nEnter your Choice User: ");
        	scanf("%d",&value);
			if(value>0&&value<10)
            {	
					insert.i1=value-1;
	    	 		if (sym[insert.i1]==' ')
		    			insert.ch1='O';
		    		else {
		    		printf("Are you kidding me?");
		    		goto valueagainO;
		    		}
			}
			else
 	  	    {
    		printf("\nInvalid input");
    		goto inputAgain;
			}
		}
	return insert;
}
void my2nddisp(char sym[9]){
	printf("\n\t\t***************   TIC    TAC    TOE   ***************\n");
	 printf("  INSTRUCTION\n ______________\n\n\t1  2  3\n\n\t4  5  6\n\n\t7  8  9\n\n");
	printf("\nComputer : Symbol : X\n");
	printf("\nPlayer   : Symbol : O\n");
	printf("\n\t\t\t	|	|	");
	printf("\n\t\t\t    %c   |   %c   |   %c  ",sym[0],sym[1],sym[2]);
	printf("\n\t\t\t	|	|	");
	printf("\n\t\t\t  ------|-------|-------");
	printf("\n\t\t\t	|	|	");
	printf("\n\t\t\t    %c   |   %c   |   %c  ",sym[3],sym[4],sym[5]);
	printf("\n\t\t\t	|	|	");
	printf("\n\t\t\t  ------|-------|-------");
	printf("\n\t\t\t	|	|	");
	printf("\n\t\t\t    %c   |   %c   |   %c  ",sym[6],sym[7],sym[8]);
	printf("\n\t\t\t	|	|	");
}
