#include<stdio.h>
#include<stdlib.h> 
                              // Declaration de structure //
    struct point {

        char          name[10];
        float         note;
        struct point *next;

    };typedef struct point Point;

                        // changer deux chaine de caractere //

                char change(char T1[],char T2[]){
                    char NM[10];
                        for (int i = 0; i < 9; i++){

                            NM[i] = T1[i];
                            T1[i] = T2[i];
                            T2[i] = NM[i];

                        }
                }
                        // fontion supprimer un element de tableaux //

                void supprimer(Point **debut , float not){
                    Point *temp=*debut;
                    if (temp){
                        if(temp->note == not){
                            *debut = temp -> next;
                        }
                        else{
                            while (temp->next){
                                if(temp->next->note != not){
                                    temp = temp->next;
                                    }
                                else{
                                    temp->next = temp->next->next;
                                    }
                                }
                            }
                        }
                    }

                                // Trie un tableaux //
                                
    Point * Trie(Point *debut){

                Point   *temp;  //    Depart    // 
                Point   *p;     //   selection  //
                int      PR;    // pour Exchange//
                
                if (debut != NULL){
                    for (temp = debut; temp->next != NULL ; temp = temp->next){
                        for ( p = temp->next; p != NULL; p = p-> next){
                            if (p->note > temp->note){
                            
                                PR          = p->note;
                                p->note     = temp->note;
                                temp->note  = PR;

                                // changer les nome //

                                change(p->name,temp->name);
                            }
                        }
                    }
                }
            }

                                    // Fonction main //
        int main(){
            
            FILE *fp ;
            fp = fopen("Fist Try.txt","w");
            
            int     n;      //  nombre d'etudiant //
            Point  *start;  //        debut       //
            Point  *head;   //   tete de liste    //
            Point  *T;      // pointure de tableau//
            Point  *c;      //    pour affichage  //
            float   a;      //  pour la supprimer //
            

                                  // Allocation Dynamique // 

            T = (Point*)malloc(sizeof(Point));

                                      //Debut De code //

                    printf("Donnez la nombre d'etudiant : ");
                    scanf("%d",&n);

                    printf("\n********************************\n");

                    printf("Donnez le nom d'etudiant  [1] : ");
                    scanf("%s",(T->name));

                    printf("Donnez la note d'etudiant [1] : ");
                    scanf("%f",&(T->note));

                    T -> next = NULL; 
                    head      = T;
                    start     = T;
                   
                                    // Ajouter un nouveau element //

            for (int i = 0; i < n-1; i++){

                    T = (Point*)malloc(sizeof(Point));

                    printf("Donnez le nom d'etudiant  [%d] : ",i+2);

                    scanf("%s",(T->name));

                    printf("Donnez la note d'etudiant [%d] : ",i+2);
                    
                    scanf("%f",&(T->note));

            T -> next      = NULL;
            start -> next  = T;
            start = start -> next;

            }
                                // Trie la liste chaine //
            Trie(head);
             c         = head;

                                // Affichage des element dee liste //
                    
                printf("\n********************************\n");
                while (c){

                    printf("%s             ",c->name);
                    printf(":");
                    printf("             %.2f\n",c->note);     
                    c = c->next;
                }
                printf("\n********************************\n");

                printf("supprimer un etudiant ? : ");
                scanf("%f",&a);
                if(a==1){

                    printf("donnez la note : ");
                    scanf("%f",&a);
                                        // supprimer un element //
                    supprimer(&head , a);
