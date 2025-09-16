. V10.12.01 08/05/2018 TTI C-0850711 Added Index 7                              
. V9.03.002 19/03/2004 P.D Added ALEQPFEE                                       
. V9.03.002 19/03/2004 P.D Added ALEQPFEE & ALEQACTV                            
. *----------------------------------------------------------------------
. * Include Name  :   ALLEQUFD.INC
. *
. * Function      :   File Def'n Include for Allied Health                      
. *                   Equipment Table                    
. *
. * File Type     :   SQL
. *
. * File Name     :   allequaf.dat
. *
. * Index Values  :   KEY10   KEY13   KEY13   KEY53   KEY16   KEY53   KEY16  
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
ALLEQUA1   IFILE    SQL, FIXED=298, KEY="U1-10"
ALLEQUA2   IFILE    SQL, FIXED=298, KEY="U51-53,1-10"
ALLEQUA3   IFILE    SQL, FIXED=298, KEY="U63-65,1-10"
ALLEQUA4   IFILE    SQL, FIXED=298, KEY="U11-50,1-10,60-62"
ALLEQUA5   IFILE    SQL, FIXED=298, KEY="U60-62,54-56,1-10"
ALLEQUA6   IFILE    SQL, FIXED=298, KEY="U63-65,11-50,1-10"
ALLEQUA7   IFILE    SQL, FIXED=298, KEY="U63-65,54-56,1-10"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
ALEQEQUI  DIM       10     10       1     Equipment Code                     
ALEQDESC  DIM       40     40       11    Equipment Description              
ALEQLOAN  DIM       3      3        51    Loan Group (Category QG)           
ALEQTYPE  DIM       3      3        54    Equipment Type (Category QT)       
ALEQSUBT  DIM       3      3        57    Equipment Sub-Type (Category QY)   
ALEQHOME  DIM       3      3        60    Home Location (Category QH)        
ALEQDEPT  DIM       3      3        63    Department Code (alldepaf)         
ALEQITEM  DIM       9      9        66    Item Code (priitemf)               
ALEQSUPP  DIM       5      5        75    Supplier Code (apsmasaf)           
ALEQPROD  DIM       20     20       80    Supplier Product Code              
ALEQSERI  DIM       20     20       100   Serial Number                      
ALEQSTAT  DIM       1      1        120   Status Flag                        
.                                         0 = Available for Loan               
.                                         1 = Currently on Loan                
.                                         2 = Inactive/Written Off             
.                                         3 = Needs Maintenance                
.                                         4 = Deleted - Strike out             
ALEQSDAT  DIM       8      8        121   Date of Status (CCYYMMDD)          
ALEQPDAT  DIM       8      8        129   Purchase Date (CCYYMMDD)           
ALEQMAIN  FORM      3      3        137   Maintenance Period (Months)        
ALEQUNIT  FORM      14.2   9        140   Unit Cost                          
ALEQDEPO  FORM      8.2    6        149   Deposit Amount                     
ALEQSPEC  DIM       1      1        155   Special Funding (0=No,1=Yes)       
ALEQLOAU  DIM       1      1        156   Loan Authorisation Level           
ALEQRDAT  DIM       8      8        157   Re-conditioned Date (CCYYMMDD)     
ALEQCONS  DIM       1      1        165   Consumable Indicator (0=No,1=Yes)  
ALEQCBAL  FORM      8      5        166   Current Balance                    
.
.  Next 2 fields are only applicable if Consumable Indicator=1
.
ALEQREOR  FORM      8      5        171   Re-order Level                     
ALEQREQT  FORM      8      5        176   Re-order Quantity                  
ALEQREGN  DIM       2      2        181   Register Number (amsregaf)         
ALEQASSN  DIM       12     12       183   Asset Number (amsmasaf)            
ALEQCDAT  DIM       8      8        195   Date Record Created (CCYYMMDD)     
ALEQCTIM  DIM       8      8        203   Time Record Created (HH:MM:SS)     
ALEQCUID  DIM       10     10       211   WEB User ID Created (websecaf)     
ALEQUDAT  DIM       8      8        221   Date Record Updated (CCYYMMDD)     
ALEQUTIM  DIM       8      8        229   Time Record Updated (HH:MM:SS)     
ALEQUUID  DIM       10     10       237   WEB User ID Updated (websecaf)     
ALEQACTV  DIM       1      1        247   Record Status (0=Active 1=Inactive)
ALEQPFEE  FORM      8.2    6        248   Fee To Be Paid                     
ALEQSPAR  DIM       44     44       254   Spare Variable                     
.
.End of Record                      298  
.
