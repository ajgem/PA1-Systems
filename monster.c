#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

#define MAX 25

int main(){

  int row;
  int col;
  int playX;
  int playY;
  int goalX;
  int goalY;
  int monX;
  int monY;
  char gameBoard[MAX][MAX];

  scanf("%d %d", &row, &col);
  scanf("%d %d", &playX, &playY);
  scanf("%d %d", &goalX, &goalY);
  scanf("%d %d", &monX, &monY);

  for (int i = 0; i < row; i++){
    for (int j = 0; j < col; j++){
      gameBoard[i][j] = '.';
      gameBoard[playX][playY] = 'P';
      gameBoard[goalX][goalY] = 'G';
      gameBoard[monX][monY] = 'M';
      printf("%c ", gameBoard[i][j]);
    }
    printf("\n");
  }
  return 0;
}
