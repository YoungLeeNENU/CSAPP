#include <stdio.h>

typedef unsigned char *byte_pointer;

void show_bytes(byte_pointer start, int len) {
    int i;
    for (i = 0; i < len; i++)
        printf ("%.2x\n", start[i]);
    printf ("\n");
}

void show_int(int x) {
    show_bytes((byte_pointer) &x, sizeof(int));
}

void show_float(float x) {
    show_bytes((byte_pointer) &x, sizeof(float));
}

int main(int argc, char *argv[])
{
    int c = 1;
    float d = 1.0;
    
    show_int(c);
    show_float(d);
    
    return 0;
}
