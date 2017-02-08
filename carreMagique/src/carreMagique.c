/*
 ============================================================================
 Name        : carreMagique.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

#define TAILLE 7




    typedef struct Case
    {
        int x;
        int y;
    }
    Case;

    void AfficheCarre(int carre [TAILLE][TAILLE]);

int main()
{
    int i,j;

    int carre[TAILLE][TAILLE];

        Case pos;


            for (i=0;i<TAILLE;i++){
                    for(j=0;j<TAILLE;j++){
            carre[i][j]=0;
        }
    }


    for (i=0;i<(TAILLE*TAILLE);i++){


        if (i==0){
            pos.x=(TAILLE/2)-1;
            pos.y=(TAILLE/2);

            carre[pos.x][pos.y]=i+1;

        }else{

            if (pos.x-1<0){
                pos.x=TAILLE-1;

            }else{
                pos.x=pos.x-1;
            }


            if (pos.y+1==TAILLE){
                pos.y=0;
            }else{
                pos.y=pos.y+1;
            }


            if (carre[pos.x][pos.y]==0){
                carre[pos.x][pos.y]=i+1;
            }else{

                do{

                    if (pos.x-1<0){
                        pos.x=TAILLE-1;
                    }else{
                        pos.x=pos.x-1;
                    }

                    if (pos.y-1<0){
                        pos.y=TAILLE-1;
                    }else{
                        pos.y=pos.y-1;
                    }

                }while(carre[pos.x][pos.y]!=0);
                    carre[pos.x][pos.y]=i+1;
            }
        }
    }

        printf("\n");
        AfficheCarre(carre);
        printf("\n");

    return 0;
}

void AfficheCarre(carre[TAILLE][TAILLE])
{
    int i,j;
     for (i=0;i<TAILLE;i++){
           for(j=0;j<TAILLE;j++){
               printf(" %d",carre[i][j]);
           }
}
}

