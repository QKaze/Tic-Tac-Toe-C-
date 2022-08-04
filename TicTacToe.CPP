#include<iostream.h>
#include<conio.h>

void board(char B[3][3])
	{
	 int i, j;
	 for(i=0; i<3; i++)
		{
		 for(j=0; j<3; j++)
			{
			 cout<<'_'<<" ";
			 B[i][j] = NULL;
			}
		 cout<<endl;
		}
	}
int WIN(char B[3][3])
	{
	 if(B[0][0] == B[1][1] == B[2][2])
		{
		 if (B[0][0] == 'O')
			{
			  return 1;
			 }
		 else if(B[0][0] == 'X')
			 {
			  return -1;
			 }
		}
	 else if(B[0][2] == B[1][1] == B[2][0])
		{
		 if (B[0][2] == 'O')
			 {
			  return 1;
			 }
		 else if(B[0][2] == 'X')
			 {
			  return -1;
			 }
		}
	 else if(B[0][0] == B[0][1] == B[0][2])
		{
		 if (B[0][0] == 'O')
			{
			 return 1;
			 }
		 else if(B[0][0] == 'X')
			 {
			  return -1;
			 }
		}
	 else if(B[0][0] == B[1][0] == B[2][0])
		{
		 if (B[0][0] == 'O')
			 {
			  return 1;
			 }
		 else if(B[0][0] == 'X')
			 {
			  return -1;
			 }
		}
	 else if(B[2][0] == B[2][1] == B[2][2])
		{
		 if (B[2][0] == 'O')
			 {
			  return 1;
			 }
		 else if(B[2][0] == 'X')
			 {
			  return -1;
			 }
		}
	 else if(B[0][2] == B[1][2] == B[2][2])
		{
		 if (B[0][2] == 'O')
			 {
			  return 1;
			 }
		 else if(B[0][2] == 'X')
			 {
			  return -1;
			 }
		}
	 else if(B[1][0] == B[1][1] == B[1][2])
		{
		 if (B[1][0] == 'O')
			 {
			  return 1;
			 }
		 else if(B[1][0] == 'X')
			 {
			  return -1;
			 }
		}
	 else if(B[0][1] == B[1][1] == B[2][1])
		{
		 if (B[0][1] == 'O')
			{
			 return 1;
			 }
		 else if(B[0][1] == 'X')
			{
			 return -1;
			}
		}
	 else
		{
		 return 0;
		}
	 return 0;
	}
void pos(int p)
	{
	 int i, j;
	 if(p == 1)
		{
		 i = j = 0;
		}
	 else if(p == 2)
		{
		 i = 1; j = 0;
		}
	 else if(p == 3)
		{
		 i = 2; j = 0;
		}
	 else if(p == 4)
		{
		 i = 0; j = 1;
		}
	 else if(p == 5)
		{
		 i = j = 1;
		}
	 else if(p == 6)
		{
		 i = 2; j = 1;
		}
	 else if(p == 7)
		{
		 i = 0; j = 2;
		}
	 else if(p == 8)
		{
		 i = 1; j = 2;
		}
	 else if(p == 9)
		{
		 i = j = 2;
		}
	}
void AI_move(char B[3][3], int i, int j)
	{
	 B[i][j] = 'O';
	}
void P_move(char B[3][3], int i, int j)
	{
	 B[i][j] = 'X';
	}
void test_board(char B[3][3], char T[3][3], int i, int j)
	{
	 for(i=0; i<3; i++)
		{
		 for(j=0; j<3; j++)
			{
			 T[i][j] = B[i][j];
			}
		}
	}
void T_clear(char T[3][3], int i, int j)
	{
	 for(i=0; i<3; i++)
		{
		 for(j=0; j<3; j++)
			{
			 T[i][j] = NULL;
			}
		}
	}
void output(char B[3][3], int i, int j)
	{
	 for(i=0; i<3; i++)
		{
		 for(j=0; j<3; j++)
			{
			 cout<<B[i][j]<<" ";
			}
		 cout<<endl;
		}
	}
int mind(char B, char T, int oe, int i, int j)
	{
	 for(i=0; i<3; i++)
		{
		 for(j=0; j<3; j++)
			{
			 B[i][j] = T[i][j];
			}
		}
	 if(oe%2!=0)
		{
		 AI_move(T, i, j);
		 if(WIN(T)==-1)
			{
			 return



int main()
{
 char B[3][3], T[3][3];
 int i, j, p, best=100 ,current=0, AI, c=1;
 board(B);
 for(i=0; i<3; i++)
	{
	 for(j=0; j<3; j++)
		{
		 if(B[i][j] == NULL)
			{
			 if(c%2 != 0)
				{
				 cout<<"Enter Move : ";
				 cin>>p;
				 pos(p);
				 c++;
				}
			 else if(c%2 == 0)
				{
				 mind(B, T, i, j);
				 if(AI>100)
					{
					 AI_move(B, i, j);
					 output(B, i, j);
					}
				}
			}
		}
	}
 cout<<"End Game? (y/n) : ";
 int e;
 cin>>e;
 if(e == 'y')
	{}
 getch();
 clrscr();
 return 0;
}


