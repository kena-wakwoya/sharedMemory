
#include "readWrite.h"
#include <stdlib.h>
#include <sys/ipc.h>
#include <sys/shm.h>
#include <stdio.h>
#define SHARED_MEMORY_SIZE    127


int main(){
    int shmid;
    key_t key;
    buffer_message *buffer;
    key = 9876;
    if ((shmid = shmget(key, SHARED_MEMORY_SIZE, 0666)) < 0)
        {
                perror("shmget");
                exit(1);
        }
        printf("\nShared Memory Id = %d\n",shmid);
        if ((buffer = shmat(shmid, NULL, 0)) == (buffer_message *) -1)
        {       perror("shmat");
                exit(1);
        }
      printf("\n rbuf= %d\n",buffer);
      return 0;
}