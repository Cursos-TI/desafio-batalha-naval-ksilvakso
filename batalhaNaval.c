#include <stdio.h>
 
int main() {
    char *nome1[] = {"1 " "   0 " " 0 " " 0 " " 0 " " 0 " " 0 " " 0 " " 0 " " 0 " " 0 "};
    char *nome2[] = {"2 " "   0 " " 0 " " 0 " " 0 " " 0 " " 0 " " 0 " " 0 " " 0 " " 0 "};
    char *nome3[] = {"3 " "   0 " " 0 " " 0 " " 0 " " 8 " " 8 " " 8 " " 0 " " 0 " " 0 "};
    char *nome4[] = {"4 " "   0 " " 0 " " 0 " " 0 " " 0 " " 0 " " 0 " " 0 " " 0 " " 0 "};
    char *nome5[] = {"5 " "   0 " " 0 " " 8 " " 0 " " 0 " " 0 " " 0 " " 0 " " 0 " " 0 "};
    char *nome6[] = {"6 " "   0 " " 0 " " 8 " " 0 " " 0 " " 0 " " 0 " " 0 " " 0 " " 0 "};
    char *nome7[] = {"7 " "   0 " " 0 " " 8 " " 0 " " 0 " " 0 " " 0 " " 0 " " 0 " " 0 "};
    char *nome8[] = {"8 " "   0 " " 0 " " 0 " " 0 " " 0 " " 0 " " 0 " " 0 " " 0 " " 0 "};
    char *nome9[] = {"9 " "   0 " " 0 " " 0 " " 0 " " 0 " " 0 " " 0 " " 0 " " 0 " " 0 "};
    char *nome10[] = {"10 " "  0 " " 0 " " 0 " " 0 " " 0 " " 0 " " 0 " " 0 " " 0 " " 0 "};
    char *nomes[] = {"BN " "  A " " B " " C " " D " " E " " F " " G " " H " " I " " J "};
    int i;
    for(i = 0; i < 10; i++) {
        printf("%s\n", nomes[i]);
        printf("%s\n", nome1[i]);
        printf("%s\n", nome2[i]);
        printf("%s\n", nome3[i]);
        printf("%s\n", nome4[i]);
        printf("%s\n", nome5[i]);
        printf("%s\n", nome6[i]);
        printf("%s\n", nome7[i]);
        printf("%s\n", nome8[i]);
        printf("%s\n", nome9[i]);
        printf("%s\n", nome10[i]);
    }
}
