#include <iostream>

using namespace std;

int main(){
	int t,n,i,rate,x=0,y=0;
	int a=0,b=0;
	cin >> t;
	while((t--)){
	    cin >> n;
	    int c[n];
	    for(i=0;i<n;i++){
	    	cin >> c[i];
		}
		cin >> rate;
		x = 0;
		y = n -1;
		while(true){
			if(x > y){
				break;
			}
			else if(x == y){
				
			}
			else{
				if(c[x]>0){
					if( 0 <= c[x] - rate){
						c[x] = c[x] - rate;
					}else{
						
					}
				}else{
					a++;
				}
			}
		}
//		cout << "N : "<<n<<endl;
//	    cout << "rate : "<<rate<<endl;
//		for(i=0;i<n;i++){
//		    cout << i << " : " << c[i] << endl;
//	    }
	}
	
	
	
}
