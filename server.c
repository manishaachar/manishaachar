#include<stdio.h>
#include<fcntl.h>
#include<arpa/inet.h>
#include<unistd.h>
int main()
{
char fname[200],buffer[1024];
int s,n,source,file;
struct sockaddr_in address;
address.sin_family=AF_INET;
address.sin_port=htons(15000);
address.sin_addr.s_addr=INADDR_ANY;
printf("Waiting request:");
s=socket(AF_INET,SOCK_STREAM,0);
bind(s,(struct sockaddr*)& address,sizeof(address));
listen(s,3);
source=accept(s,(struct sockaddr*)NULL,NULL);
recv(source,fname,sizeof(fname),0);
printf("Request for file");
file=open(fname,O_RDONLY);
{
if(file<0)
{
printf("Not found");
send(source,"file not found",20,0);
}
else
{
while((n=read(file,buffer,sizeof(buffer)))>0)
send(source,buffer,n,0);
}
close(file);

return 0;
}
}
