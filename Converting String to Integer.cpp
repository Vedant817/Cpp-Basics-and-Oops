//Converting the string to an integer...
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    int str[3]={1,2,4};
    int t;
    int num;
//	num=num*10+t;
    int i=0;
    while(i<3){
    	num=num*10+str[i];
    	i++;
	}
	printf("The integer is %d", num);
	
	return 0;
}
