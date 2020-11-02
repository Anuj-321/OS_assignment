#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>

int count = 0;
int main()
{
    pid_t id;
    printf("before fork\n");
    id = fork ();
    if(0==id)
    {
        printf("count in child %d",count);
    }
    else
   {
       count++;
       printf("count in parent %d", count);
   } 
    //printf("after fork id\t pid\t ppid\t: %d %d %d\n",id,getpid(),getppid());
    return 0;
}