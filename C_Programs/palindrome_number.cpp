/*Write a program in C to check whether a number is a palindrome or not. 
Input a number: 121
Expected Output :
121 is a palindrome number. */
#include<stdio.h>
int main()
{
	int num1,num2,rem,temp;
	printf("\n enter a number : ");
	scanf("%d",&num1);
	temp=num1;
	while(num1!=0)
	{
		rem=num1%10;
		num1=num1/10;
		num2=num2*10+rem;
	}
	printf("\nNum2 = %d ",num2);
	if(num2==temp)
	printf("\n Enter number %d is palindrome no ",temp);
	else
	printf("\n Enter number %d is not palindrome no.",temp);
}
