#include<iostream>
using namespace std;
void permuation(char in[],int i){
	// base case
	if(in[i]=='\0'){
		cout<<in<<endl;
		return;
	}


	// recursive case
	for(int j=i;in[j]!='\0';j++){
		swap(in[i],in[j]);
		permuation(in,i+1);
		swap(in[i],in[j]); //backtracking

	}

	// swap(in[i],in[j]);
	

}
int main(){
	char in[100];
	cin>>in;
	permuation(in,0);


	return 0;
}