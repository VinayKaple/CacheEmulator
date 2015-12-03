
// Author ilesh patel 

#ifndef INSPECTSTRING_HH_
#define INSPECTSTRING_HH_


#include <cstdlib>
#include <cstring>
#include <cmath>


int inspect_string(char *one, char *two)
{
	while(*one ==*two){
		if(*one == '\O'|| *two == '\O'){
		break;
		one++;
		two++;
		
	}
	if(*one == '\O'|| *two == '\O'){
		return 0;}
		else{
		return -1;}
}
}
#endif
