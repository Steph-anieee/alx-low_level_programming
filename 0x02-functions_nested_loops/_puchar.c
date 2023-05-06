#includ "main.h"
#include <unistd.h>
/**
 * _puchar -write the character c to stdout
 * @c: The charater to print 
 *
 * Return:On success 1.
 * On error,-1 is returned,and emo is set appropriately.
 */
int _puchar(char c)
{
	return (write(1, &c, 1));
}
