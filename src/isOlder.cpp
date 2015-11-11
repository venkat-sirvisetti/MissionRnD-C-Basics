/*
OVERVIEW: 	Given date of births of two persons as inputs, return 1 if person one is elder,
2 if person two is elder, 0 if both are of same age.
Example: isOlder("24-07-2000", "25-07-2000") should return 1 as person one
is elder than person two.

INPUTS: 	DOBs of two persons as parameters in the format "DD-MM-YYYY".

OUTPUT: 	1 if person one is elder, 2 if person two is elder, 0 if both are of same age.

ERROR CASES: Return -1 if any DOB is invalid.

NOTES: 		Don't use any built-in C functions for comparisions. You are free to write any helper functions.
*/

int isOlder(char *dob1, char *dob2) {
	int month[2], day[2], year[2], t = -1;
	if (!(dob1[2] == '-'&&dob1[5] == '-'&&dob2[2] == '-'&&dob2[5] == '-'))
		return -1;
	for (t = 0; t < 10; t++)
	{
		if (t != 2 && t != 5)
		{
			if (dob1[t] <= '9'&&dob1[t] >= '0'&&dob2[t] <= '9'&&dob1[t] >= '0')
				continue;
			return -1;
		}
	}
	t = -1;
	day[0] = (dob1[0] - '0') * 10 + (dob1[1] - '0');
	day[1] = (dob2[0] - '0') * 10 + (dob2[1] - '0');
	month[0] = (dob1[3] - '0') * 10 + (dob1[4] - '0');
	month[1] = (dob2[3] - '0') * 10 + (dob2[4] - '0');
	year[0] = (dob1[6] - '0') * 1000 + (dob1[7] - '0') * 100 + (dob1[8] - '0') * 10 + (dob1[9] - '0');
	year[1] = (dob2[6] - '0') * 1000 + (dob2[7] - '0') * 100 + (dob2[8] - '0') * 10 + (dob2[9] - '0');
	(year[0] < year[1]) ? t = 2 : (year[0]>year[1]) ? t = 1 : t = 0;
	if (t == 0)
	{
		(month[0]<month[1]) ? t = 2 : (month[0]>month[1]) ? t = 1 : t = 0;
	}
	if (t == 0)
	{
		(day[0] < day[1]) ? t = 2 : (day[0]>day[1]) ? t = 1 : t = 0;
	}
	return t;
}
