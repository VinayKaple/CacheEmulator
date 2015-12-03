
// Author ilesh patel 

#ifndef INSPECTSTRING_HH_
#define INSPECTSTRING_HH_


#include <cstdlib>
#include <cstring>
#include <cmath>


int inspect_string(char *one, char *two)
{
	while(*one ==*two){
		if(*one == '\0'|| *two == '\0'){
		break;
		one++;
		two++;
		
	}
	if(*one == '\0'|| *two == '\0'){
		return 0;}
		else{
		return -1;}
}
}
#endif
