#include <stdlib.h>
#include <stdio.h>
#define maxL 255
typedef struct  {
int valera_lab1;
char valera_labs[maxL];
float hren;}valera_labc;

int main (int argc, const char * argv[]) {
FILE *file;

valera_labc *valera_labz = malloc(sizeof(valera_labc));
if (argc != 2)
{
        printf("it's alive!\n");
        return 0;
    }
    if ((file = fopen(argv[1], "r+b")) == NULL)
   {
        printf("it's alive!\n");
        return 0;
   }
int i=0;
   while(!feof(file))
{
    fread(valera_labz ,sizeof(valera_labc),1,file);
    printf("%d %s %f" , valera_labz ->valera_lab1, valera_labz ->valera_labs, valera_labz->hren);
    i++;
}
fseek(file, 0, SEEK_END);
    printf("Elements count: %d\n", i );
    printf("File size: %ld bytes", ftell(file));
    fclose(file);
return 0;
}
