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
				if(a>b){
					a++;
					break;
				}else{
					b++;
					break;
				}
				
			}
			else{
				if(c[x]>0){
					if( 0 < c[x] - rate){
						c[x] = c[x] - rate;
					}else{
						c[x+1] = c[x+1] - (rate - c[x]);
						x++;
						a++;
					}
				}else{
					a++;
					x++;
				}
				
				if(c[y]>0){
					if( 0 < c[y] - 1){
						c[y] = c[y] - 1;
					}else{
						c[y] = c[y] - 1;
						y--;
						b++;
					}
				}else{
					b++;
					y--;
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
