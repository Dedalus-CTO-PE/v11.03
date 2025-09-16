. V10.03.00 16/10/2013 JT C-283618 New FD                                       
. *----------------------------------------------------------------------
. * Include Name  :   PMSIDEFD.INC
. *
. * Function      :   File Def'n Include for Patient System                     
. *                   Invoice Payer Details table        
. *
. * File Type     :   SQL
. *
. * File Name     :   pmsideaf.dat
. *
. * Index Values  :   KEY25   KEY26   KEY34   KEY34   KEY25                  
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
PMSIDEA1   IFILE    SQL, FIXED=276, KEY="U1-8,9-11,12-19,20-25"                 
PMSIDEA2   IFILE    SQL, FIXED=276, KEY="U1-8,12-19,90-90,9-11,20-25"           
PMSIDEA3   IFILE    SQL, FIXED=276, KEY="U1-8,12-19,26-26,27-34,9-11,20-25"     
PMSIDEA4   IFILE    SQL, FIXED=276, KEY="U1-8,9-11,12-19,81-89,20-25"           
PMSIDEA5   IFILE    SQL, FIXED=276, KEY="U12-19,1-8,9-11,20-25"                 
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
PMIDADMN  DIM       8      8        1     Admission Number                   
PMIDCLTY  DIM       3      3        9     Claim Type (Cat CL) - Payer        
PMIDINVN  DIM       8      8        12    Invoice No (blank if not invoiced) 
PMIDTRNO  DIM       6      6        20    Transaction No.                    
PMIDRTYP  DIM       1      1        26    Record Type 1=Accommodation,
.                                         2=Theatre Item, 3=Misc.Item
PMIDFDAT  DIM       8      8        27    From Date (ccyymmdd)
PMIDTDAT  DIM       8      8        35    To Date (cccyymmdd)
PMIDNDAY  FORM      4      3        43    Days of Accommodation              
PMIDDESC  DIM       35     35       46    Accommodation Description          
PMIDITEM  DIM       9      9        81    Item Code                          
DPMIDDEF  DIM       1      1        90    Default 0=No,1=Yes
PMIDREGM  DIM       10     10       91    Regime Code                        
PMIDAMNT  FORM      12.2   8        101   Amount                             
PMIDGSTM  FORM      12.2   8        109   GST Amount                         
PMIDSPLT  DIM       1      1        117   Split Invoice                      
PMIDCNID  DIM       6      6        118   Contract ID                        
PMIDCUID  DIM       10     10       124   WEB User Created (websecaf)        
PMIDCDAT  DIM       8      8        134   Date Record Created (ccyymmdd)     
PMIDCTIM  DIM       8      8        142   Time Record Created (hh:mm:ss)     
PMIDUUID  DIM       10     10       150   WEB User Updated (websecaf)        
PMIDUDAT  DIM       8      8        160   Date Record Updated (ccyymmdd)     
PMIDUTIM  DIM       8      8        168   Time Record Updated (hh:mm:ss)     
PMIDITDT  DIM       8      8        176   Invoice todate (ccyymmdd)          
PMIDSPAR  DIM       92     92       184   Spare                              
.
.End of Record                      276  
.
.Redefine Key Variables
.----------------------
PMIDDEFT  FORM      1    
