#include <stdio.h>
#include <string.h>
#include"chuyendoi.h"
int main(){
	char s[100];
	int i;
	printf("Nhap vao mot chuoi: ");
	scanf("%s",s);
	chuyendoi(s);
	printf("chuoi sau khi chuyen la: %s",s);
	
}
