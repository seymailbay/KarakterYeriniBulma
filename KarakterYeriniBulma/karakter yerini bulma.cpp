// m harfi hangi adreste sakl� ?
#include <iostream>
using namespace std;
char *ara(char *p, char kr){
	while (*p != '\0'){
		if(*p == kr){
			return p;
		}
		p++;
	}
	
}
int main (){
	char metin[] = "Bilisim Dunyasi\0";
char *pr = ara(metin,'m');
if(pr){
	printf("Karakteriniz %x konumunda bulundu: ", pr);

}
	else{
		printf("karakteriniz bulunamad�");
	}
}

