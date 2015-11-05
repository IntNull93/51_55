#include <stdio.h>
#include <string.h>


const char *ZMac2Str(char *dst,const unsigned char *mac,const char site)
{
#define MAC_STR_LEN 40
     static char ms[10][MAC_STR_LEN];
     static int i = 0;
     static int cnt = 10;
     char *s = NULL;

     if((NULL == mac) ||(0!=site && site != ':' && site != '-')){
         return NULL;
     }
     
     if(dst == NULL){       
         s = ms[i%cnt];
         i++;
     }else{
         s = dst;
     }

     if(site !=0){
         sprintf(s,"%.2X%c%.2X%c%.2X%c%.2X%c%.2X%c%.2X",
              mac[0],site,mac[1],site,mac[2],site,mac[3],site,
              mac[4],site,mac[5]);
     }else{
         sprintf(s,"%.2X%.2X%.2X%.2X%.2X%.2X",
              mac[0],mac[1],mac[2],mac[3],mac[4],mac[5]);
              
     }
     return s; 

}

int IslegalUnitcode(const char *unitcode)
{
     if(NULL == unitcode ){ 
         return NULL;
     }

     int len = (int)strlen(unitcode);
     if( 14!= len){/** 场所编码固定为14个字节 */
         return NULL;
     }

     int i = 0;
     
     for(i = 0;i<14;i++){ /** 场所编码除第7个字节含A~F，其他均为0~9的数字 */
         if(i ==7){
              if( (!isdigit(unitcode[i]))
                       && (unitcode[i]<'A' || unitcode[i]>'F')
                   ){
                       return 0;
                   }
         }else{
              if(!isdigit(unitcode[i])){
                   return 0;
              }
         }
     }
     return 1;
}

const char * Unitcode2VMac(const char *unitcode,char *vmac,char *vmac2)
{
     if(!IslegalUnitcode(unitcode)){
         return NULL;
     }
     unsigned char buf[14] = {0}; /** 保存处理的场所编码 */
     unsigned char tmac[6] = {};  /** 保存处理后的mac地址 */
     unsigned short tmp = 0;
     memcpy(buf,unitcode,14);

     int i = 0;
     /** 数字直接转成数值 */
     for(i = 0 ; i < 14;i++){
         buf[i] = buf[i] - 0x30;
     }
     if(buf[7] > 9){ /** 场所编码除第7个字节含A~F，其他均为0~9的数字 */
         buf[7] = unitcode[7] - 0x41 + 0xA;
     }
     
     for(i = 5 ; i >= 0 ;i --){
         tmp = ((((buf[i*2+2] & 0xf)<<4) + ((buf[i*2+3]) & 0xf)) + 0x7a)+ ((tmp&0xff00) >> 8);
         tmac[i] = tmp & 0xff;       
     }

     if(tmac[0] & 0x01){
         tmac[0] = (tmac[0] &0xfffe) + 0xa0;
     }
     
     if(vmac2){
         ZMac2Str(vmac2,tmac,NULL);
     }
     return ZMac2Str(vmac,tmac,':');
}

int main()
{
         char vmac1[20];
         char vmac2[20];
         const char * p = NULL;

         p =Unitcode2VMac("44020121010201",vmac1,vmac2);
         printf("%s\n",p);
         p =Unitcode2VMac("4402012A010202",vmac1,vmac2);
         printf("%s\n",p);
         p =Unitcode2VMac("4402012F010211",vmac1,vmac2);
         printf("%s\n",p);
         p =Unitcode2VMac("44020121990201",vmac1,vmac2);
         printf("%s\n",p);
         p =Unitcode2VMac("4402012A990202",vmac1,vmac2);
         printf("%s\n",p);
         p =Unitcode2VMac("4402012F990211",vmac1,vmac2);
         printf("%s\n",p);

         return 0;
}

