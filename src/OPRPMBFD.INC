. V11.01.01 15/02/2021 TN C-0888639 Extended DOPPMCNT from DIM 2 to DIM 3       
. V10.11.01 21/11/2017 DS C-0846231 Added OPPMREFN                              
. V10.04.02 14/01/2014 JT C-249828 Added GST Applicable and GST Code            
. V10.04.01 23/12/2013 PA C-294375 Moved Service Number out of Spare Variable   
. V9.00.002 08/06/2001 JT                                                       
. *----------------------------------------------------------------------
. * Include Name  :   OPRPMBFD.INC
. *
. * Function      :   File Def'n Include for Theatre System                     
. *                   Patient MBS Table                  
. *
. * File Type     :   SQL
. *
. * File Name     :   oprpmbaf.dat
. *
. * Index Values  :   KEY14   KEY23                                          
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
OPRPMBA1   IFILE    SQL, FIXED=85, KEY="U1-10,11-11,21-23"
OPRPMBA2   IFILE    SQL, FIXED=85, KEY="U12-20,1-10,11-11,21-23"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
OPPMUNID  DIM       10     10       1     Unique ID.                         
OPPMTMNO  DIM       1      1        11    Team NUmber                        
OPPMCMBS  DIM       9      9        12    CMBS Item Code                     
DOPPMCNT  DIM       3      3        21    Counter                            
OPPMSERV  DIM       4      4        24    Quantity/Service number            
OPPMGSTA  FORM      1      2        28    Is GST applicable to this item?    
.                                         0-No GST, 1-Yes, 2-Unknown GST       
OPPMGSTC  DIM       6      6        30    GST Payable Code                   
OPPMREFN  DIM       12     12       36    Reference Number                   
OPPMSPAR  DIM       37     37       48    Spare Variable                     
.
.End of Record                      85   
.
.Redefine Key Variables
.----------------------
OPPMCNTR  FORM      3    
