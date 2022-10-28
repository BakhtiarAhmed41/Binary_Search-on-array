#include <iostream>
using namespace std;

int main(){
	int item = 12;   //element to search
	
  int loc;
    int A[] = {2, 4, 6, 8, 10, 12, 14};      //array
    int n = sizeof(A)/sizeof(int);
    
    int s = 0;
    int e= n-1;
    int mid= (s+e)/2;
    
    while(s<=e && A[mid]!= item){
    	if(item<A[mid]){
    		e = mid -1;
		}
		else{
			s = mid+1;
		}
		mid = (s + e)/2;
	}
	
	if (A[mid]==item){ 
		loc = mid;
	}
	else{
		loc = -1;
	}
	cout<<loc;
}


