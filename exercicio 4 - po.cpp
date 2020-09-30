#include<iostream>
using namespace std;

int main(){
	int vetor[10], i, maior, menor;
	maior = 0;
	menor = 0;
	float soma = 0;
	
	
	for(i=0; i<10; i++){
		cout<<"Digite um numero:\n";
		cin>>vetor[i];
		soma=soma+vetor[i];
		if(i==0){
		maior=vetor[i];	
		menor=vetor[i];
		}
		if(vetor[i]>maior){
			maior=vetor[i];
		}else if(vetor[i]<menor){
			menor=vetor[i];
		}
	}
	
	cout<<"O menor numero e:"<<menor<<"\n";
	cout<<"O maior numero e:"<<maior<<"\n";
	cout<<"E a media e:"<<soma/10<<"\n";
}
