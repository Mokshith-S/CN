#include<stdio.h>
void main()
{
int incoming, outgoing, buff_size, n, store=0;
printf("Enter the value of n:");
scanf("%d",&n);
printf("Enter outgoing and buffer size:");
scanf("%d%d",&outgoing,&buff_size);
while(n!=0)
{
printf("Incoming packet:");
scanf("%d",&incoming);
if(incoming <= (buff_size-store))
store += incoming;
else
{
printf("Packet dropped is: %d\n",incoming-(buff_size-store));
store = buff_size;
}
printf("Buffer size: %d out of %d \n",store,buff_size);

store = store - outgoing;


printf("After outgoing: %d packets left in buffer %d\n",store,buff_size);

n--;
}
}
