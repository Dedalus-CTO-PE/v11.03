. *----------------------------------------------------------------------
. * Include Name  :   OBSPCOFD.INC
. *
. * Function      :   File Def'n Include for WEB
. *                   Observation Patient Correspondence             
. *
. * File Type     :   SQL
. *
. * File Name     :   obspcoaf.dat
. *
. * Keys          :   KEY20   KEY28   KEY28   KEY31   KEY28   KEY25
. *
. * V10.04.02 17/03/2014 Steve Armstrong CAR 295315
. *           Fixed start position of spare variable and length of record
. * V10.04.01 24/12/2013 Patrick Adair  CAR 295315
. *           Moved variable OBPCEAID out of spare variable
. * V10.03.02 24/06/2013 Patrick Adair  CAR 286757
. *           Added variables OBPCEAID for eAdmissions
. * V10.03.01 25/11/2011  Mike Laming   CAR 249362
. *           Added OBPCCNTR "Alert File Counter"                 
. * V9.04.01  21/12/2004 Ebon Clements  CAR 56056
. *           Added variables OBPCACAT,OBPCACOD. Added index 6
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
OBSPCOA1   IFILE    SQL, FIXED=331, KEY="U1-8,9-16,17-20"                       
OBSPCOA2   IFILE    SQL, FIXED=331, KEY="U9-16,21-28,17-20,1-8"                 
OBSPCOA3   IFILE    SQL, FIXED=331, KEY="U21-28,1-8,9-16,17-20"                 
OBSPCOA4   IFILE    SQL, FIXED=331, KEY="U29-31,21-28,1-8,9-16,17-20"           
OBSPCOA5   IFILE    SQL, FIXED=331, KEY="U1-8,21-28,9-16,17-20"                 
OBSPCOA6   IFILE    SQL, FIXED=331, KEY="U1-8,253-254,255-257,9-16,17-20"                       
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
OBPCURNO  DIM       8      8        1     U/R Number                         
OBPCCVIS  DIM       8      8        9     Visit Number                       
OBPCCPID  DIM       4      4        17    Correspondance ID                  
OBPCINDT  DIM       8      8        21    Input Date                         
OBPCCTYP  DIM       3      3        29    Type of Correspondence (Cat wi)
OBPCINTM  DIM       8      8        32    Time hh:mm:ss                      
OBPCINUS  DIM       10     10       40    Input Web User ID                  
OBPCFEXT  DIM       6      6        50    File Extension                     
OBPCMDEL  DIM       1      1        56    Marked as Deleted                  
OBPCSLID  DIM       4      4        57    Storage Location ID                
OBPCSLEV  DIM       2      2        61    Security Level                     
OBPCCOM1  DIM       40     40       63    Comment 1                          
OBPCCOM2  DIM       40     40       103   Comment 2                          
OBPCCFRM  DIM       30     30       143   From                               
OBPCCTOO  DIM       30     30       173   To                                 
OBPCUDF1  DIM       3      3        203   User Def Code 1 (Cat xx)           
OBPCUDF2  DIM       3      3        206   User Def Code 2 (Cat xx)           
OBPCUYN1  DIM       1      1        209   User Def Y/N 1                     
OBPCUYN2  DIM       1      1        210   User Def Y/N 2                     
OBPCUDD1  DIM       8      8        211   User Def Date 1                    
OBPCUDD2  DIM       8      8        219   User Def Date 2                    
OBPCDTLU  DIM       8      8        227   Date Last Update                   
OBPCTMLU  DIM       8      8        235   Time Last Update                   
OBPCLUID  DIM       10     10       243   Last Web User ID                   
OBPCACAT  DIM       2      2        253   Alert File Category (H1-H9)
OBPCACOD  DIM       3      3        255   Alert File Code (for category)
OBPCCNTR  DIM       3      3        258   Alert File Counter
OBPCEAID  DIM       20     20       261   eAdmission ID
OBPCSPAR  DIM       50     50       281   Spare                              
.
.End of Record                      331  
.
