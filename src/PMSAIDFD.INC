. V10.12.01 09/04/2018 SA C-0844685 Added PMAIDTMR, PMAITMMR & PMAIUSMR         
.                         and reduced SPARE variable
. V10.04.01 29/01/2014 EC C-291879 Added IHI Fields                             
. V9.09.002 26/11/2007 PV  Added Create and Update variables                    
. V9.09.001 31/07/2007 ML  Added PMAIRDAT Registration Date                     
. V9.07.001 06/09/2006 JH  Added display as UR and hospital                     
. *----------------------------------------------------------------------
. * Include Name  :   PMSAIDFD.INC
. *
. * Function      :   File Def'n Include for Patient System                     
. *                   Alternate ID table                 
. *
. * File Type     :   SQL
. *
. * File Name     :   pmsaidaf.dat
. *
. * Index Values  :   KEY31   KEY31                                          
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
PMSAIDA1   IFILE    SQL, FIXED=294, KEY="U1-8,9-11,12-31"
PMSAIDA2   IFILE    SQL, FIXED=294, KEY="U12-31,1-8,9-11"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
PMAIURNO  DIM       8      8        1     UR Number                          
PMAITYPE  DIM       3      3        9     Alternate ID Type (Cat AI)         
PMAIALID  DIM       20     20       12    Alternate ID                       
PMAIDISU  DIM       1      1        32    Display instead of UR 1=Yes        
PMAIHOSP  DIM       3      3        33    Hospital Code                      
PMAIRDAT  DIM       8      8        36    Registration date (ccyymmdd)       
PMAICRDT  DIM       8      8        44    Date Created                       
PMAICRTM  DIM       8      8        52    Time Created                       
PMAICRUD  DIM       10     10       60    User ID Created                    
PMAIUPDT  DIM       8      8        70    Date Updated                       
PMAIUPTM  DIM       8      8        78    Time Updated                       
PMAIUPUD  DIM       10     10       86    User ID Updated                    
PMAIVSTA  DIM       1      1        96    IHI Verification Status            
.                                         1 = IHI Verified                     
.                                         2 = IHI Manual                       
PMAIASTA  DIM       1      1        97    IHI Activation Status              
.                                         1 = Active                           
.                                         2 = Deceased                         
.                                         3 = Retired                          
.                                         4 = Expired                          
.                                         5 = Resolved                         
PMAIADAT  DIM       8      8        98    IHI Date of Assignment (CCYYMMDD)  
PMAIATIM  DIM       8      8        106   IHI Time of Assignment (HH:MM:SS)  
PMAISURN  DIM       40     40       114   IHI Surname                        
PMAIGIVN  DIM       40     40       154   IHI Given Name                     
PMAIDTMR  DIM       8      8        194   Date Record Merged (ccyymmdd)      
PMAITMMR  DIM       8      8        202   Time Record Merged (hh:mm:ss)      
PMAIUSMR  DIM       10     10       210   User Who Merged Record (websecaf)  
PMAISPAR  DIM       74     74       220   Spare                              
.
.End of Record                      294  
.
