#include<stdio.h>
#include<strings.h>
#include<conio.h>
#include<time.h>
#include<stdlib.h>
void minesweeper()
{
    char grid[6][6],field[6][6],m[2],menu,tempstr[10];
    int gridn[6][6]={0};
    int im,jm,x,y,xs,ys,mine=0,i1,j1,nof,a=0;
    for(;;)
    {
        system("cls");
        printf("Minesweeper 6x6\nversion 1.0\n\n");
        printf("1.Play Minesweeper\n2.Rules\n");
        menu=getch();
        if(menu==49)
            break;
        else if(menu==50)
        {
            system("cls");
            printf("This is the classic game of minesweeper written in C.\nRules for minesweeper:\n");
            printf("1. You are in a mine field and you have to successfully flag all the places which have a mine(%c). If you flag all the mines, You win!\n",15);
            printf("2.In your first turn, you have to choose a starting square. You can open a square by entering its row number(x) and column number(y)\n(Note: row and column number starts from 1)\n");
            printf("3.There are three modes of operation:\n");
            printf("(i) open mode. type 'o' in mode option. This mode lets the user to open a square\n");
            printf("(ii) flag mode. type 'f' in mode option. This mode lets the user to flag a particular square. Flagged square is denoted by an 'F'\n");
            printf("(iii) remove flag mode. type 'r' in mode option. This mode lets the user to remove a particular flag from a flagged square\n");
            printf("4.If you open a square with a mine, you lose\n");
            printf("5.If you open a square with a number written on it. The number shows that how many mines are there in the adjacent 8 squares\n");
            printf("For eg:\n%c %c %c\n\n%c 4 %c\n\n%c %c %c",219,219,219,219,219,219,219,219);
            printf("\nHere 4 denoted that there are 4 mines in the remaining uncovered squares");
            printf("\n\npress enter to continue.....");
            fflush(stdin);
            gets(tempstr);
        }
    }
    system("cls");
    for(im=0;im<6;im++)
    {
        for(jm=0;jm<6;jm++)
            field[im][jm]=219;
    }
    for(im=0;im<6;im++)
    {	printf("\n");
        for(jm=0;jm<30;jm++)
            printf(" ");
        for(jm=0;jm<6;jm++)
        
            printf("%c ",field[im][jm]);
        printf("\n\n");
    }
    for(;;)
    {printf("\nOpen the starting square.\nx:");
    scanf("%d",&xs);
    printf("y:");
    scanf("%d", &ys);
    if(xs>6 || ys>6 || xs<1 || ys<1)
    {
        printf("Row or column not defined. Try again\n");
        continue;
    }
    else break;
    }
    xs=xs-1;
    ys=ys-1;
    srand(time(NULL));
    for(;;)
    {
        im=rand()%6;
        jm=rand()%6;
        if(grid[im][jm]!=15 && im!=xs && jm!=ys)
            grid[im][jm]=15;
        else
        continue;
        mine++;
        if(mine==9)
            break;
    }
    nof=mine;
    for(im=0;im<6;im++)
    {
        for(jm=0;jm<6;jm++)
        {
            if(grid[im][jm]!=15)
            {
                for(i1=im-1;i1<=im+1;i1++)
                {
                    for(j1=jm-1;j1<=jm+1;j1++)
                    {
                        if(grid[i1][j1]==15 && 0<=i1 && 0<=j1 &&i1<=5 && j1<=5)
                            gridn[im][jm]++;
                    }
                }
                grid[im][jm]=gridn[im][jm] + 48;

            }
        }
    }
    for(im=xs-1;im<=xs+1;im++)
    {
        for(jm=ys-1;jm<=ys+1;jm++)
        {
            if(grid[im][jm]!=15)
                field[im][jm]=grid[im][jm];
        }
    }
    x=xs;
    y=ys;
    for(;;)
    {
        system("cls");
        for(im=0;im<6;im++)
        {	printf("\n");
            for(jm=0;jm<30;jm++)
                printf(" ");
            for(jm=0;jm<6;jm++)
                printf("%c ", field[im][jm]);
            printf("\n\n");
        }
        printf("no of flags: %d\n", nof);
        if(grid[x][y]==15 && strcmp(m,"o")==0)
        {
            printf("\ngame over\n");
            break;
        }
        for(im=0;im<6;im++)
        {
            for(jm=0;jm<6;jm++)
            {
                if(grid[im][jm]==15 && field[im][jm]==70)
                    a++;
            }
        }
        if(a==mine)
        {
            printf("You win\n");
            break;
        }
        a=0;
        printf("mode:");
        scanf("%s",&m);
        printf("x:");
        scanf("%d",&x);
        printf("y:");
        scanf("%d",&y);
        x=x-1;
        y=y-1;
        if(strcmp(m,"o")==0)
            field[x][y]=grid[x][y];
        if(strcmp(m,"f")==0 && field[x][y]!=70 && field[x][y]==-37)
        {field[x][y]=70;
            nof--;}
        if(strcmp(m,"r")==0)
        {
            if(field[x][y]==70)
            {
                field[x][y]=219;
                nof++;
            }
        }
        if(grid[x][y]==15 && strcmp(m,"o")==0)
        {
            for(im=0;im<6;im++)
            {
                for(jm=0;jm<6;jm++)
                {
                    if(grid[im][jm]==15)
                        field[im][jm]=grid[im][jm];
                }
            }
        }
    }
}

