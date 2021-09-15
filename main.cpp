#include "add-nbo.h"
#include <arpa/inet.h> // for linux
// #include <netinet/in.h> for some OS

int main(int argc, char const *argv[])
{
    if (argc != 3){
        printf("[!] usage: %s <file1> <file2>\n", argv[0]);
        return 1;
    }

    FILE* fp1 = fopen(argv[1], "rb");
    FILE* fp2 = fopen(argv[2], "rb");

    if(!fp1 | !fp2){
        printf("[!] fopen error\n");
        return 1;
    }

    uint32_t num1;
    uint32_t num2;

    fread(&num1, 1, 4, fp1);
    fread(&num2, 1, 4, fp2);
    
    num1 = ntohl(num1);
    num2 = ntohl(num2);

    printf("%u(0x%x) + %u(0x%x) = %u(0x%x)\n", num1, num1, num2, num2, num1 + num2, num1 + num2);

    fclose(fp1);
    fclose(fp2);


    return 0;
}
