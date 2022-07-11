Write a function to store "G_Eng_EngineTemperature_uchar" and "G_Eng_EngineRpm_uint" into " G_Msg_EngineInformation_Byte[5u]" as shown below. 
unsigned char G_Eng_EngineTemperature_uchar = 50u ; 
unsigned int G_Eng_EngineRpm_uint = 1000u; 
unsigned char G_Msg_EngineInformation_Byte[5u]; 

#include<stdio.h> 

int main(){ 
unsigned char G_Eng_EngineTemperature_uchar = 50u ; 
for(int i=7;i>=0;i--){ 
printf("%x ",(G_Eng_EngineTemperature_uchar>>i)&1); 
} 
unsigned int G_Eng_EngineRpm_uint = 1000u; 
printf("\n"); 
for(int j=12;j>=0;j--){ 
printf("%x ",(G_Eng_EngineRpm_uint>>j)&1); 
} 
unsigned char G_Msg_EngineInformation_Byte[5u]={0x00,0x00,0x00,0x00,0x00}; 
G_Msg_EngineInformation_Byte [3]=(G_Eng_EngineTemperature_uchar); 
G_Msg_EngineInformation_Byte[0]=((G_Eng_EngineRpm_uint>>9)&1); 
G_Msg_EngineInformation_Byte[2]=(G_Eng_EngineRpm_uint<<8); 
G_Msg_EngineInformation_Byte[1]=((G_Eng_EngineRpm_uint>>1)&0xff); 
for(int i=0;i<5;i++){ 
printf("\nG_Msg_EngineInformation_Byte[%d]:\n",i); 
for(int j=7;j>=0;j--) 
printf("%d ",(G_Msg_EngineInformation_Byte[i]>>j)&1); 
} 
}


