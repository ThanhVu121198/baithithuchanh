
void chuyendoi(char s[]){
	int i;
	for(i=0;i<strlen(s);i++){
		if(s[i]>=97&& s[i]<=122){
			s[i]-=32;
		}
	}
}
