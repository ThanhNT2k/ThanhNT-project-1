int tongChuSo(int n){
	int a;
	int s=0;
	for(;n!=0;){
		a=n%10;
		s+=a;
		n/=10;
	}
	return s;
}
