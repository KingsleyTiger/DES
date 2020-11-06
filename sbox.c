#include<stdio.h>
#include<stdlib.h>

char s[8][5][17];
char a[7];
void MK_Sbox(){
for(int i = 0 ; i < 8 ; i++){
    for(int j = 0 ; j < 1 ; j++){
        for(int k = 0 ; k < 10 ; k++){
            s[i][j][k]=k;
            printf("s[%d][%d][%d] : %d\n",i,j,k,s[i][j][k]);
        }
        for(int m=10;m<17;m++){
          a[m-10]=printf("%c",m+87);
          s[i][j][m]=a[m-10]; 
          printf("s[%d][%d][%d] : %d\n",i,j,m,s[i][j][m]);
        }
    }
}	
}

