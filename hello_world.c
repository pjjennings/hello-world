/*
 * =====================================================================================
 *
 *       Filename:  hello_world.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  01/17/2015 09:34:54 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */

#include <stdio.h>

static char ident[] = "$Format:%H$";
static char id[] = "$Id:$";

int main(int argc, char argv[])
{
	printf("Hello world.\n");
	printf("The git Id of this program: %s\n", id);
}
