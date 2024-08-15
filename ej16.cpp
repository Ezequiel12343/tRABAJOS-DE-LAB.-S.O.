#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main(){
    
    srand(time(NULL));
    
    int random;
    random= rand()%11;
	
	int num;
	int vida = 3;
	char des;
	
	while(vida != 0){
	
	
	cout<<"oprtunidades: "<<vida<<endl;
    cout<<"adivina el numero secreto(del 0 y 10)"<<endl;
    cin>>num;
    
    if(num >= 11){
    	cout<<endl;
		cout<<"error,solo se permite del 0 al 10 "<<endl;
		cout<<endl;
	}
	
    else if(num == random){
    	cout<<endl;
    	cout<<"-------------------------"<<endl;
		cout<<"ganaste, el numero era "<<random<<endl;
		cout<<"-------------------------"<<endl;
		vida=0;
		cout<<endl;
		
		cin.get();
		cin.get();
	}
	
    else if(num != random){
    	vida=vida-1;
    	cout<<endl;
    	cout<<"------------------------"<<endl;
    	cout<<"fallaste, el numero era "<<random<<endl; 
    	cout<<"------------------------"<<endl;
    	cout<<endl;
	}
	
	if(vida == 0){
		
		cout<<"fin del juego , ¿deseas continuar? (a para continuar)?"<<endl;
	    cin>>des;
	    
	 if(des != 'a'){
	 	cout<<endl;
	 	cout<<"hasta la proxima."<<endl;
	 }
	 
	 if(des == 'a'){
	 	vida=3;
	 	cout<<endl;
	 }
	}
	
}
	
}
