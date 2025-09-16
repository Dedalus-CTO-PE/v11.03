. V11.00.01 12/03/2020 TNG C-0889496 Added MRACDDNR,MRACOHCP,MRACOCOF,MRACODAT  
. V10.04.02 26/02/2014 SA C-294526 Added MRACODOL, MRACNDOL & MRACDIFD          
. V10.04.01 02/01/2014 PA C-294990 Reversed order of EPSN and ADTE in index 2   
. V9.04.000 25/11/2004 LV  Created New                                          
. *----------------------------------------------------------------------
. * Include Name  :   MRTAUCFD.INC
. *
. * Function      :   File Def'n Include for Medical Records                    
. *                   Coding Audit Details               
. *
. * File Type     :   SQL
. *
. * File Name     :   mrtaucaf.dat
. *
. * Index Values  :   KEY10   KEY18                                          
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
MRTAUCA1   IFILE    SQL, FIXED=348, KEY="U1-8,9-10"
MRTAUCA2   IFILE    SQL, FIXED=348, KEY="U1-8,9-10,11-18"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
MRACVISN  DIM       8      8        1     Visit Number                       
MRACEPSN  DIM       2      2        9     Episode Number                     
MRACADTE  DIM       8      8        11    Audit Date                         
MRACODRG  DIM       4      4        19    Original DRG                       
MRACOWIE  FORM      6.4    6        23    Original WIES                      
MRACNDRG  DIM       4      4        29    New DRG                            
MRACNWIE  FORM      6.4    6        33    New WIES                           
MRACDWIE  FORM      6.4    6        39    WIES Difference                    
MRACCLNC  DIM       10     10       45    Clinician                          
MRACTYPE  DIM       3      3        55    Type Audit (CAT YA)                
MRACRCHG  DIM       3      3        58    Reason for Change (CAT YB)         
MRACNCHG  DIM       1      1        61    No Change (Y/N)                    
MRACCOMM  DIM       100    100      62    Comments                           
MRACCDTE  DIM       8      8        162   Date Record Created                
MRACCTIM  DIM       8      8        170   Time Record Created                
MRACCUSR  DIM       10     10       178   Web User Created (websecaf)        
MRACCDSC  DIM       30     30       188   User Created Description           
MRACUDTE  DIM       8      8        218   Date Last Updated                  
MRACUTIM  DIM       8      8        226   Time Last Updated                  
MRACUUSR  DIM       10     10       234   Web User Updated (websecaf)        
MRACUDSC  DIM       30     30       244   User Updated Description           
MRACODOL  FORM      12.2   8        274   Original Dollar Value              
MRACNDOL  FORM      12.2   8        282   New Dollar Value                   
MRACDIFD  FORM      12.2   8        290   Difference in Dollar Value         
MRACDDNR  DIM       1      1        298   Doctor Did Not Respond             
.                                         0 or Blank=Not selected (not ticked) 
.                                         1=Selected (ticked)                  
MRACOHCP  DIM       10     10       299   HCP Code                           
MRACOCOF  DIM       3      3        309   Outcome of Change (Cat aO)         
MRACODAT  DIM       8      8        312   Outcome Date                       
MRACSPAR  DIM       28     28       320   Spare                              
.
.End of Record                      348  
.
