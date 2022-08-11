#include <stdio.h>
bool ktSNT(int a){
	for(int i=2;i<=a/2;i++){
		return a%i==0;
	}
}
