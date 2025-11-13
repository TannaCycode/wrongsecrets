#include <stdlib.h>
int
main(void)
{
void *p = malloc(32);
free(p);
free(p);
return(0);
}
