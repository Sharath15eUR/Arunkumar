#include <stdio.h>
#include <pthread.h>
#include <stdlib.h>

void *hello(void *args){
	printf("Hello ");

}

void *world(void *args){
	printf("World");
}

int main(){
	pthread_t ptid[2]
	for(int i = 0; i<2; i++){
		if(i == 0){
			pthread_create(&ptid[i], NULL, &hello, NULL);
			pthread_join(ptid[i], NULL);
		}else{
			pthread_create(&ptid[i], NULL, &world, NULL);
			pthread_create(ptid[i], NULL);
		}
	}
	return 0;
}