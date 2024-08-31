#include <stdio.h>
#include <math.h>
#include <string.h>
/*
Tách các chữ trong xâu
Lưu các từ có trong s1 mà ko có trong s2 ( chỉ lưu 1 lần)
Sắp xếp theo thứ tự từ điển
*/
int main() {
	char a[110], b[110];
	gets(a);
	gets(b);
	char mot[25][25], hai[25][25];
	int k=0;
	int h=0;
	char *toka = strtok(a," ");
	while(toka!=NULL) {
		strcpy(mot[k++], toka);
		toka = strtok( NULL," ");
	}
	char *tokb = strtok(b," ");
	while(tokb!=NULL) {
		strcpy(hai[h++], tokb);
		tokb = strtok( NULL," ");
	}
	char res[25][25];
	int p=0;
	for(int i=0; i<k; i++) {
		int check=0;
		for(int j=0; j<h; j++) {
			if(strcmp(mot[i],hai[j])==0) check++;
		}
		if(!check) {
			int ck2=0;
			for(int f=0; f<p; f++) {
				if(strcmp(mot[i],res[f])==0) ck2++;
			}
			if(!ck2) strcpy(res[p++], mot[i]);
		}
	}
	for(int i=0; i<p; i++) {
		for(int j=0; j<p; j++) {
			if(strcmp(res[i],res[j])<0) {
				char tmp[30];
				strcpy(tmp,res[i]);
				strcpy(res[i],res[j]);
				strcpy(res[j],tmp);
			}
		}
	}
	for(int i=0; i<p; i++) printf("%s ",res[i]);
}