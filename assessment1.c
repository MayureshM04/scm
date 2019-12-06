#include<stdio.h>
int marr[3][5];
nrows=3,ncols=5;
int main() {
for(int i=0;i<nrows;i++)
{
  for(int j=0;j<ncols;j++)
  {
     marr[i][j]=rand()%100;  
  }
}
int column_wise_sum[ncols];
for(int j=0;j<ncols;j++)
{
  column_wise_sum[j]=0;
  for(int i=0;i<nrows;i++)
  {
    printf("%5d",marr[i][j]); 
    column_wise_sum[j]+=marr[i][j];
  }

  int total+=column_wise_sum[j];
  printf("\n");
}
  return 0;
}
