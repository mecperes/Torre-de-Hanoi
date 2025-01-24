#define maxpilha 14

struct TpPilhaM2{
	
	int bases[maxpilha], topos[maxpilha];
	int pilhas[maxpilha];
	
};


void inicializar_PM2(TpPilhaM2 &PM,int QTDE){
	
	int val,i=0,start = -1;
	
	val = maxpilha/QTDE;
		
	while(i<=QTDE){
		
		if(i==QTDE)
			PM.bases[i] = start+1;	//da pra por o topo aqui, mas nem vai usar de acordo com ele	
		else{
			PM.bases[i] = start+1;
			PM.topos[i] = start;
			start+=val;		
		}
		//printf("%d\n",PM.topos[i]);
		i++;
	}		
}

void push_PM2(TpPilhaM2 &PM,int NP,int elemento){
	PM.pilhas[++PM.topos[NP]] = elemento; // PILHAS 012 -> NP ------- PILHAS 123 -> NP-1
	//printf("\n%d",PM.pilhas[PM.topos[NP]]);
	//printf("\n%d",elemento);
}

char cheia_PM2(TpPilhaM2 PM,int NP){
	return PM.topos[NP]+1==PM.bases[NP+1];	
}

char vazia_PM2(TpPilhaM2 PM,int NP){
	//return PM.pilhas[PM.bases[NP]]-1==PM.pilhas[PM.topos[NP]]; fiz bosta
	// return PM.topos[NP] < PM.bases[NP]
	
	return PM.topos[NP]==PM.bases[NP]-1; //certo
}

int POP_PM2(TpPilhaM2 &PM, int NP){
	return PM.pilhas[PM.topos[NP]--];
}

int MostraTopo_PM2(TpPilhaM2 PM,int NP){
	return PM.pilhas[PM.topos[NP]];
}

void Exibe_PM2(TpPilhaM2 PM,int NP){
	while(!vazia_PM2(PM,NP)){
		printf("\n%d",POP_PM2(PM,NP));
	}					
}




