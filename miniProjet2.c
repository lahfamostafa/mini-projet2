#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char mot[7]={"mostafa"};
    char motCache[7]={"_______"};
    char chiffre;
    int i;
    int compteur,compteur1=4;

    for ( i=0 ; i < strlen(motCache) ; i++)
        printf("%c",motCache[i]);
    do{

    compteur=0;
    printf ("\nEntrer une lettre : ");
    scanf(" %c",&chiffre);


    for(i=0 ; i < strlen(motCache) ; i++){
        if(chiffre==mot[i]){
            motCache[i]=chiffre;
            compteur++;
        }
    }

    if(compteur>0){
        printf("\nBravo ! Lettre trouvee.      ");
        for ( i=0 ; i < strlen(motCache) ; i++)
            printf("%c",motCache[i]);
        printf("\nle reste de repitition : %d\n",compteur1);

    }else{
        printf("\nOups ! Lettre non presente.  ");
        for ( i=0 ; i < strlen(motCache) ; i++)
            printf("%c",motCache[i]);
            compteur1--;
        printf("\nle reste de repitition : %d \n",compteur1);

    }



    if(compteur1==0){
        printf("\n\n\n\n  << Game Over >>\n\n\n\n");
        break;
    }

    }while(memcmp(mot,motCache,sizeof(mot)) != 0 );

    if(compteur1!=0){
        printf("\n\n\n\nExcelent ! le reste : %d\n\n\n\n",compteur1);
    }

    return 0;
}
