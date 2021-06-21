#include <stdio.h>

int main(){
long long int d,s,t;
	
	scanf("%lld %lld %lld", &d, &s, &t);
	
if (d>s && d>t && t>s){
	printf("Daging\nTelur\nSayur\n");
}
else if (d>s && d>t&& s>t){
	printf("Daging\nSayur\nTelur\n");
}
else if (s>d && s>t && d>t){
	printf("Sayur\nDaging\nTelur\n");
}
else if (s>d && s>t && t>d){
	printf("Sayur\nTelur\nDaging\n");
}

else if(t>d && t>s && d>s){
	printf("Telur\nDaging\nSayur\n");
}

else if (t>d && t>s && s>d){
	printf("Telur\nSayur\nDaging\n");
}
	return 0;
}
