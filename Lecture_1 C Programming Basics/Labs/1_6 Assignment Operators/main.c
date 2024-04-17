#include <stdio.h>

void main(void)
{
	int x = 10;
	
	
	x += 3;
	printf(" x += 3 result is %d\n",x);
	
	/* Re-initialize x back to 10 */
	x = 10;
	x -= 4;
	printf(" x -= 4 result is %d\n",x);
	
	
	/* Re-initialize x back to 10 */
	x = 10;
	x *= 5;
	printf(" x *= 5 result is %d\n",x);
	
	/* Re-initialize x back to 10 */
	x = 10;
	x /= 2;
	printf(" x /= 2 result is %d\n",x);
	
	/* Re-initialize x back to 10 */
	x = 10;
	x %= 4;
	printf(" x %= 4 result is %d\n",x);
	
	/* Re-initialize x back to 10 */
	x = 10;
	x &= 1;
	printf(" x &= 1 result is %d\n",x);
	
	/* Re-initialize x back to 10 */
	x = 10;
	x |= 15;
	printf(" x |= 15 result is %d\n",x);
	
	/* Re-initialize x back to 10 */
	x = 10;
	x ^= 2;
	printf(" x ^= 2 result is %d\n",x);
	
	/* Re-initialize x back to 10 */
	x = 10;
	x >>= 1;
	printf(" x >>= 1 result is %d\n",x);
	
	/* Re-initialize x back to 10 */
	x = 10;
	x <<= 1;
	printf(" x <<= 1 result is %d\n",x);
}