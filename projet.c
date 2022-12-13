#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void remplir_tab(int n, char *nom, char *poste,int *eval)
{		
int i,x;
	
	
	

	
	for (i=0; i<n; i++)
	{
	printf("Veuillez inserer le nom du joueur %d \n",i+1);
	 scanf("%s",nom+i);
	 
	 printf("choisissez le Poste du joueur %d \n 1 : Gardien\n 2 : Défenseur\n 3 : Milieu\n 4 : Attanquant \n",i+1);
	 scanf("%d", &x);
	   switch (x)
	 {   case 1 :
		*(poste+i)= "Gardien";
		break;
	    case 2 :
		*(poste+i)= "Défenseur";
		break;
		case 3 :
		*(poste+i)= "Milieu";
		break;
		case 4 :
		*(poste+i)= "Attanquant";
		break;	
		default : break;
	  }
	
	 
	 printf("Veuillez inserer l'evaluation du joueur %d \n",i+1);
	 scanf("%d",eval+i);
	} 
}

void affichage(int n, char* nom , char* poste, int* eval)
{int i;
for( i=0;i<n; i++)
{
	printf("%s %s %d",nom,poste,eval);
//printf("Nom : %s , Poste : %s , Evaluation : %d \n",nom+i,poste+i,eval+i);


}

}

int main(int argc, char *argv[]) {
	
	char *nom,*poste;
	int *eval,n;
	printf("Veuillez inserer ne nombre de joueurs que vous voulez saisir \n");
	scanf("%d",&n);
	nom= (char*) malloc(sizeof(char)* n);
	poste= (char*) malloc(sizeof(char)* n);
	eval= (int*) malloc(sizeof(int)* n);
	remplir_tab(n,nom,poste,eval);
	printf("%s",poste[1]);
	printf("%d",eval[1]);
//	affichage (n,nom,poste,eval);
	
	return 0;
}
