/* 
* @Author: Julian D. Quitian
* @Date:   2016-01-19 11:16:13
* @Last Modified by:   Julian D. Quitian
* @Last Modified time: 2016-01-19 16:24:57
*/

/*
/ Airport w/ Linked Lists v1.0.0
*/
#include <stdio.h>

struct airport
{	
	char *name;
	char *city;
	int numTerminals;

	struct airport *next;
};

struct airport *newAirport(struct airport *t, char *newName, char *newCity, int newTerNum);
void setName(struct airport *t, char *newName);
void setTerminals(struct airport *t, int newTerNum);
void toString(struct airport *t);
int main() {
	struct airport *head = newAirport(head, "O'Hare", "Chicago", 8);
	struct airport *a2 = newAirport(a2, "MCO", "Orlando", 4);
	insertAirport(head, a2, NULL);

	toString(head);
    return 0;
}
struct airport *newAirport(struct airport *t, char *newName, char *newCity, int newTerNum){
	t = NULL;
	t = (struct airport *) malloc(sizeof(struct airport));
	t->name = newName;
	t->city = newCity;
	t->numTerminals = newTerNum;
	return t;
}
void insertAirport(struct airport *before, struct airport *t, struct airport *after){
	before->next = t;
	t->next = after;
}
void removeAirport(struct airport *before, struct airport *t, struct airport *after){
	before->next = after;
	t = NULL;
}
void setName(struct airport *t, char *newName){
	t->name = newName;
}
void setCity(struct airport *t, char *newCity){
	t->city = newCity;
}
void setTerminals(struct airport *t, int newTerNum){
	t->numTerminals = newTerNum;
}
void toString(struct airport *t){
	if(t == NULL)
		printf("%s\n", "No leading airport found.");
	else
		printf("Name: %s Airport\tCity: %s\tTerminals: %d\n", (*t).name, (*t).city, (*t).numTerminals);
}