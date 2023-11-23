////EX3:Ecrire un programme qui lit deux chaînes de caractères CH1 et CH2 et qui copie la première moitie de CH1 et la premiere moitie de CH2 dans une troisieme chaine CH3. Afficher le resultat.

#include<stdio.h>
#include<string.h>
int main(){
	// question a) utilisation des fonctions speciale de string
	
	char CH1[100],CH2[100];
	char CH3[100];
	
	
	//lire 2 chaines CH1 et CH2
	printf("saisir une chaine CH1:");
	gets(CH1);
	printf("\n saisir une chaine CH2:");
	gets(CH2);
	
	//copier la premiere moitie de CH1 dans CH3
	strncpy (CH3,CH1,strlen(CH1)/2);
	
	//ajouter la premiere moitie de CH2 dans CH3
	strncat (CH3,CH2,strlen(CH2)/2);
	
	//afficher la chaine CH3
	printf("\n CH3:%s",CH3);

	return 0;
}
