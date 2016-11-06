#include <stdio.h>
#include <pthread.h>

void *myfunc(void *myvar);

int main(int argc, char* argv[]){
	
	pthread_t thread1,thread2;
	char *msg1 = "first thread";
	char *msg2 = "second thread";
	int ret1,ret2;

	ret1 = pthread_create(&thread1,NULL,myfunc,(void *) msg1);
	ret2 = pthread_create(&thread2,NULL,myfunc,(void *) msg2 );
	
	printf("main func after threads created\n");

	pthread_join(thread1,NULL);
	pthread_join(thread2,NULL);

	printf("first thread ret1 = %d\n",ret1);
	printf("second thread ret2 = %d\n",ret2);

	return 0 ;
	
}

void *myfunc(void *myvar){
	char *msg;
	msg = (void *) myvar;

	for(int i = 0; i<10;i++){
		printf("%s %d\n",msg,i);
		sleep(1);
	}

	return NULL;
}	
