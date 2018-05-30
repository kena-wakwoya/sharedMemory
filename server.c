//server.c
#include "readWrite.h"
#define SHARED_MEMORY_SIZE    127
int main(){
    key_t key;
    buffer_message *m;
    char ans='y';
    key = 9876;
    if ((shmid = shmget(key, SHARED_MEMORY_SIZE, IPC_CREAT | 0666)) < 0)
            {
                    perror("shmget");
                    exit(1);
            }
            printf("\nShared Memory Id = %d\n",shmid);
            if ((m = shmat(shmid, NULL, 0)) == (buffer_message *) -1)
            {       perror("shmat");
                    exit(1);
            }

        printf("\n m= %d\n",m);
        while(ans=='y')
        {
                sleep(1);
                printf("Enter your choice");
                scanf("%c",&ans);
                getchar();
        }
        return 0;
}