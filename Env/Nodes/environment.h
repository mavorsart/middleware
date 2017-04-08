#ifndef __ENVIRONMENT_H
#define __ENVIRONMENT_H


enum{
	AM_ENV = 231,
	TMILLI_PERIOD = 7000
};


typedef nx_struct{
//	nx_uint8_t root_id;
	nx_uint16_t msg_id;
	nx_uint32_t sender_id;
} CollectMsg; //collect_t

typedef nx_struct{
	nx_uint16_t temperature;
	nx_uint16_t humidity;
	nx_uint16_t node_id;
	nx_uint16_t local_id;
} AvgMsg; //avg_t

#endif
