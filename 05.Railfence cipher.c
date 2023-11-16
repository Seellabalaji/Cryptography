#include<stdio.h>
#include<string.h>
#include<ctype.h>
void encryptRailFence(char message[], int railCount) {
    int messageLen = strlen(message);
    char railFence[railCount][messageLen];
    for (int i = 0; i < railCount; i++) {
        for (int j = 0; j < messageLen; j++) {
            railFence[i][j] = ' ';
        }
    }
    int row = 0;
    int direction = 1;
    for (int i = 0; i < messageLen; i++) {
        railFence[row][i] = message[i];
        if (row == 0) {
            direction = 1;
        } else if (row == railCount - 1) {
            direction = -1;
        }
        row += direction;
    }
    printf("Encrypted message: ");
    for (int i = 0; i < railCount; i++) {
        for (int j = 0; j < messageLen; j++) {
            if (railFence[i][j] != ' ') {
                printf("%c", railFence[i][j]);
            }
        }
    }
    printf("\n");
}
int main() {
    char message[100];
    int railCount;
    printf("Enter the message to encrypt: ");
    scanf("%s", message);
    printf("Enter the number of rails: ");
    scanf("%d", &railCount);
    if (railCount < 2) {
        printf("The number of rails should be at least 2. Exiting...\n");
        return 1;
    }
    encryptRailFence(message, railCount);
    return 0;
}

/* OUTPUT

Enter the message to encrypt: Murali
Enter the number of rails: 2
Encrypted message: Mrluai

--------------------------------
Process exited after 4.147 seconds with return value 0
Press any key to continue . . .
*/
