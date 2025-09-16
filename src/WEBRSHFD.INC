. V6.04.001 14/07/1998                                                       
. V6.04.002 16/07/1998                                                       
. V6.04.003 17/07/1998                                                       
. V6.04.004 17/07/1998                                                       
. *----------------------------------------------------------------------
. * Include Name  :   WEBRSHFD.INC
. *
. * Function      :   File Def'n Include for WEB               
. *                   Interface Report Schedule                    
. *
. * File Type     :   SQL
. *
. * File Name     :   webrshaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
WEBRSHA1   IFILE    SQL, FIXED=244, KEY="U1-8"                                  
WEBRSHA2   IFILE    SQL, FIXED=244, KEY="U9-9,10-17,18-25,1-8"                  
WEBRSHA3   IFILE    SQL, FIXED=244, KEY="U84-93,1-8"                            
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
WBRSFNO   DIM       8      8        1     Schedule File Number               
WBRSSTA   DIM       1      1        9     Status 0-Exec 1=Wait 2=Complete    
WBRSSDT   DIM       8      8        10    Schedule Date                      
WBRSSTM   DIM       8      8        18    Schedule Time                      
WBRSPRG   DIM       8      8        26    Program ID                         
WBRSDES   DIM       50     50       34    Description                        
WBRSUSR   DIM       10     10       84    Web User ID                        
WBRSRDT   DIM       8      8        94    Request Date                       
WBRSRTM   DIM       8      8        102   Request Time                       
WBRSBDT   DIM       8      8        110   Start Date                         
WBRSBTM   DIM       8      8        118   Start Time                         
WBRSBFL   FORM      1      2        126   Start Flag                         
WBRSTYP   FORM      1      2        128   Output Type 0=txt 1=html           
WBRSERC   FORM      6      4        130   Expected Number of Records         
WBRSPRC   FORM      6      4        134   Processed Number of Records        
WBRSUTM   DIM       8      8        138   Last Update Time                   
WBRSUR1   DIM       30     30       146   User Def Ref 1                     
WBRSUR2   DIM       30     30       176   User Def Ref 2                     
WBRSUD1   DIM       8      8        206   User Def Date 1                    
WBRSUD2   DIM       8      8        214   User Def Date 2                    
WBRSUY1   DIM       1      1        222   User Def Y/N 1                     
WBRSUY2   DIM       1      1        223   User Def Y/N 2                     
WBRSSPA   DIM       20     20       224   Spare                              
.
.End of Record                      244  
.
