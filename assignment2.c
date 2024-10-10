#include <stdio.h>
int main()
 {
    int decimal;
    printf("Enter a decimal number: ");
    scanf("%d", &decimal);
    printf("Binary: ");
    decimalToBinary(decimal);
    printf("\n");
    printf("Octal: ");
    decimalToOctal(decimal);
    printf("\n");
    printf("Hexadecimal: ");
    decimalToHexadecimal(decimal);
    printf("\n");

    return 0;
}
void decimalToBinary(int num)
 {
    int binary[32];
    int i = 0;
    if (num == 0) 
	{
        printf("0");
        return;
    }
    
    while (num > 0) 
	{
        binary[i] = num % 2;
        num = num / 2;
        i++;
    }
    for (int j = i - 1; j >= 0; j--)
	 {
        printf("%d", binary[j]);
    }
}

void decimalToOctal(int num)
 {
    printf("%o", num);
}

void decimalToHexadecimal(int num)
 {
    printf("%X", num);
}
