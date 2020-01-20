#include <stdio.h>
#include <stdlib.h>

int rand_a_b(int a, int b){
			return rand()%(b-a) +a;
}



int main(){
	float PVM=100.0;
	int action=0;
	float PVP=100.0;
	int actionm=0;
	float CA= 0.0;
	int tour=100;
	int PM= 100;
 	int poison = 0;
 	int poisonm = 0;
 	int PMM = 70;

	for (tour = 100 ; tour >= 0 ; tour--){
		printf("Choisir un nombre entre un, deux, trois ou quatre\n");
		scanf("%d", &action);
		
		
		int actionm = rand_a_b(1,4);


		if (poison == 1 && PM > 0){
			PVM -= 4;
			printf("le monstre perd 4 PV a cause du poison\n");
		}

		if (poisonm == 1 && PMM > 0{
			PVP -= 3;
			printf("Vous perdez 3 PV a cause du poison\n");
		}

		if (PM <= 0 && action == 3){
			printf("Vous n'avez plus de PM\n");
		}	

		if (PM <= 0 && action == 4){
			printf("Vous n'avez plus de PM\n");
		}
		
		if (action == 1){

			if (actionm == 1){
				(PVM = PVM -20.0);
				printf("Le joueur attaque enleve 20 point de vie \n");
				printf("Point de vie du monstre = %f \n",PVM);		
				(CA = 10);
				PVP = PVP-CA;
				printf("Le monstre contre-attaque enleve 10 point de vie \n");
				printf("Point de vie du joueur =%f \n",PVP);
			}

			else if (actionm==2){
				(PVM = PVM -5.0);
				printf("Le monstre se protege \n");
				printf("Le joueur attaque enleve 5 point de vie \n");
				printf("Point de vie du monstre = %f \n",PVM);

			}

			else if (actionm == 3){
				PMM -= 25;
				(PVM = PVM -20.0);
				poisonm = 1;
				printf("Le joueur attaque enleve 20 point de vie \n");
				printf("Point de vie du monstre = %f \n",PVM);
				printf("le monstre lance le sort poison \n");
			}

		}


		else if (action == 2){

			if (actionm == 1){		
				(CA = 2.5);
				PVP = PVP-CA;
				printf("Le monstre attaque, mais n'enleve que 2.5 point de vie \n");
				printf("Point de vie du joueur =%f \n",PVP);
			}
			
			else if (actionm == 2){

				printf("Vous vous protegez tout les deux, aucun de vous ne perds de vie\n");
			}

			else if (actionm == 3){
				PMM -= 25;
				poisonm = 1;
				printf("Vous vous protegez\n");
				printf("le monstre lance le sort poison \n");
			}

		}
		
		else if (action == 3 && PM>0){
			
			PM -= 50;
			poison = 1;
			printf("vous avez perdu 50 PM\n");

			if (actionm == 1){		
				(CA = 10);
				PVP = PVP-CA;
				printf("Vous avez lancé le sort poison\n");
				printf("Le monstre contre-attaque et enleve 10 points de vie \n");
				printf("Point de vie du joueur =%f \n",PVP);
			}
			
			else if (actionm == 2){
				printf("Vous avez lancé le sort poison\n");
				printf("Le monstre se protege mais il est empoisone\n");
			}

			else if (actionm == 3){
				PMM -= 25;
				poisonm = 1;
				printf("Vous avez lancé le sort poison\n");
				printf("Point de vie du monstre = %f \n",PVM);
				printf("le monstre lance le sort poison \n");

			}

		}

		else if (action == 4 && PM>0){
			
			PM -= 30;
			poison = 0;
			printf("vous avez perdu 30 PM\n");

			if (actionm == 1){		
				(CA = 10);
				PVP = PVP-CA;
				printf("Vous avez lance le sort Antidote\n");
				printf("Le monstre attaque et enleve 10 points de vie \n");
				printf("Point de vie du joueur =%f \n",PVP);
			}
			
			else if (actionm == 2){
				printf("Vous avez lancé le sort Antidote\n");
				printf("Le monstre se protege\n");
			}

			else if (actionm == 3){
				PMM -= 25;
				poisonm = 1;
				printf("Vous avez lancé le sort Antidote\n");
				printf("Le monstre lance le sort poison \n");
				printf("C'est inefficace, vous vous etes soigne\n");

			}
		printf("Vous ne ressentez plus les effets du poison\n");

		}

		if (PM >= 100){
			PM += 1;
		}

		if (PVM <= 0){
			printf("le monstre est mort \n");
			break;
		}

		if (PVP <= 0){
			printf("vous etes mort \n");
			break;
		}
	}
	return 0;	
}