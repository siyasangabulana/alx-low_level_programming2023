#include <stdio.h>

/*It prints the lowecase alphabet in reverse
 *
 */

int main(void) {
char letter;

for (letter = 'z'; letter >= 'a'; letter--) {
putchar(letter);
}

putchar('\n');

return (0);
}
