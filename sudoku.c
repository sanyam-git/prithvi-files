#include<stdio.h>
#include<stdlib.h>
#include<time.h>

//int grid_check()




//int rc_check()

void igrid(int board[][9] ,int grids[][9],int row,int col,int grid_num)
{int i,j,k=0;
for(i=row;i<(row+3);i++)
{for(j=col;j<(j+3);j++) grids[grid_num][k]=board[i][j];k++;} 
}



int main()
{//input
int board[9][9]={};  int flag_board[9][9]={0};
int i,j;
for(i=0;i<9;i++)
{       for(j=0;j<9;j++)
{do
{printf("\nInput the element %d,%d  --coordinate system--zero for no element\n",j,i);
scanf("%d",&board[i][j]);}while(!(board[i][j]>=0 && board[i][j]<=9));
}}
//printing sudoku
printf("\nThis is your input\n");
for(i=0;i<9;i++) {for(j=0;j<9;j++){if(board[i][j]!=0) printf("|%d|",board[i][j]); else printf("| |");}printf("\n");}

//marking flag values
for(i=0;i<9;i++) for(j=0;j<9;j++){if(board[i][j]==0) ; else flag_board[i][j]=1;}


// filling grids to arrays
int grids[9][9]={0};
igrid(board[][9] ,grids[][9],0,0,0);




































return 0;
}
