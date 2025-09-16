. V10.01.01 16/03/2011 JP  Increased printer size CAR 239574                 
. V9.05.000 12/01/2006 ML  New FD for SACS Referral Management                  
. V9.05.002 25/01/2006 MJL Add ALLPOUNO & ALLPOUST                              
. *----------------------------------------------------------------------
. * Include Name  :   ALLLPCFD.INC
. *
. * Function      :   File Def'n Include for Allied Health                      
. *                   Print Scheduling Table             
. *
. * File Type     :   SQL
. *
. * File Name     :   alllpcaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
ALLLPCA1   IFILE    SQL, FIXED=103, KEY="U1-5"                                  
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
ALLPSCHE  DIM       5      5        1     Schedule No. (Allocated Unique ID) 
ALLPURNO  DIM       8      8        6     U/R Number                         
ALLPVISN  DIM       8      8        14    Referral/Visit Number              
ALLPPRNT  DIM       6      6        22    Printer                            
ALLPCOPY  FORM      3      3        28    Number of Copies                   
ALLPSTAT  DIM       6      6        31    Stationery Code                    
ALLPLETT  DIM       3      3        37    Letter Number                      
ALLPPTYP  DIM       1      1        40    Print Type (1=Letter, 2=Form)      
ALLPOUNO  DIM       8      8        41    Outpatient Visit No.               
ALLPOUST  DIM       6      6        49    Outpatient Visit Site              
ALLPWEBU  DIM       10     10       55    WEB User Id (websecaf)             
ALLPRDAT  DIM       8      8        65    Request Date (CCYYMMDD)            
ALLPRTIM  DIM       8      8        73    Request Time (HH:MM:SS)            
ALLPSPAR  DIM       22     22       81    Spare                              
.
.End of Record                      103  
.
