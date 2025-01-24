 #include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <conio2.h>
#include <conio.h>
#include <windows.h>
#include <string.h>
#include <time.h>
#include <math.h>
#include "TadPilhasMultiplas2.h"

void startaVal(TpPilhaM2 &PM);
void Moldura(int ci,int li,int cf,int lf,int cortxt, int corfundo);
void MontaPilhas(TpPilhaM2 PM);
int contDisco(TpPilhaM2 PM,int NP);


void Moldura(int ci,int li,int cf,int lf,int cortxt, int corfundo){
	
	int i;
	
	textcolor(cortxt);
	textbackground(corfundo);
	gotoxy(ci,li); printf("%c",201);
	gotoxy(cf,li); printf("%c",187);
	gotoxy(ci,lf); printf("%c",200);
	gotoxy(cf,lf); printf("%c",188);
	
	for(i=ci+1;i<cf;i++){
		gotoxy(i,li); printf("%c",205);
		gotoxy(i,lf); printf("%c",205);
		
	}
	
	for(i=li+1;i<lf;i++){
		gotoxy(ci,i); printf("%c",186);
		gotoxy(cf,i); printf("%c",186);
		
	}
	
	textcolor(7);
	textbackground(0);
	
	
}

void MontaPilhas(TpPilhaM2 PM){
	
	int num_disc=0;
										// PILHA 1
	gotoxy(15,15); printf("%c",186); 
	//
	gotoxy(15,14); printf("%c",	206); 
	//
	gotoxy(14,14); printf("%c",	205);
	gotoxy(13,14); printf("%c",	205); 
	gotoxy(12,14); printf("%c",	205);
	gotoxy(11,14); printf("%c",	205); 
	gotoxy(10,14); printf("%c",	205);
	//
	gotoxy(16,14); printf("%c",	205); 
	gotoxy(17,14); printf("%c",	205); 
	gotoxy(18,14); printf("%c",	205); 
	gotoxy(19,14); printf("%c",	205);
	gotoxy(20,14); printf("%c",	205); 
	//
	gotoxy(15,13); printf("%c",	186); 
	gotoxy(15,12); printf("%c",	186); 
	gotoxy(15,11); printf("%c",	186); 
	gotoxy(15,10); printf("%c",	186); 
	gotoxy(15,9); printf("%c",	186); 
	gotoxy(15,8); printf("%c",	186); 
										// PILHA 2
	gotoxy(35,15); printf("%c",186); 
	//
	gotoxy(35,14); printf("%c",	206); 
	//
	gotoxy(34,14); printf("%c",	205);
	gotoxy(33,14); printf("%c",	205); 
	gotoxy(32,14); printf("%c",	205);
	gotoxy(31,14); printf("%c",	205); 
	gotoxy(30,14); printf("%c",	205);
	//
	gotoxy(36,14); printf("%c",	205); 
	gotoxy(37,14); printf("%c",	205); 
	gotoxy(38,14); printf("%c",	205); 
	gotoxy(39,14); printf("%c",	205);
	gotoxy(40,14); printf("%c",	205); 
	//
	gotoxy(35,13); printf("%c",	186); 
	gotoxy(35,12); printf("%c",	186); 
	gotoxy(35,11); printf("%c",	186); 
	gotoxy(35,10); printf("%c",	186); 
	gotoxy(35,9); printf("%c",	186); 
	gotoxy(35,8); printf("%c",	186);
	//
										// PILHA 3
	gotoxy(55,15); printf("%c",186); 
	//
	gotoxy(55,14); printf("%c",	206); 
	//
	gotoxy(54,14); printf("%c",	205);
	gotoxy(53,14); printf("%c",	205); 
	gotoxy(52,14); printf("%c",	205);
	gotoxy(51,14); printf("%c",	205); 
	gotoxy(50,14); printf("%c",	205);
	//
	gotoxy(56,14); printf("%c",	205); 
	gotoxy(57,14); printf("%c",	205); 
	gotoxy(58,14); printf("%c",	205); 
	gotoxy(59,14); printf("%c",	205);
	gotoxy(60,14); printf("%c",	205); 
	//
	gotoxy(55,13); printf("%c",	186); 
	gotoxy(55,12); printf("%c",	186); 
	gotoxy(55,11); printf("%c",	186); 
	gotoxy(55,10); printf("%c",	186); 
	gotoxy(55,9); printf("%c",	186); 
	gotoxy(55,8); printf("%c",	186);
	
	//// Letra Pilhas
	gotoxy(15,20); printf("A"); 
	gotoxy(35,20); printf("B"); 
	gotoxy(55,20); printf("C"); 
	
	
	//Montar Pilha 0 com discos
	if(!vazia_PM2(PM,0)){
		
		num_disc = contDisco(PM,0);
		
		if(num_disc==4){
			
			for(int i=10;i<14;i++){
				gotoxy(15,i);
				printf("%d",POP_PM2(PM,0));
			}		
		}
		else{
			
			if(num_disc==3){
				for(int i=11;i<14;i++){
				gotoxy(15,i);
				printf("%d",POP_PM2(PM,0));
				}	
				
			}
			else{
				
				if(num_disc==2){
					for(int i=12;i<14;i++){
					gotoxy(15,i);
					printf("%d",POP_PM2(PM,0));
					}
				}
				else{
					
					gotoxy(15,13);
					printf("%d",POP_PM2(PM,0));
							
				}
			}
		}			
	}
	
	//Montar Pilha 1 com discos
	if(!vazia_PM2(PM,1)){
		
		num_disc = contDisco(PM,1);
		
		if(num_disc==4){
			
			for(int i=10;i<14;i++){
				gotoxy(35,i);
				printf("%d",POP_PM2(PM,1));
			}			
		}
		else{
			
			if(num_disc==3){
				for(int i=11;i<14;i++){
				gotoxy(35,i);
				printf("%d",POP_PM2(PM,1));
				}					
			}
			else{
				
				if(num_disc==2){
					for(int i=12;i<14;i++){
					gotoxy(35,i);
					printf("%d",POP_PM2(PM,1));
					}
				}
				else{
					
					gotoxy(35,13);
					printf("%d",POP_PM2(PM,1));
							
				}
			}
		}
	}
	//Montar Pilha 2 com discos
	if(!vazia_PM2(PM,2)){
		
		num_disc = contDisco(PM,2);
		
		if(num_disc==4){
			
			for(int i=10;i<14;i++){
				gotoxy(55,i);
				printf("%d",POP_PM2(PM,2));
			}			
		}
		else{
			
			if(num_disc==3){
				for(int i=11;i<14;i++){
				gotoxy(55,i);
				printf("%d",POP_PM2(PM,2));
				}		
			}
			else{
				
				if(num_disc==2){
					for(int i=12;i<14;i++){
					gotoxy(55,i);
					printf("%d",POP_PM2(PM,2));
					}
				}
				else{
					
					gotoxy(55,13);
					printf("%d",POP_PM2(PM,2));
							
				}
			}
		}
	}
	gotoxy(79,24);
	gotoxy(2,21); printf("                                                                              ");
	gotoxy(60,2); printf("Movimentos: ");
}

int contDisco(TpPilhaM2 PM,int NP){
	int i=0;
	while(!vazia_PM2(PM,NP)){
		i++;
		POP_PM2(PM,NP);
	}
	return i;
}

void startaVal(TpPilhaM2 &PM){
	
	push_PM2(PM,0,4);
	push_PM2(PM,0,3);
	push_PM2(PM,0,2);
	push_PM2(PM,0,1);
	
}

int win(TpPilhaM2 PM){
	int i,it,j,jt;
	i = contDisco(PM,1);
	it = contDisco(PM,2);
	j = MostraTopo_PM2(PM,1);
	jt = MostraTopo_PM2(PM,2);
	
	if((i==4&&j==1)||(it==4&&jt==1))
		return 1;
	else
		return 0;
			
}

int main(void){
	
	TpPilhaM2 P;
	int nwin,elemento,elementob,mov=0;
	char p1,p2;
	
	Moldura(1,1,80,25,0,6);
	inicializar_PM2(P,3);
	startaVal(P);
	
	do{
		
		MontaPilhas(P);
		gotoxy(73,2); printf("%d",mov); gotoxy(79,24);
		do{
			p1 = toupper(getch());
		}while(p1!='A'&&p1!='B'&&p1!='C');
					
		if(p1 == 'A'){
			gotoxy(15,21);	printf("%c",16); gotoxy(79,24);
		}
			
		if(p1 == 'B'){
			gotoxy(35,21);	printf("%c",16); gotoxy(79,24);
		}
			
		if(p1 == 'C'){
			gotoxy(55,21);	printf("%c",16); gotoxy(79,24);
		}
			
		
		do{
			p2 = toupper(getch());
		}while((p1 == p2)||(p2!='A'&&p2!='B'&&p2!='C'));		
		
		if(p2 == 'A'){
			gotoxy(15,21);	printf("%c",16); gotoxy(79,24);
		}
			
		if(p2 == 'B'){
			gotoxy(35,21);	printf("%c",16); gotoxy(79,24);
		}
			
		if(p2 == 'C'){
			gotoxy(55,21);	printf("%c",16); gotoxy(79,24);
		}
			
		if(p1=='A' && p2=='B'){
			if(!vazia_PM2(P,0)){
				if(vazia_PM2(P,1)){
					elemento = POP_PM2(P,0);
					push_PM2(P,1,elemento);
					mov++;
				}
				else{
					elemento = MostraTopo_PM2(P,0);
					elementob = MostraTopo_PM2(P,1);
					if(elemento < elementob){
						elemento = POP_PM2(P,0);
						push_PM2(P,1,elemento);
						mov++;
					}
				}
			}	
		}
		if(p1=='A' && p2=='C'){
			if(!vazia_PM2(P,0)){
				if(vazia_PM2(P,2)){
					elemento = POP_PM2(P,0);
					push_PM2(P,2,elemento);
					mov++;
				}
				else{
					elemento = MostraTopo_PM2(P,0);
					elementob = MostraTopo_PM2(P,2);
					if(elemento < elementob){
						elemento = POP_PM2(P,0);
						push_PM2(P,2,elemento);
						mov++;
					}
				}
			}	
		}
		if(p1=='B' && p2=='A'){
			if(!vazia_PM2(P,1)){
				if(vazia_PM2(P,0)){
					elemento = POP_PM2(P,1);
					push_PM2(P,0,elemento);
					mov++;
				}
				else{
					elemento = MostraTopo_PM2(P,1);
					elementob = MostraTopo_PM2(P,0);
					if(elemento < elementob){
						elemento = POP_PM2(P,1);
						push_PM2(P,0,elemento);
						mov++;
					}
				}
			}	
		}
		if(p1=='B' && p2=='C'){
			if(!vazia_PM2(P,1)){
				if(vazia_PM2(P,2)){
					elemento = POP_PM2(P,1);
					push_PM2(P,2,elemento);
					mov++;
				}
				else{
					elemento = MostraTopo_PM2(P,1);
					elementob = MostraTopo_PM2(P,2);
					if(elemento < elementob){
						elemento = POP_PM2(P,1);
						push_PM2(P,2,elemento);
						mov++;
					}
				}
			}	
		}
		if(p1=='C' && p2=='A'){
			if(!vazia_PM2(P,2)){
				if(vazia_PM2(P,0)){
					elemento = POP_PM2(P,2);
					push_PM2(P,0,elemento);
					mov++;
				}
				else{
					elemento = MostraTopo_PM2(P,2);
					elementob = MostraTopo_PM2(P,0);
					if(elemento < elementob){
						elemento = POP_PM2(P,2);
						push_PM2(P,0,elemento);
						mov++;
					}
				}
			}	
		}
		if(p1=='C' && p2=='B'){
			if(!vazia_PM2(P,2)){
				if(vazia_PM2(P,1)){
					elemento = POP_PM2(P,2);
					push_PM2(P,1,elemento);
					mov++;
				}
				else{
					elemento = MostraTopo_PM2(P,2);
					elementob = MostraTopo_PM2(P,1);
					if(elemento < elementob){
						elemento = POP_PM2(P,2);
						push_PM2(P,1,elemento);
						mov++;
					}
				}
			}	
		}
							
		nwin = win(P);
	}while(nwin!=1);
	
	MontaPilhas(P);
	gotoxy(60,4); printf("Parabens!");
	gotoxy(60,5); printf("%d movimentos",mov);
	gotoxy(57,6); printf("%c ENTER[sair]",16);
	getch();
		
}

