#include <stdio.h>
#include <stdlib.h>

struct data {
    int x;
    char string[255];
    float fl;
};

int main(int argc, char *argv[]){
    char fname[50];
    FILE *f;
    struct data dat;
    f=fopen(argv[1],"rb");
    if(!(f = fopen("data.dat", "rb"))){
        printf("Error.\nEnter correct file path:\n");
        scanf("%s", &fname);
        f=fopen(fname, "rb");
    }
    int i = 0;
    while(fread(&dat, sizeof(struct data), 1, f)){
        printf("%d | %s | %f \n", dat.x, dat.string, dat.fl);
        i++;
    }
    printf("Filesize: %d\n", i * sizeof(struct data));
    fclose(f);
    return 0;
}
