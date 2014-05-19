#include "stdio.h"

char *respond(int value1 , int value2 , int value3)
{	
	/*Invalid checking*/
	if(value1 < 0 || value2 < 0 || value3 < 0)
		return "Invalid Input";
	
	else if(value1 == 0 || value2 == 0 || value3 ==0)
		return "Invalid Input";
	
	else if((value1 + value2) < value3 || (value1 + value3) < value2 || (value2 + value3) < value1)
		return "Invalid Input";
	/*Invalid checking*/
	
	else if(value1 == value2 && value2 == value3)
		return "Equilateral";
	
	else if(value1 == value2 || value2 == value3)
		return "Isosceles";
	
	else if(value1 == value2 || value1 == value3 || value2 == value3)
		return "Isosceles";
	
	else
		return "Scalene";
}