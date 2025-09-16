. *----------------------------------------------------------------------
. * Include Name  :   FMSNRGFD.INC
. *
. * Function      :   File Def'n Include for Financial Management
. *                   Ledger Template Reporting
. *
. * File Type     :   SQL
. *
. * File Name     :   fmsnrgaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
FMSNRGA1   IFILE    SQL, FIXED=163, KEY="U1-3"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
FMNGCODE  DIM       3      3        1     Report Code                        
FMNGDESC  DIM       40     40       4     Description                        
FMNGCCCD  DIM       3      3        44    Cost Centre Template               
FMNGCCFR  DIM       12     12       47    From Cost Centre                   
FMNGSACD  DIM       3      3        59    Subjective Template                
FMNGSAFR  DIM       12     12       62    From Subjective                    
FMNGRS    DIM       3      3        74    Report Style                       
FMNGPT    DIM       2      2        77    Printer Type                       
FMNGCLEV  DIM       3      3        79    From Cost Centre Level             
FMNGSLEV  DIM       3      3        82    From Subjective Level              
FMNGCAS   FORM      1      2        85    0=Accrual 1=Cash                   
FMNGCBT   DIM       4      4        87    Budget Type                        
FMNGPBT   DIM       4      4        91    Alternative Budget Type            
FMNGDOP   FORM      1      2        95    0=Normal 1=CC Desc 2=Subj Desc     
FMNGZER   FORM      1      2        97    Print Zero Accounts (0=No)         
FMNGSUPP  DIM       1      1        99    Suppress Post Ac Print (0=No)      
FMNGSHED  DIM       1      1        100   Suppress Headings (1=yes)          
FMNGPSEQ  FORM      1      2        101   Print Sequence (0=CC 1=Subj)       
FMNGPDES  DIM       40     40       103   Print Description                  
FMNGSPAR  DIM       20     20       143   Spare                              
.
.End of Record                      163  
.
