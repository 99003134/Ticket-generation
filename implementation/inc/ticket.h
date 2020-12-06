#ifndef TICKET_H_INCLUDED
#define TICKET_H_INCLUDED

int first=5,second=5,third=5;
struct node
{
int age;
int ticketno;
char classofseat[7];
char name[100];
char dest[4];
}s;
void booking();
void printticket();
int availablecheck();



#endif // TICKET_H_INCLUDED

