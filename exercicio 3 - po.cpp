#include<iostream>
using namespace std;

int main(){
	int matriz[2][2];
	int i, j;
	
	for(i=0; i<2; i++){
		for(j=0; j<2; j++){
			cout<<"Digite um numero \n";
			cin>> matriz[i][j];
		
		}
	}
	for(i=0; i<2; i++){
		for(j=0; j<2; j++){
			cout<<matriz[i][j];
			cout<<" ";
		}
	}
}
