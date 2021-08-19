#include<stdio.h>
#include<stdlib.h>
#include"my_tictactoe.h"
#include"hcomp_tictactoe.h"
 void finaltictactoe()
{
	int sde,restart;
	char rematch;
	printf("\n\n\t**************************************WELCOME  TO   TIC TAC TOE  GAME**************************************");
	rematchagain:
	printf("\nMenu: 1.Single Player\n      2.Double Player\n      3.Any key for exit");
	printf("\n\nEnter your choice:");
	scanf("%d",&sde);
	switch(sde)
	{
		case 2:
			{
                runagain1:
				human2_tictactoe_run();
				printf("\nIf you want to play again press 1 , Else any: ");
 	
	       		scanf("%d",&restart);
				 if(restart==1)
					{	
						system("cls");
						goto runagain1;
					}
 				  else if(restart!=1)
	  				{
					    system("cls");
						goto 	rematchagain;
					}
			}
			break;
		case 1:
			{
                runagain2:
				hcomp_tictactoe_run();
				printf("\nIf you want to play again press 1 , Else any: ");
	       		scanf("%d",&restart);
				 if(restart==1)
					{	
						system("cls");
						goto runagain2;
					}
 				  else if(restart!=1)
	  				{
					    system("cls");
						goto 	rematchagain;
					}
			}
			break;
		default:
			{	
				return ;
			}	
	}	
}
