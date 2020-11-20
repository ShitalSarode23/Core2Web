#include<stdio.h>
struct deviceinfo{

	char *deviceName;
	char *deviceOs;
	int deviceRam;
	struct deviceProcessor{

		char *processorCore;
		int processorBit;
	}proc;
};
void main(){

	struct deviceinfo dell = {"DELL","Linux",4,{"i3",64}};
	printf("Device Name:%s\n",dell.deviceName);
	printf("Device OS:%s\n",dell.deviceOs);
	printf("Device RAM:%d\n",dell.deviceRam);
	printf("Device Processor Core:%s\n",dell.proc.processorCore);
	printf("Device Processor Bit:%d\n",dell.proc.processorBit);

}/*
shital@sarode:~/Desktop/PPA/Assignments/Assignment-9-November$ cc p3.c 
shital@sarode:~/Desktop/PPA/Assignments/Assignment-9-November$ ./a.out 
Device Name:DELL
Device OS:Linux
Device RAM:4
Device Processor Core:i3
Device Processor Bit:64
*/
