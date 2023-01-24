#include <stdio.h>
#include <string.h>

typedef struct cricket
{
     char name[30];
     char team[20];
     float bat_avg;
} cricket;

int main ()
{
     cricket player[50];
     char team[5][20];
     int i, j;

     //Input teams details
     for (i = 0; i <= 4; i++)
     {
          printf ("Input Team Name: ");
          fflush (stdin);
          gets (team[i]);

          //Input players details
          for (j = i * 10; j <= (i + 1) * 10 - 1; j++)
          {
               printf ("Input %d player details\n", j - (i * 10) + 1);
               printf ("Name: ");
               fflush (stdin);
               gets (player[j].name);
               printf ("Batting Average: ");
               scanf ("%f", &player[j].bat_avg);
               strcpy (player[j].team, team[i]);
               printf ("\n");
          }
          printf ("\n");
     }

     //Print team-vise player details
     printf ("Teams\n\n");
     for (i = 0; i <= 4; i++)
     {
          printf ("Team %d: %s\n", i + 1, team[i]);
          printf ("Sr.\tPlayer Name\t\tBatting Average\n");
          for (j = i * 10; j <= (i + 1) * 10 - 1; j++)
               printf ("%d.\t%s\t\t\t%.2f\n", j - (i * 10) + 1, player[j].name, player[j].bat_avg);
          printf ("\n");
     }

     return 0;
}