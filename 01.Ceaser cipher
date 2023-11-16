#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main(){
	char plain[100], cipher[100];
	int key, i, length;
	printf("Enter the plaintext: ");
	scanf("%s",plain);
	printf("Key value: ");
	scanf("%d", &key);
	printf("\nPLAIN TEXT IS : %s", plain);
	printf("\nCIPHER TEXT IS: ");
	for(i=0, length=strlen(plain);i<length;i++){
		cipher[i]=plain[i]+key;
		if(isupper(plain[i])&&(cipher[i]>'Z')){
			cipher[i]=cipher[i]-25+key;
		}
		if(islower(plain[i])&&(cipher[i]>'z')){
			cipher[i]=cipher[i]-25+key;
		}
		printf("%c", cipher[i]);
	}
	printf("\nAFTER DECRYPRTION: ");
	for(i=0; i<length; i++){
		plain[i]=cipher[i]-key;
		if(isupper(cipher[i])&&(plain[i]<'A')){
			plain[i]=plain[i]+26;
		}
		if(islower(cipher[i])&&(plain[i]<'a')){
			plain[i]=plain[i]+26;
		}
		printf("%c", plain[i]);
	}
}


/*OUTPUT

Enter the plaintext: JAVA
Key value: 3

PLAIN TEXT IS : JAVA
CIPHER TEXT IS: MDYD
AFTER DECRYPRTION: JAVA
--------------------------------
Process exited after 20.85 seconds with return value 0
Press any key to continue . . .

*/
