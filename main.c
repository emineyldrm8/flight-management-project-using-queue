#include <stdio.h>
#include <stdlib.h>

typedef struct inisNode {
    int oncelik_id;
    int ucak_id;
    int inis_saati;
    struct inisNode* next;
}InisNode;


InisNode* newInis (int oncelik_id, int ucak_id, int inis_saati){
    InisNode* temp = (InisNode*)malloc(sizeof(InisNode));
    temp->oncelik_id = oncelik_id;
    temp->ucak_id = ucak_id;
    temp->inis_saati = inis_saati;
    temp->next = NULL;
    return temp;
}

int inisPeek(InisNode** head){
    return (*head)->ucak_id;
}

void pop(InisNode** head)
{
    InisNode* temp = *head;
    (*head) = (*head)->next;
    free(temp);
}


void push(InisNode** head, int oncelik_id, int ucak_id, int inis_saati)
{
    InisNode* start = (*head);

    InisNode* temp = newInis(oncelik_id, ucak_id, inis_saati);

    if ((*head)->inis_saati > inis_saati) {
        printf("Inis Izniniz Onaylanmistir.\n");
        temp->next = *head;
        (*head) = temp;
    }
    else if((*head)->inis_saati == inis_saati){

        if((*head)->oncelik_id > oncelik_id){
            printf("Inis Izniniz Onaylanmistir.\n");
            printf("Inis Izniniz %d Id Numarasina Sahip Ucak Onceliginden 1 Saat Ertelenmistir.\n", ucak_id);
            temp->next = *head;
            (*head) = temp;
        }else{
            while (start->next != NULL &&
                   start->next->inis_saati == inis_saati &&
                   start->next->oncelik_id < oncelik_id) {
                start = start->next;
            }
            printf("Inis Izniniz Onaylanmistir.\n");
            temp->next = start->next;
            start->next = temp;
        }
    }
    else {
        while (start->next != NULL &&
               start->next->inis_saati < inis_saati) {
            start = start->next;
        }
        if(start->next != NULL){
            if(start->next->inis_saati > inis_saati || start->next->oncelik_id > oncelik_id){
                temp->next = start->next;
                start->next = temp;
            }else{
                while(start->next != NULL &&
                      start->next->oncelik_id < oncelik_id){
                    start = start->next;
                }
                temp->next = start->next;
                start->next = temp;
            }

        }else{
            temp->next = start->next;
            start->next = temp;
        }
        printf("Inis Izniniz Onaylanmistir.\n");
    }
}

int isEmpty(InisNode** head)
{
    return (*head) == NULL;
}


int main() {

    FILE *file = fopen("input.txt", "r");
    int oncelik_id = 0, ucak_id = 0, inis_saati = 0;
    char d[50];
    fscanf(file, "%s",d);
    fscanf(file, "%s",d);
    fscanf(file, "%s",d);
    fscanf(file, "%d", &oncelik_id);
    fscanf(file, "%d", &ucak_id);
    fscanf(file, "%d", &inis_saati);
    InisNode* pq = newInis(oncelik_id, ucak_id, inis_saati);
    while (!feof(file))
    {
        fscanf(file, "%d", &oncelik_id);
        fscanf(file, "%d", &ucak_id);
        fscanf(file, "%d", &inis_saati);
        push(&pq, oncelik_id, ucak_id, inis_saati);
    }
    fclose (file);
    while (!isEmpty(&pq)) {
        printf("%d ", inisPeek(&pq));
        pop(&pq);
    }
    return 0;
}
