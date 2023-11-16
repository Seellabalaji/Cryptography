#include<stdio.h>
#include<string.h>
#include<ctype.h>
void encryptVigenereCipher(char message[], char keyword[]) {
    int messageLen = strlen(message);
    int keywordLen = strlen(keyword);
    printf("Encrypted message: ");
    for (int i = 0; i < messageLen; i++) {
        char keyChar = keyword[i % keywordLen];
        int shift = tolower(keyChar) - 'a';
        char originalChar = message[i];
        if (isalpha(originalChar)) {
            char base = islower(originalChar) ? 'a' : 'A';
            char encryptedChar = (originalChar - base + shift) % 26 + base;
            printf("%c", encryptedChar);
        } else {
            printf("%c", originalChar);
        }
    }
    printf("\n");
}
int main() {
    char message[100];
    char keyword[100];
    printf("Enter the message to encrypt: ");
    scanf("%s", message);
    printf("Enter the keyword (in uppercase): ");
    scanf("%s", keyword);
    encryptVigenereCipher(message, keyword);
    return 0;
}

/*OUTPUT

Enter the message to encrypt: murali
Enter the keyword (in uppercase): mahesh
Encrypted message: yuyedp

--------------------------------
Process exited after 14.23 seconds with return value 0
Press any key to continue . . .
*/
