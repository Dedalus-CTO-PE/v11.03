. V10.08.01 30/03/2016 SA C-0313842 Added PTELECLS                              
. V10.07.01 12/11/2015 SA C-313842 Added PTELCMXC                               
. V10.05.01 30/07/2014 JT C-253233 Added new fields for Co-payment CCU,ICU,SCN,H
. V10.04.01 26/02/2014 SA C-292257 Extended PTELHFPN from DIM 25 to DIM 80      
. V10.00.01 22/09/2010 JT  Added Query option for Pre-Existing Ailment          
. V9.12.001 09/09/2009 DS  Added PTELCPCP to PTELTOOP  CAR 198387,205381        
. V9.11.001 03/03/2009 PV  Added PTELEADM CAR 183976                            
. V9.08.001 13/12/2006 PV  Added PTELPPUT PTELPSUT PTELPTUT PTELECMN 128097     
. V9.04.005 29/11/2005 JT                                                       
. V9.09.002 07/11/2007 DS  Added 8 new fields  CAR 151898                       
. V9.10.001 01/07/2008 EC  Added PTELMDES and PTELMAMT CAR 160213               
. *----------------------------------------------------------------------
. * Include Name  :   PATELGFD.INC
. *
. * Function      :   File Def'n Include for Patient System                     
. *                   Eligibility Table                  
. *
. * File Type     :   SQL
. *
. * File Name     :   patelgaf.dat
. *
. * Index Values  :   KEY8                                                   
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
PATELGA1   IFILE    SQL, FIXED=766, KEY="U1-8"                                  
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
PTELVISN  DIM       8      8        1     Visit Number                       
PTELFINC  DIM       1      1        9     Financial Y/N (1-Yes)              
PTELXCSS  FORM      12.2   8        10    Excess for this Admission          
PTELPPRI  FORM      12.2   8        18    Co-payments Private room           
PTELPSHA  FORM      12.2   8        26    Co-payments Shared room            
PTELPTHE  FORM      12.2   8        34    Theatre Co-payments                
PTELXCLS  DIM       1      1        42    Exclusions exist Y/N (1-Yes)       
PTELCMPL  DIM       1      1        43    Check Complete Y/N (1-Yes)         
PTELCOVR  DIM       1      1        44    Covered for this Procedure Y/N     
PTELQEXS  DIM       1      1        45    Quote Exists Y/N (1-Yes)           
PTELQACC  DIM       1      1        46    Quote Accepted Y/N (1-Yes)         
PTELCDON  DIM       3      3        47    Check done via (Catg EG)           
PTELRDAT  DIM       8      8        50    Request date (CCYYMMDD)            
PTELSPEA  DIM       1      1        58    Subject to Pre-Existing Ailment    
.                                         0=No, 1=Yes, 2=Query                 
PTELHFRN  DIM       20     20       59    Health Fund Reference Number       
PTELPTHF  DIM       25     25       79    Person at Health Fund provided Info
PTELXCMN  DIM       100    100      104   Exclusion Comments                 
PTELPPUT  FORM      5.2    5        204   Private Dat Co-payment Up To       
PTELPSUT  FORM      5.2    5        209   Shared Day Co-payment Up To        
PTELPTUT  FORM      5.2    5        214   Theatre Day Co-payment Up To       
PTELECMN  DIM       200    200      219   Eligibility Comments               
PTELHSTM  DIM       25     25       419   Hospital Staff Member              
PTELHFPN  DIM       80     80       444   Health Fund Policy Name            
PTELPSDY  FORM      12.2   8        524   Co-payment required - Same day     
PTELPSDU  FORM      5.2    5        532   Same day Co-payment up to          
PTELPHSP  FORM      12.2   8        537   Co-payment required - Hospital     
PTELPHSU  FORM      5.2    5        545   Hospital Co-payment up to          
PTELAFRM  DIM       1      1        550   Accident Form? Y/N (1=Yes)         
PTELQLPS  DIM       1      1        551   Qualifying Period Served? (1=Yes)  
PTELMDES  DIM       70     70       552   Miscellaneous Description          
PTELMAMT  FORM      12.2   8        622   Miscellaneous $ Value              
PTELEADM  DIM       1      1        630   Emergency Admission (1-Yes)        
PTELCPCP  DIM       1      1        631   Calculate Private Co-payment       
PTELCSCP  DIM       1      1        632   Calculate Shared Co-payment        
PTELCDCP  DIM       1      1        633   Calculate Same Day Co-payment      
PTELCHCP  DIM       1      1        634   Calculate Hospital Co-payment      
PTELCTCP  DIM       1      1        635   Calculate Theatre Co-payment       
PTELTOOP  FORM      12.2   8        636   Total Out Of Pockets               
PTELXCSD  FORM      12.2   8        644   Fund Excess for Same day           
PTELPCCU  FORM      12.2   8        652   Co-payment CCU,ICU,SCN,HDU         
PTELCCCU  DIM       1      1        660   Calculate CCU,ICU,SCN,HDU          
PTELPCUT  FORM      5.2    5        661   CCU,ICU,SCN,HDU Co-payment Up To   
PTELCMXC  DIM       9      9        666   Casemix Code                       
PTELECLS  DIM       3      3        675   Expected Casemix LOS               
PTELSPAR  DIM       88     88       678   Spare variable                     
.
.End of Record                      766  
.
