. 9.07 .001 20/07/2006 JH  Created                                           
. *----------------------------------------------------------------------
. * Include Name  :   OBSDAPFD.INC
. *
. * Function      :   File Def'n Include for Clinical Observations              
. *                   Diagnosis/Procedure Details        
. *
. * File Type     :   SQL
. *
. * File Name     :   obsdapaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
OBSDAPA1   IFILE    SQL, FIXED=127, KEY="U1-8,9-11,12-14"                       
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
OBDPVIST  DIM       8      8        1     Visit number                       
OBDPCTYP  DIM       3      3        9     Coding Type 001=Principal Details
                                          002= Other Diagnosis               
                                          003= Other Procedures              
                                          004= Other Reason for Admission codes
OBDPUNIQ  DIM       3      3        12    Unique Count                       
OBDPCODE  DIM       10     10       15    Procedure or Diagnosis Code        
OBDPDATE  DIM       8      8        25    Date Entered CCYYMMDD              
OBDPTIME  DIM       8      8        33    Time Entered HH:MM:SS              
OBDPREAS  DIM       3      3        41    Reason for Admission               
OBDPOREA  DIM       3      3        44    Other reason for admission         
OBDPSPAR  DIM       80     80       47    Spare                              
.
.End of Record                      127  
.
