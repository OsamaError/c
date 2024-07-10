// get bit
int num=7; int bitNum=1;
00000011  &
00000001
00000001 
00000010
int bitValue=(num>>bitNum)&1;
int bitValue=(num&(1<<bitNum))>>bitNum;
////////////////////////////////////////////////////////////////
// clear bit
int num=7; int bitNum=1;
00000111 &
00000010
~(00000010)-->1111101
 num&= ~(1<<bitNum);
//////////////////////////////////////////////////////////////
/****************conditional statements***********************/
2- switch statement
switch(variable)
{
	case constant_value1 : // must be unique, can't be variable,(int char)
	statement1;
	statement2;
	break;                // optional 
	case constant_value2 :
	statement1;
	statement2;
	break;
	default :            //optional, can be placed anywhere in the switch, one defaualt is allowed
	statement1;
	statement2;
	break;
}
// nesting is allowed 
int n=2;
switch(n)
{
	case 1:
	printf("one");
	break;
	case 2:
	printf("two");
	break;
	default:
	printf("wrong number");
	break;
}
/******************************** loop in c **********************************/
printf("1");
printf("1");
printf("1");
printf("1");
printf("1");

1- for loop   
syntax 
for(start ; condition ; action )
{
	/* body of loop*/
}
1)start
2)check on condition
3)body of loop
4)action
5)repeat steps 2) to 4)  until condition be false 

int i;
for(i=0 ; i<100 ; i++)
{
	printf("1");
}
i=0
0<5 true 
printf("1");
i=1
i<5
printf("1");
i=2

i=5
5<5  false  ---> loop is finished

2- while loop   3- do while loop 

syntax
 while(condition)
 {
	 /*body of loop*/
 }
 int n=0;
 while(n!=5)
 {
	printf("try again\n");
	scanf("%d",&n);
 }
 printf("ok");

syntax 
do
{
	/* body of loop */
}while(condition);

do
{
	if(n!=0)
	{
		printf("try again\n");
	}
	scanf("%d",&n);
	

}while(n!=5);
/////////////////////////////////////////////////////////////////////
/********************* break , continue ***************************************/
break to exit loop 
continue skip current iteration 



while(1)
{
	scanf("%d",&n);
	if(n==12)
		break;
}


for(i=0;i<5 ; i++)
{
	if(i==3)
		continue;
	printf("%d",i);
}
/*************************** Array **********************************************/
array : group of data have the same type 

syntax:

type  array_name[length];

length----> constant , can't be variable  /* arr[n] not  allowed */
ex: int arr[5];
intialization 

int arr1[]={1,2,3,4,5};
or int arr1[5]={1,2,3,4,5};

int arr[3];
arr[3]={1,2,3}; /* not allowed */

for(i=0;i<5,i++)
{
	arr1[i]=1;
}
i: index of arr1 0--->arr_length-1

printf("%d",arr[3]); // garbge value   
scanf("%d",&arr[0]);
for(i=0; i<arr_size;i++)
{
	scanf("%d",&arr[i]);
}

char string[10];

scanf("%s",&string); or scanf("%s",string);

char string[]="Ahmed mohamed ";
for(i=0; i<sizeof(string)/sizeof(string[0]);i++)
{
	printf("%d",string[i]);
}
char s[5]={'A','h','m','e','d'};
for(i=0; i<5;i++)
{
	printf("%d",s[i]);
}
printf("%s",s);
