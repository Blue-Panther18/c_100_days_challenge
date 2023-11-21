/**
 *
 *
 */

#include <stdio.h>
#include <stdbool.h>

bool isPalindrome(int num)
{
	int n = 0;
	int x = num;

	if(x < 0)
	{
		x = x * -1;
		n++;
	}
	while(x > 0)
	{
		n++;
		x = x / 10;
	}

	char num_str[n];
	sprintf(num_str, "%d", num);
	int num_str_len = sizeof(num_str);
	int start = 0;
	int end = num_str_len - 1;

	while(start < end)
	{
		if(num_str[start] != num_str[end])
			return false;
		start++;
		end--;
	}
	return true;
}

/**
 *
 *
 */

int main(void)
{
	if(isPalindrome(121))
		printf("The number is a palindrome\n");
	else
		printf("The number is not a palindrome\n");
	if(isPalindrome(-121))
		printf("The number is a palindrome\n");
	else
		printf("The number is not a palindrome\n");
	if(isPalindrome(10))
		printf("The number is a palindrome\n");
	else
		printf("The number is not a palindrome\n");


}
