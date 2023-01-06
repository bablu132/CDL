/* 
Name: Krunal Prakash Kurkure
PRN:1941028
Batch:B3

*/#include<stdio.h>
#include<stdlib.h>
int main( )
{
    int a , b , c , ch ;
    printf ( " \n Enter the two numbers " ) ;
    scanf( " %d%d " , & a , & b ) ;
    printf ( " \nMENU\n1.ADD\n2.Sub\n3.MUL " ) ;
    scanf ( " %d " , & ch ) ;
    c = a + b ;
    //adding two numbers
    if ( ch == 0 )
    {
        printf ( " Goodbye " ) ;
    }
}