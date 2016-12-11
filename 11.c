#include <stdio.h>
#include <stdlib.h>
#define MAX_NUM_SIZE 255

int main (int argc, char *argv[])
{
	char a[MAX_NUM_SIZE];
	int isHex = 0, n = 0, i = 0, CurElm;
	printf("Value:\n");
    gets(a);
    n = strlen(a);

    // define whether there are no symbols except the numbers
    if (a[0] == '0' && a[1] == 'x' && n > 2){
        isHex = 1;
        for (i = 2; i < n; i++){
            CurElm = (int)a[i];
            // if not fits to conditions of HEX-number
            // first check with && - 0..9, second && - A..F
            if (!((CurElm >= 48 && CurElm <= 57) || (CurElm >= 65 && CurElm <=70))){
                isHex = 0;
                break;
            }
        }
    }

    // result
    if (isHex == 1)
        printf("The number you typed is hexagonal!");
    else
        printf("You typed not hexagonal number");
	return 0;
}
