. V10.00.01 27/05/2010 JP  Created for CAR 207094                            
. *----------------------------------------------------------------------
. * Include Name  :   OBSNDDFD.INC
. *
. * Function      :   File Def'n Include for Clinical Observations              
. *                   Nursing Diagnosis Details          
. *
. * File Type     :   SQL
. *
. * File Name     :   obsnddaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
OBSNDDA1   IFILE    SQL, FIXED=1049, KEY="U1-8"                                 
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
OBNDVISN  DIM       8      8        1     Visit Number                       
OBNDNDG1  DIM       80     80       9     Nursing Diagnosis 1                
OBNDACP1  DIM       80     80       89    Action Plan 1                      
OBNDNDG2  DIM       80     80       169   Nursing Diagnosis 2                
OBNDACP2  DIM       80     80       249   Action Plan 2                      
OBNDNDG3  DIM       80     80       329   Nursing Diagnosis 3                
OBNDACP3  DIM       80     80       409   Action Plan 3                      
OBNDNDG4  DIM       80     80       489   Nursing Diagnosis 4                
OBNDACP4  DIM       80     80       569   Action Plan 4                      
OBNDNDG5  DIM       80     80       649   Nursing Diagnosis 5                
OBNDACP5  DIM       80     80       729   Action Plan 5                      
OBNDNDG6  DIM       80     80       809   Nursing Diagnosis 6                
OBNDACP6  DIM       80     80       889   Action Plan6                       
OBNDSPAR  DIM       80     80       969   Spare                              
.
.End of Record                      1049 
.
