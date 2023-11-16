#include<stdio.h>
#include<stdint.h>
void des_encrypt(uint64_t plainText, uint64_t key, uint64_t *cipherText);
void print_binary(uint64_t num);
int main() {
uint64_t plainText, key, cipherText;
printf("Enter the 64-bit plaintext: ");
scanf("%llx", &plainText);
printf("Enter the 64-bit encryption key: ");
scanf("%llx", &key);
des_encrypt(plainText, key, &cipherText);
printf("\nPlaintext: ");
print_binary(plainText);
printf("\nKey: ");
print_binary(key);
printf("\nCiphertext: ");
print_binary(cipherText);
return 0;
}
void des_encrypt(uint64_t plainText, uint64_t key, uint64_t *cipherText) {
*cipherText = plainText;
}
void print_binary (uint64_t num) {
for (int i = 63; i >= 0; i--) {
uint64_t bit = (num >> i) & 1;
printf("%llu", bit);
if (i % 8 == 0)
printf(" ");
}
printf("\n");
}

/* OUTPUT

Enter the 64-bit plaintext: 0123456789ABCDEF
Enter the 64-bit encryption key: BCD1114141004568

Plaintext: 00000001 00100011 01000101 01100111 10001001 10101011 11001101 11101111

Key: 10111100 11010001 00010001 01000001 01000001 00000000 01000101 01101000

Ciphertext: 00000001 00100011 01000101 01100111 10001001 10101011 11001101 11101111

--------------------------------
Process exited after 20.02 seconds with return value 0
Press any key to continue . . .
*/
