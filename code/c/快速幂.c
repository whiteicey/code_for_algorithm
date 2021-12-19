

int powl(int x, int n){
	if(n == 0) return 1;
	if(n == 1) return x;
	if(n%2 == 0) return powl(x*x,n/2) ;
	if(n%2 == 1) return powl(x*x,n/2)*x ;
}
