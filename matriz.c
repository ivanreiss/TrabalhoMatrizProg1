#include <stdio.h>

int main()
  
{
  float A[4][4];
  float B[4][4];
  int i;
  int j;
  
  printf("\nOlá, meu nome é Ivan Feliciano dos Reis Junior e minha matrícula na Unilasalle é 0050014369.");
  printf("\n");
  printf("\n");
  printf("\nEntre com a primeira matriz A de 4 linhas e 4 colunas");
  for(i=0;i<=3;i++)
   {
     for(j=0;j<=3;j++)
      {
        printf("\nMatriz A - Entre com a linha %d, cluna %d: ", i+1, j+1);
        scanf("%f", &A[i][j]);
      }
     printf("\n");
   }
  printf("\n");
  printf("\nEntre com a segunda matriz B de 4 linhas e 4 colunas");
  for(i=0;i<=3;i++)
   {
     for(j=0;j<=3;j++)
      {
        printf("\nMatriz B - Entre com a linha %d, cluna %d: ", i+1, j+1);
        scanf("%f", &B[i][j]);
      }
     printf("\n");
   }
  
  printf("\n");
  
  printf("\nObrigado, seguem os resultados que o professor Alex solicitou:");
 
  printf("\n");
  
  printf("\nSoma das duas matrizes:");
  printf("\n(%.2f %.2f %.2f %.2f)", A[0][0]+B[0][0], A[0][1]+B[0][1], A[0][2]+B[0][2], A[0][3]+B[0][3]);
  printf("\n(%.2f %.2f %.2f %.2f)", A[1][0]+B[1][0], A[1][1]+B[1][1], A[1][2]+B[1][2], A[1][3]+B[1][3]);
  printf("\n(%.2f %.2f %.2f %.2f)", A[2][0]+B[2][0], A[2][1]+B[2][1], A[2][2]+B[2][2], A[2][3]+B[2][3]);
  printf("\n(%.2f %.2f %.2f %.2f)", A[3][0]+B[3][0], A[3][1]+B[3][1], A[3][2]+B[3][2], A[3][3]+B[3][3]);
  
  printf("\n");
  
  printf("\nDiagonal secundaria da Matriz A:");
  printf("\n(0.00 0.00 0.00 %.2f)", A[0][3]);
  printf("\n(0.00 0.00 %.2f 0.00)", A[1][2]);
  printf("\n(0.00 %.2f 0.00 0.00)", A[2][1]);
  printf("\n(%.2f 0.00 0.00 0.00)", A[3][0]);
  
  printf("\n");
  
  printf("\nMultiplicação das duas matrizes:");
  printf("\n(%.2f %.2f %.2f %.2f)", (A[0][0]*B[0][0])+(A[0][1]*B[1][0])+(A[0][2]*B[2][0])+(A[0][3]*B[3][0]), (A[0][0]*B[0][1])+(A[0][1]*B[1][1])+(A[0][2]*B[2][1])+(A[0][3]*B[3][1]), (A[0][0]*B[0][2])+(A[0][1]*B[1][2])+(A[0][2]*B[2][2])+(A[0][3]*B[3][2]), (A[0][0]*B[0][3])+(A[0][1]*B[1][3])+(A[0][2]*B[2][3])+(A[0][3]*B[3][3]));
  printf("\n(%.2f %.2f %.2f %.2f)", (A[1][0]*B[0][0])+(A[1][1]*B[1][0])+(A[1][2]*B[2][0])+(A[1][3]*B[3][0]), (A[1][0]*B[0][1])+(A[1][1]*B[1][1])+(A[1][2]*B[2][1])+(A[1][3]*B[3][1]), (A[1][0]*B[0][2])+(A[1][1]*B[1][2])+(A[1][2]*B[2][2])+(A[1][3]*B[3][2]), (A[1][0]*B[0][3])+(A[1][1]*B[1][3])+(A[1][2]*B[2][3])+(A[1][3]*B[3][3]));
  printf("\n(%.2f %.2f %.2f %.2f)", (A[2][0]*B[0][0])+(A[2][1]*B[1][0])+(A[2][2]*B[2][0])+(A[2][3]*B[3][0]), (A[2][0]*B[0][1])+(A[2][1]*B[1][1])+(A[2][2]*B[2][1])+(A[2][3]*B[3][1]), (A[2][0]*B[0][2])+(A[2][1]*B[1][2])+(A[2][2]*B[2][2])+(A[2][3]*B[3][2]), (A[2][0]*B[0][3])+(A[2][1]*B[1][3])+(A[2][2]*B[2][3])+(A[2][3]*B[3][3]));
  printf("\n(%.2f %.2f %.2f %.2f)", (A[3][0]*B[0][0])+(A[3][1]*B[1][0])+(A[3][2]*B[2][0])+(A[3][3]*B[3][0]), (A[3][0]*B[0][1])+(A[3][1]*B[1][1])+(A[3][2]*B[2][1])+(A[3][3]*B[3][1]), (A[3][0]*B[0][2])+(A[3][1]*B[1][2])+(A[3][2]*B[2][2])+(A[3][3]*B[3][2]), (A[3][0]*B[0][3])+(A[3][1]*B[1][3])+(A[3][2]*B[2][3])+(A[3][3]*B[3][3]));
  
  printf("\n");
  printf("\n");
  
  printf("\nDificuldade do programa : A minha maior dificuldade para fazer esse programa foi organizar os termos de cada resposta de modo que respeitassem a regra matemática.");

  return 0;
  
  }