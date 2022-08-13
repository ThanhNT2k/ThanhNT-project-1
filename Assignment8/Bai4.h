int boiChung(int a, int b){
	for(int bc=b;bc<=a*b;bc++){
			if(bc%a==0 && bc%b==0){
				return bc;
		}
	}
}
