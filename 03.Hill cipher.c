#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
void hillCipherEncrypt(int keyMatrix[10][10], char plaintext[], char ciphertext[], int keySize) {
    int i, j, k, sum;
    int len = strlen(plaintext);
    int paddedLen = len;
    if (len % keySize != 0) {
        paddedLen = (len / keySize + 1) * keySize;
        for (i = len; i < paddedLen; i++) {
            plaintext[i] = 'X';
        }
    }
    for (i = 0; i < paddedLen; i += keySize) {
        for (j = 0; j < keySize; j++) {
            sum = 0;
            for (k = 0; k < keySize; k++) {
                sum += (keyMatrix[j][k] * (plaintext[i + k] - 'A'));
            }
            ciphertext[i + j] = (sum % 26) + 'A';
        }
    }
    for (i = len; i < paddedLen; i++) {
        if (ciphertext[i] == 'X') {
            ciphertext[i] = '\0';
            break;
        }
    }
}
int main() {
    int keyMatrix[10][10];
    int keySize;
    printf("Enter the dimensions of the key matrix (e.g., 2 for a 2x2 matrix): ");
    scanf("%d", &keySize);
    printf("Enter the key matrix (%dx%d integers):\n", keySize, keySize);
    for (int i = 0; i < keySize; i++) {
        for (int j = 0; j < keySize; j++) {
            scanf("%d", &keyMatrix[i][j]);
        }
    }
    char plaintext[100], ciphertext[100];
    printf("Enter the plaintext (up to 100 characters): ");
    scanf(" %[^\n]", plaintext);
    int len = strlen(plaintext);
    for (int i = 0; i < len; i++) {
        if (isalpha(plaintext[i])) {
            plaintext[i] = toupper(plaintext[i]);
        }
    }
    hillCipherEncrypt(keyMatrix, plaintext, ciphertext, keySize);
    printf("Encrypted text: %s\n", ciphertext);
    return 0;
}

/* OUTPUT

Enter the dimensions of the key matrix (e.g., 2 for a 2x2 matrix): 3
Enter the key matrix (3x3 integers):
3
10
20
20
9
17
9
4
17
Enter the plaintext (up to 100 characters): attackistonight
Encrypted text: YAJMGWMVZUNCAMP

--------------------------------
Process exited after 43.67 seconds with return value 0
Press any key to continue . . .

*/
