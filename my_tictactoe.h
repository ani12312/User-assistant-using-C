#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct myDataType{
	int i;
	char ch;
};
void human2_tictactoe_run();
struct myDataType inputValue_ccomp(char sym[9],int count);
int check(char sym[9],char ch,int count);
void disp(char sym[9]);
void human2_tictactoe_run()
  {
	int count=0;
	struct myDataType insert;
	char symbol[9]  = {' ',' ',' ',' ',' ',' ',' ',' ',' '};
	disp(symbol);
	again:
	insert= inputValue_ccomp(symbol,count);
	symbol[insert.i]=insert.ch;
	system("cls");
	disp(symbol);
	if(check(symbol,insert.ch,count)==1);
	else if(check(symbol,insert.ch,count)==0)
		{count++;
	     goto again;}
  }
int check(char sym[9],char ch,int count)
{	
	//its for row
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
struct myDataType inputValue_ccomp(char sym[9],int count)
{
	int value;
	int i;
	struct myDataType insert;
	inputAgain:
	if(count%2==0)
		{	valueagainX:
			printf("\nEnter your Choice User1: ");
			scanf("%d",&value);
			if(value>0&&value<10)
            {	
					insert.i=value-1;
	    	 		if (sym[insert.i]==' ')
		    			insert.ch='X';
		    		else {
		    		printf("Are you kidding me?");
		    		goto valueagainX;
		    		}
			}
			else
 	    	{
    		printf("\nInvalid input");
    		goto inputAgain;
			}
		}
	else if(count%2!=0)
	   {	
	   		valueagainO:
			printf("\nEnter your Choice User2: ");
        	scanf("%d",&value);
			if(value>0&&value<10)
            {
					insert.i=value-1;
	    	 		if (sym[insert.i]==' ')
		    			insert.ch='O';
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
void disp(char sym[9]){
	printf("\n\t\t***************   TIC    TAC    TOE   ***************\n");
	printf("  INSTRUCTION\n ______________\n\n\t1  2  3\n\n\t4  5  6\n\n\t7  8  9\n\nDon't overwrite one another\n\n");
	printf("\nPlayer 1 : Symbol : X\n");
	printf("\nPlayer 2 : Symbol : O\n");
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
