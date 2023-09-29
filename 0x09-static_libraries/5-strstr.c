#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

char *_strtsr(char *haystack, char *needle)
{
	return strstr(haystack, needle);
}
