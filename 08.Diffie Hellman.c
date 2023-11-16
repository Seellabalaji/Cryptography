#include<stdio.h>
#include<string.h>
#include<math.h>
int main(){
int a,q,xa,xb,ya,yb,x,y,ka,kb,m,n;
printf("Enter the value of a : ");
scanf("%d",&a);
printf("Enter the value of q : ");
scanf("%d",&q);
printf("Enter the value of xa : ");
scanf("%d",&xa);
printf("Enter the value of xb : ");
scanf("%d",&xb);
x=pow(a,xa);
ya=x%q;
y=pow(a,xb);
yb=y%q;
m=pow(yb,xa);
ka=m%q;
n=pow(ya,xb);
kb=n%q;
printf("Secret key of user A : %d ", ka);
printf("\nSecret key of user B : %d ", kb);
}

/* OUPUT

Enter the value of a : 3
Enter the value of q : 7
Enter the value of xa : 3
Enter the value of xb : 4
Secret key of user A : 1
Secret key of user B : 1
--------------------------------
Process exited after 18.13 seconds with return value 0
Press any key to continue . . .
*/
