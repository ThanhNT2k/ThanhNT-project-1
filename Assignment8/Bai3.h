int uocChung(int a, int b){
	for(int uc=a;uc>1;uc--){
		if(a%uc==0 && b%uc==0){
			return uc;
		}
	}
}
