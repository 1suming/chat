#ifndef   _MSG_H_
#define   _MSG_H_

#define    MAX_NUM_STR     1024
#define    MAX_MSG_LEN     512
#define    NAME_LEN        20

#define MSG_ERROR 0
#define MSG_ACK   1
#define MSG_LOGIN 2
#define MSG_CHAT  3
#define MSG_LOGOUT  4

typedef struct ChatSysPdu{
	char Version:4;
	char MsgType:4;
	char Name[NAME_LEN];
	int MsgLen;
	char Msg[MAX_MSG_LEN];
}ChatSysPdu;

typedef struct ChatSysMsg{
	int Version;
	int MsgType;
	char Name[NAME_LEN];
	int MsgLen;
	char Msg[MAX_MSG_LEN];
}ChatSysMsg;

int ChatSysPduParser(char * pdu,ChatSysMsg *Msg);

int ChatSysPduFormat(char * pdu,ChatSysMsg *Msg);

void printMsg(ChatSysMsg *Msg);

#endif
	