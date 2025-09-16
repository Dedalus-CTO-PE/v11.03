. V9.04.001 03/02/2005 EC  Created FD CAR 56680                              
. *----------------------------------------------------------------------
. * Include Name  :   OUTBOXFD.INC
. *
. * Function      :   File Def'n Include for Outpatients                        
. *                   Unavailable slot booking comments  
. *
. * File Type     :   SQL
. *
. * File Name     :   outboxaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
OUTBOXA1   IFILE    SQL, FIXED=149, KEY="U1-6,7-12,13-20,21-25,26-28"           
FILBOXA1   INIT     "boxaf"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
OTBXSITE  DIM       6      6        1     Site Code                          
OTBXCLIN  DIM       6      6        7     Clinic ID                          
OTBXDATE  DIM       8      8        13    Date (CCYYMMDD)                    
OTBXSTRT  DIM       5      5        21    Start (HH:MM)                      
OTBXSLOT  DIM       3      3        26    Slot                               
OTBXCOMM  DIM       70     70       29    Comment                            
OTBXSPAR  DIM       50     50       99    Spare                              
.
.End of Record                      149  
.
