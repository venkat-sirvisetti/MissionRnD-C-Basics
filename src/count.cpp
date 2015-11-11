/*
OVERVIEW:  Given 2 integers (num1, num2), write a function that returns the count of numbers between the num1..num2 that are divisible by num1.
		E.g.: count(3, 15) returns 5 (3, 6, 9, 12, 15).

INPUTS:  Two numbers num1, num2.
		num1, num2 >= 0.

OUTPUT: Return the count of numbers between the num1..num2 that are divisible by num1.

ERROR CASES: Return -1 in error cases.

NOTES:
*/
int count(int num1, int num2) {
	int c = -1, temp;
	temp = num1;
	if (num1 == 0)
		return -1;
	if (num2 == 0)
		return 0;
	while (temp <= num2)
	{
		c++;
		temp = num1*(c + 1);
	}
	if (c == -1)
		return 0;
	return c ;
}