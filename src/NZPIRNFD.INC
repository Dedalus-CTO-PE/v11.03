. V9.08.001 14/11/2006 JT                                                    
. *----------------------------------------------------------------------
. * Include Name  :   NZPIRNFD.INC
. *
. * Function      :   File Def'n Include for New Zealand Private                
. *                   NZ Private Invoice Ranges          
. *
. * File Type     :   SQL
. *
. * File Name     :   nzpirnaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
NZPIRNA1   IFILE    SQL, FIXED=77, KEY="U1-3,4-6"                               
NZPIRNA2   IFILE    SQL, FIXED=77, KEY="U4-6,1-3"                               
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
NZIRHOSP  DIM       3      3        1     Hospital Code (pathspaf)           
NZIRIRNG  DIM       3      3        4     Invoice Range Code                 
NZIRDESC  DIM       40     40       7     Invoice Range Description          
NZIRNEXT  FORM      8      5        47    Next Invoice Number in Range       
NZIRMAXI  FORM      8      5        52    Maximum Invoice Number in Range    
NZIRSPAR  DIM       20     20       57    Spare Variable                     
.
.End of Record                      77   
.
