. V6.05.001 07/04/1999                                                       
. *----------------------------------------------------------------------
. * Include Name  :   HL7BMTFD.INC
. *
. * Function      :   File Def'n Include for Health Level 7                     
. *                   Broadcast Message Holding Table    
. *
. * File Type     :   SQL
. *
. * File Name     :   hl7bmtaf.dat
. *
. * Keys          :   KEY35
. *
. * Modifications :
. *       05/01/2004 Steve Armstrong CAR 47245
. *                  Added HLBMPGID & HLBMEROR
. *       29/10/2001 Steve Armstrong 
. *                  Added HLBMSTAT, HLBMMESG & HLBMFLAG
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
HL7BMTA1   IFILE    SQL, FIXED=194, KEY="U1-1,2-9,10-15,16-35"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
HLBMSTAT  DIM       1      1         1    Message Status
.                                             T = To be processed
.                                             R = Rejected
HLBMDATE  DIM       8      8         2    Transaction Date                   
HLBMTIME  DIM       6      6        10    Transaction Time                   
DHLBMMSG  DIM       20     20       16    Message Id
HLBMTYPE  DIM       3      3        36    Transaction Type                   
HLBMURNO  DIM       8      8        39    U/R Number                         
HLBMVISN  DIM       8      8        47    Visit Number                       
HLBMTKEY  DIM       80     80       55    Transaction Key                    
HLBMFLAG  DIM       1      1       135    Flag
.                                           For CUA (update alias)
.                                              1 = Add an alias
.                                              2 = Delete an alias
HLBMPGID  DIM       8      8       136    Program Id
HLBMEROR  DIM       40     40      144    Rejection Error Message
HLBMSPAR  DIM       10     10      184    Spare                              
.
.End of Record                     194  
.
. Redefine fields
. ----------------
HLBMMESG  FORM      20
