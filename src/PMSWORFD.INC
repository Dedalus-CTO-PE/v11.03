. V9.09.001 06/12/2007 EC  Added PMWOCEXT  CAR 142954                        
. V9.08.002 19/04/2007 EC  Added PMWOEDTM to PMWOUDF8
. V9.08.001 27/11/2006 EC  Added Index 2 CAR 126035
. V9.03.000 21/05/2004 EC  Created FD CAR 44795
. *----------------------------------------------------------------------
. * Include Name  :   PMSWORFD.INC
. *
. * Function      :   File Def'n Include for Patient System                     
. *                   Patient Working Diagnosis File     
. *
. * File Type     :   SQL
. *
. * File Name     :   pmsworaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
PMSWORA1   IFILE    SQL, FIXED=282, KEY="U1-8"                                  
PMSWORA2   IFILE    SQL, FIXED=282, KEY="U114-121,1-8"                          
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
PMWOADMN  DIM       8      8        1     Admission Number                   
PMWOWDI1  DIM       35     35       9     Working Diagnosis 1                
PMWOWDI2  DIM       35     35       44    Working Diagnosis 2                
PMWOWDI3  DIM       35     35       79    Working Diagnosis 3                
PMWOEDAT  DIM       8      8        114   Expected Discharge Date (CCYYMMDD) 
PMWOCDAT  DIM       8      8        122   Date Record Created (CCYYMMDD)     
PMWOCTIM  DIM       8      8        130   Time Record Created (HH:MM:SS)     
PMWOCUID  DIM       10     10       138   WEB User ID Created (websecaf)     
PMWOUDAT  DIM       8      8        148   Update Date (CCYYMMDD)             
PMWOUTIM  DIM       8      8        156   Update Time (HH:MM:SS)             
PMWOUUID  DIM       10     10       164   WEB User ID Updated (websecaf)     
PMWOEDTM  DIM       8      8        174   Expected Discharge Time (HH:MM:SS) 
PMWODPST  DIM       3      3        182   Discharge Preparation Status(Cat vi
PMWOCORD  DIM       10     10       185   Discharge Coordinator (pmshcpaf)   
PMWODDES  DIM       5      5        195   Expected Discharge Destination     
PMWODTRN  DIM       8      8        200   Date Ready for Transfer (CCYYMMDD) 
PMWOUDF1  DIM       3      3        208   User Defined Field 1 (Cat va)      
PMWOUDF2  DIM       3      3        211   User Defined Field 2 (Cat vb)      
PMWOUDF3  DIM       3      3        214   User Defined Field 3 (Cat vc)      
PMWOUDF4  DIM       3      3        217   User Defined Field 4 (Cat vd)      
PMWOUDF5  DIM       3      3        220   User Defined Field 5 (Cat ve)      
PMWOUDF6  DIM       3      3        223   User Defined Field 6 (Cat vf)      
PMWOUDF7  DIM       3      3        226   User Defined Field 7 (Cat vg)      
PMWOUDF8  DIM       3      3        229   User Defined Field 8 (Cat vh)      
PMWOCEXT  DIM       4      4        232   Cordless Telephone Extn Number     
PMWOSPAR  DIM       46     46       236   Spare                              
.
.End of Record                      282  
.
