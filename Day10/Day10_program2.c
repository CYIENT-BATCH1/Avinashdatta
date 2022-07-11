Write a function to store "G_Str_SteeringAngle_sint" to "G_Msg_SteeringInformation_Byte" as shown below. 
signed int G_Str_SteeringAngle_sint = -60; 
unsigned char G_Msg_SteeringInformation_Byte[3u];" 

#include<stdio.h> 
int main(){ 
signed int G_Str_SteeringAngle_sint = -60; 
for(int i=12;i>=0;i--){ 
printf("%x ",(G_Str_SteeringAngle_sint>>i)&1); 
} 
unsigned char G_Msg_SteeringInformation_Byte[3u]={0x00,0x00,0x00}; 
Byte[0]=((G_Str_SteeringAngle_sint>>0)&~(1<<2)); 
Byte[1]=(G_Str_SteeringAngle_sint>>2); 
Byte[2]=(G_Str_SteeringAngle_sint<<6); 
for(int i=0;i<3;i++){ 
printf("\nG_Msg_SteeringInformation_Byte[%d]:\n",i); 
for(int j=7;j>=0;j--) 
printf("%d ",(G_Msg_SteeringInformation_Byte[i]>>j)&1); 
} 
}

