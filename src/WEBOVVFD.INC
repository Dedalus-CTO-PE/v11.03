. V11.00.01 04/08/2020 PVL C-0895294 Created WebServices OVV - PVV/PVP FD
. *----------------------------------------------------------------------
. * Include Name  :   WEBOVVFD.INC
. *
. * Function      :   File Def'n Include for Web System Table                   
. *                   WebServices OVV - PVP/PVV Table    
. *
. * File Type     :   SQL
. *
. * File Name     :   webovvaf.dat
. *
. * Index Values  :   KEY26   KEY50   KEY27   KEY62                          
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
WEBOVVA1   IFILE    SQL, FIXED=796, KEY="U1-8,9-16,17-24,25-26"
WEBOVVA2   IFILE    SQL, FIXED=796, KEY="U30-53,9-16,17-24,1-8,25-26"
WEBOVVA3   IFILE    SQL, FIXED=796, KEY="U659-659,1-8,9-16,17-24,25-26"
WEBOVVA4   IFILE    SQL, FIXED=796, KEY="U660-695,1-8,9-16,17-24,25-26"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
WBOVURNO  DIM       8      8        1     U/R Number                         
WBOVDATE  DIM       8      8        9     Date of OVV (CCYYMMDD)             
WBOVTIME  DIM       8      8        17    Time of OVV (hh:mm:ss)             
DWBOVCNT  DIM       2      2        25    Counter (Right Justified)          
WBOVHOSP  DIM       3      3        27    Hospital Code (pathspaf)           
WBOVTRID  DIM       24     24       30    Transaction ID                     
WBOVSNAM  DIM       40     40       54    Current Patient Family Name        
WBOVFNAM  DIM       40     40       94    Current Patient First Name         
WBOVVETN  DIM       9      9        134   Current Veteran File Number        
WBOVPRDT  DIM       8      8        143   DVA Processed Date                 
WBOVSTAT  DIM       4      4        151   DVA Status Code                    
WBOVEROR  DIM       500    500      155   Error Description                  
WBOVVENC  DIM       4      4        655   Veteran Entitlement Code           
WBOVRESP  DIM       1      1        659   Status 0 = Waiting (ECLWEB02)      
WBOVMSID  DIM       36     36       660   Message Id                         
WBOVSPAR  DIM       100    100      696   Spare                              
.
.End of Record                      796  
.
. Redefine form fields from key
. -----------------------------
WBOVCNTR  FORM      2
