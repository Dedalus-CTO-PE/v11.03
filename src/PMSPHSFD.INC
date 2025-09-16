. V11.00.01 16/04/2020 EC C-0888071 Added PMPHINCB and PMPHINCC                 
. V10.02.01 09/06/2011 JP C-240715 Created                                      
. *----------------------------------------------------------------------
. * Include Name  :   PMSPHSFD.INC
. *
. * Function      :   File Def'n Include for Patient System                     
. *                   Previous Hospitalisation Details   
. *
. * File Type     :   SQL
. *
. * File Name     :   pmsphsaf.dat
. *
. * Index Values  :   KEY29                                                  
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
PMSPHSA1   IFILE    SQL, FIXED=187, KEY="U1-8,14-21,22-29,9-13"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
PMPHADMN  DIM       8      8        1     Admission Number                   
PMPHPHOS  DIM       5      5        9     Previous Hospital (patvadaf)       
PMPHADAT  DIM       8      8        14    Previous Admission Date (CCYYMMDD) 
PMPHDDAT  DIM       8      8        22    Previous Discharge Date (CCYYMMDD) 
PMPHLDAY  DIM       5      5        30    No of Leave Days                   
PMPHCUID  DIM       10     10       35    User ID Created (websecaf)         
PMPHCDAT  DIM       8      8        45    Created Date (CCYYMMDD)            
PMPHCTIM  DIM       8      8        53    Created Time (HH:MM:SS)            
PMPHUUID  DIM       10     10       61    User ID Updated (websecaf)         
PMPHUDAT  DIM       8      8        71    Updated Date (CCYYMMDD)            
PMPHUTIM  DIM       8      8        79    Updated Time (HH:MM:SS)            
PMPHINCB  DIM       1      1        87    Include in Billing Calculations    
.                                         Blank or 0 = No, 1 = Yes             
PMPHINCC  DIM       1      1        88    Include in 3B Cert. Calculations   
.                                         Blank or 0 = No, 1 = Yes             
PMPHSPAR  DIM       98     98       89    Spare                              
.
.End of Record                      187  
.
