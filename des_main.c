#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>

#include"header.h"
#include"func.c"
#include"sbox.c"

int main(){
    char *p = SimplePBox();     //배열을 리턴하는 SimplePBox를 받아주는 포인터 p 선언
    Binary(p);      //배열의 주소를 가지고 있는 p를 사용
    
    //for(int i=0;i<16;i++){
    RoundFunc(p);
    DES_func(p);
    //Swapper();
    //}

}