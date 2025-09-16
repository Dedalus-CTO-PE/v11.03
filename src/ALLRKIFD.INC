. V10.06.01 13/03/2015 EC C-303890 Created FD                                   
. *----------------------------------------------------------------------
. * Include Name  :   ALLRKIFD.INC
. *
. * Function      :   File Def'n Include for Allied Health                      
. *                   Procedure Key Word Index           
. *
. * File Type     :   SQL
. *
. * File Name     :   allrkiaf.dat
. *
. * Index Values  :   KEY27   KEY27                                          
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
ALLRKIA1   IFILE    SQL, FIXED=53, KEY="U1-3,4-12,13-27"                        
ALLRKIA2   IFILE    SQL, FIXED=53, KEY="U1-3,13-27,4-12"                        
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
ALRKDEPT  DIM       3      3        1     Department (alldepaf)              
ALRKPROC  DIM       9      9        4     Procedure Code                     
ALRKKKWD  DIM       15     15       13    Key Word                           
ALRKSPAR  DIM       25     25       28    Spare                              
.
.End of Record                      53   
.
