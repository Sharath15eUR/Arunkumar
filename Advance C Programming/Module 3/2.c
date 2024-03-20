#include <pthread.h>
#include <stdio.h>
#include <unistd.h>
int cnt = 0;

pthread_mutex_t lock;

void *func(void *arg){
    pthread_mutex_lock(&lock);
    cnt += 1;
    printf("Job %d is started!\n", cnt);
    for(int i = 0; i<1000; i++);
    printf("Job %d is finished!\n", cnt);
    pthread_mutex_unlock(&lock);
}

int main(){
    pthread_t ptid[2];
    pthread_mutex_init(&lock, NULL);
    for(int i = 0; i<2;i++){
        pthread_create(&ptid[i], NULL, &func, NULL);
    }
    pthread_join(ptid[0], NULL);
    pthread_join(ptid[1], NULL);
    return 0;
}