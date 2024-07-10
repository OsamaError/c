comments in c 
// single line comment 
/* multi 
   line 
   comment 
*/
//////////////////////////////////////////////////////////////
variable in c 

1-type :
	data to be syored in memory 
	dicimail types ( char ,int )  ex a, 3
	floating types ( float, double) ex 3.2
//////////////////////////////////////////////////////////////
2-name 
- A TO Z ,a to z, 0 to 9 , underscore _
- name start alphabet,_ can,t start with number

	int 1x; // wrong
	int x1  // correct	
	
-blanks not allowed 
 int var 1; // not allowed
 int var_1; // allowed
- variable name shouldn't be reversed word (int , return )
- variable name can not be repeated same scope {}
int main()
{
int x;
int x;  // multi defintition 
}
3-value
//////////////////////////////////////////////////////////////


syntax
type name ;         // define variable
type name = value;  // define and intialize variable
//////////////////////////////////////////////////////////////
printing variable

#include<stdio.h>
int x=5;
printf("%formatSpecifer", variableName);


int 	%d
char	%c
float 	%f

printf("value=%d",x); -----> value=5

printf("value1=%d , value2=%d",x,y);
printf("%d%d",x,y);
///////////////////////////////////////////////////////////////
scaning a value 
int x;
scanf("formatSpecifer",&variableName);

scanf("%d",&x);

/////////////////////////////////////////////////
\n new line 
\t tab
\' single quote
\" double quote
/////////////////////////////////////////////////////////////////
c operators

1-Arithmatic operations
	-Bi (two variables) 
	 (+,-,*,/,%)
	 int x,y;
	 int sum =x+y;
	 int div=x/y; // integer value 9/4=2
	 float div=x/y; //2.0
	 float div=((float)x)/y); //2.25 
	 int mod=x%y;// 9%4=1
	
	-Uni (1 variable) 
	 (++,--)
	 int x=5;
	 prefix (increment then use)
	 ++x; --->x=x+1
	 --x;
	 y=++x; // x=6 ,y=6 
	 postfix; (use then increment)
	 x--;
	 x++;
	 y=x++; // y=5 ,x=6
	 
//////////////////////////////////////////////////////////
2- bitwise operations
( and , or  , not  , xor  , shift right ,shift left, xnor)
(  &  , |   ,  ~   ,  ^   ,	>>			,	<<	  , ~^	 )

x&y  
1010 & 10
0101    5
------
0000

x y & | ^ ~^
0 0 0 0 0 1
0 1 0 1 1 0
1 0 0 1 1 0
1 1 1 1 0 1

x>>2; 1010>>2  ---->0010

x>>1 ----> x/2
x>>2 ---->x/(2*2)
10/4=2  ---->0010

x<<2    ---->x*(2*2)--->40
00001010<<2  ----->  00101000
x<<0

/////////////////////////////////////////////////////////////////
Assignment 
=
x=x>>1;  ----> x>>=1;
x+=1;     ---->x=x+1;

//////////////////////////////////////////////////////////////
logical operations 

&& , || , !
and, or ,not

true  ( any number expet 0) /// 0b1010101
false (0)					//  0b0000000 
 5 && 9= true (1 , 255)
 0 && 9= false (0)
 x=5
 
y=!x; ----> y=0;
/////////////////////////////////////
Relatinal operations

> ,< ,>= ,<= , ==, !=  (true , false )

1010>>1 ----->101 & 001= 001
1010>>2-----> 10 & 01=   00

///////////////////////////////////
num=5 ,bitnum= 3
0101101---->111--->7
  1

101010 |
000100   bit mask
----------------
101110
   
0101

////////////////////////////////
set bit 

bit mask 
operator  | 1
0000000 |   0001000
0000100    1<<bitnum
0000000 |
0000001
-------
0000001
0001000


num|=1<<bitnum ----->num=num|(1<<bitnum)
toggle 

//////////////////////////////////////////////////////////////
conditional statemets 
 there  are 2  conditional statemets in c
 1- if statemet
 syntax 
 
 if(condition) 
 {
	statments;
 }
 else if(condition) /* must be after if , can be evaluated if we don't enter if statemet*/
 {
	statments
 }
 else /* must be after if or else if, can be evaluated if we don't enter all if and else if statemets before it*/
 {
	statments
 }
 
 int x=0;
 
 if(x==1)
 {
	printf("one");
 }
 
 else if(x==0)
 {
	printf("zero");
 }
 
 else
 {
	printf("number greater than 1");
 }
 

















































