. V9.03.001 01/03/2004 EC  Added allied health and emergency paths CAR 46515 
. *----------------------------------------------------------------------
. * Include Name  :   CCSHLCFD.INC
. *
. * Function      :   File Def'n Include for Clinical Costing System            
. *                   Hospital Database Locations        
. *
. * File Type     :   SQL
. *
. * File Name     :   ccshlcaf.dat
. *
. * Change History
. *   v9.02.01        27.Jun.2002   Glenn Saunders  (port to v9.xx)
. *                   Amend to incorporate Southland specific fields.
. *   V9.02.00         2.May.2002   Glenn Saunders  (port to v9.xx)
. *
. *   VF.01.001        8.May.2000   Sandra Barcham
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
CCSHLCA1   IFILE    SQL, FIXED=813, KEY="U1-2"                                  
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
CCHLHCD   DIM       2      2        1     Hospital Code                      
CCHLPMA   DIM       30     30       3     patmastf - Directory               
CCHLPTR   DIM       30     30       33    pattranf - Directory               
CCHLPMI   DIM       30     30       63    patmissf - Directory               
CCHLPDS   DIM       30     30       93    patdschf - Directory               
CCHLPVI   DIM       30     30       123   patvisaf - Directory               
CCHLPMO   DIM       30     30       153   patmoprf - Directory               
CCHLPMD   DIM       30     30       183   patmdisf - Directory               
CCHLADE   DIM       30     30       213   aaedetaf - Directory               
CCHLADI   DIM       30     30       243   aaedisaf - Directory               
CCHLOSI   DIM       30     30       273   outsitaf - Directory               
CCHLOBB   DIM       30     30       303   outbokbf - Directory               
CCHLCDP   DIM       30     30       333   ccidptaf - Directory               
CCHLPMX   DIM       30     30       363   patmasxf - Directory               
CCHLPIN   DIM       30     30       393   patinvrf - Directory               
CCHLPDT   DIM       30     30       423   patdtraf - Directory               
CCHLPCD   DIM       30     30       453   patcodef - Directory               
CCHLPMB   DIM       30     30       483   patmmbsf - Directory               
CCHLPDC   DIM       30     30       513   patdoctf - Directory               
CCHLPIC   DIM       30     30       543   paticuaf - Directory (Southland)   
CCHLARF   DIM       30     30       573   allrefaf - Directory               
CCHLENC   DIM       30     30       603   allencaf - Directory               
CCHLEVS   DIM       30     30       633   emrvisaf - Directory               
CCHLOPR   DIM       30     30       663   oprdetaf - Directory               
CCHLSPA   DIM       120    120      693   Spare                              
.
.End of Record                      813  
.
