#ifndef __CLIENT_H__
#define __CLIENT_H__

#include<pthread.h>
#define CBUF_SIZE_DEFAULT 20
typedef struct chat_buffer{
	int bsize;
	int nmsg;
	char **msgbuf;
	pthread_mutex_t lock;
}chat_buffer;

void cbuf_init(chat_buffer *cbuf);
void cbuf_destroy(chat_buffer *cbuf);
void cbuf_add(chat_buffer *cbuf,const char *msg);

void parse_command(int socket,char *username,char *input);






#endif
