. 5.04 .001 16/04/1997                                                       
. *----------------------------------------------------------------------
. * Include Name  :   WATHISFD.INC
. *
. * Function      :   File Def'n Include for Waiting List                       
. *                   Waiting List History File          
. *
. * File Type     :   SQL
. *
. * File Name     :   wathisaf.dat
. *
. * Modifications :
. *       V10.12.01 18/06/2018  Richa Phogat  TSK 0854035
. *                 Added code 36, 37 for WTHIBSCD
. *       V9.10.01  01/05/2008  Jill Habasque CAR 166097
. *                 Added Assessor code                                    
. *       V9.08.01  08/06/2007  Jill Habasque CAR 56032
. *                 Added confirmed adm date and old ur number             
. *       V9.04.02  14/10/2005  Mike Laming  CAR 52354
. *                 Take off the 9 chars from WTHISPAR that was forgotten
. *       V9.04.01  26/09/2005  Mike Laming  CAR 52354
. *                 Added status "35" to WTHINSCD - Booking Status Code
. *                 Added WTHICSST - Consent Obtained, 
. *                       WTHICSDT - Consent Changed date
. *                     also SAVECSST & SAVECSDT 
. *       V9.03.02  08/06/2004 Jill Habasque CAR 34308
. *                 Added old procedure code
. *       V9.03.01  23/06/2003 Ebon Clements CAR 40610
. *                 Added SAVEDTAD  
. *       V9.02.05  25/02/2003 Jill Habasque SRF 34660
. *                 Added HIDE and PCAT       
. *       V9.02.04  03/02/2003 Jill Habasque SRF 34660
. *                 Added NBRS fields         
. *       V9.02.03  09/07/2002 Ebon Clements 17676
. *                 Added SAVEBOKC,SAVEBCAN
. *       V9.02.02  28/06/2002 Ebon Clements 17676 17694 17700
. *                 Added SAVDOCTR,SAVEBOOK,SAVEUNIT,SAVESTAT and
. *                 fixed IO for WTHIBCAN
. *       V9.02.01  31/01/2002 Ebon Clements 
. *                 Added WTHIBOOK,WTHIDOCT,WTHIBCAN,WTHIUNIT,WTHIPLST
. *                       WTHISTAT,WTHIDAT1,WTHIDTAD,WTHIPODT,WTHICODT
. *                 Added third index
. *       V5.10.00  02/05/2001 Dean Cramer
. *                 Add  WTHIADTE, WTHIATIM & WTHIWEBI          
. *       V5.08.01  08/06/2000 Tonii Tang
. *                 Added SAVEBSCD
. *       V5.08.00  07/06/2000 Tonii Tang
. *                 Added WTHIBSCD, WTHIRECS & index 2 (WATHISA2)
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
WATHISA1   IFILE   SQL, FIXED=314, KEY="U1-8,9-17,18-19,20-27,28-31"
WATHISA2   IFILE   SQL, FIXED=314, KEY="U76-76,1-8,9-17,18-19,20-27,28-31"
WATHISA3   IFILE   SQL, FIXED=314, KEY="U102-109,1-8,9-17,18-19,20-27,28-31"
WATHISA4   IFILE   SQL, FIXED=314, KEY="U1-8,9-17,18-19,20-27,94-101,28-31"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
WTHIURNO  DIM       8      8        1     U/R Number                         
WTHIPROC  DIM       9      9        9     Procedure Code                     
DWTHIPCN  DIM       2      2        18    Procedure Count                    
WTHIEDAT  DIM       8      8        20    Effective From Date                
DWTHIUCN  DIM       4      4        28    Unique Count                       
WTHIPRIO  DIM       3      3        32    Priority (Cat TP)                  
WTHIRANK  FORM      6      4        35    Patient Rank                       
WTHIDAT2  DIM       8      8        39    Date Last Reviewed (CCYYMMDD)      
WTHIDAT3  DIM       8      8        47    Scheduled Adm Date (CCYYMMDD)      
WTHIRDT3  DIM       3      3        55    Reason Change Scheduled Adm Date   
WTHIBSCD  DIM       2      2        58    Booking Status Code
.                                           01 - Booked (NBRS)
.                                           02 - Given Certainty (Scheduled and
.                                                Date Scheduled for Admission
.                                                Entered) (NBRS)
.                                           03 - Wait Listed (NBRS)
.                                           04 - Care and Review (NBRS)
.                                           05 - Cancelled Booking (NBRS)
.                                           06 - Rebooked (NBRS)
.                                           07 - Rank Change (NBRS)
.                                           20 - Exited
.                                           21 - Status Changed (WEB)
.                                           22 - Unit Changed (WEB)
.                                           30 - Take Up Booking (WEB)
.                                           31 - Doctor Change   (WEB)
.                                           32 - Unremove        (WEB)
.                                           33 - Admitted        (WEB)
.                                           34 - Changed Procedure code(WEB)
.                                           35 - Changed Consent Status(WEB)
.                                           36 - Provisional Adm Date Changed
.                                           37 - Unadmitted
WTHIDCGV  DIM       8      8        60    Date certainty given
WTHIDBFT  DIM       8      8        68    Date booked for treatment
WTHIRECS  DIM       1      1        76    Record Sent Flag
.                                         "N" for No, "Y" for Yes
WTHIRTYP  DIM       1      1        77    A=add, C=Change D=Delete
.                                         E=Erase sp=don't include in NBR
WTHIRCDT  DIM       8      8        78    Rank change date
WTHIBMDT  DIM       8      8        86    Date booking made
WTHIETIM  DIM       8      8        94    Effective Time (hh:mm:ss)
WTHIADTE  DIM       8      8       102    Alteration Date
WTHIATIM  DIM       5      5       110    Alteration Time
WTHIWEBI  DIM      10      10      115    Web User ID who made Alteration
WTHIBCAN  DIM       3      3       125    Booking Cancellation Reason (BC)
WTHIBOOK  DIM       8      8       128    Booking Number
WTHIDOCT  DIM       6      6       136    Attending Doctor
WTHIBOKC  DIM       3      3       142    Canc Booking Reason Cat BE
WTHIUNIT  DIM       3      3       145    Unit/Clinic Cat WU
WTHIPLST  DIM       3      3       148    Patient List. Status (PRS/2) Cat VL
WTHISTAT  DIM       1      1       151    Procedure Status
WTHIDAT1  DIM       8      8       152    Date on List (ccyymmdd)
WTHIDTAD  DIM       8      8       160    Decision to Admit Date (ccyymmdd)
WTHIPODT  DIM       8      8       168    Proposed Op Date (ccyymmdd)
WTHICODT  DIM       8      8       176    Confirmed Operation Date (ccyymmdd)
WTHIDRSA  DIM       8      8       184    Date of ref for FSA
WTHIDOSA  DIM       8      8       192    Date of FSA
WTHIPHSP  DIM       3      3       200    Purchaser
WTHITRAG  DIM       4      4       203    Treatment Agency
WTHIPCHS  DIM       3      3       207    Health Specialty (Cat A WMPCAT)
WTHIBPRO  DIM       2      2       210    Booked procedure (WTWPHDPE - watproaf)
WTHIDTEC  DIM       8      8       212    Date of exit cat (DDATE or WMDATE4)
WTHISPFL  DIM       3      3       220    Stage/Planned flag (WMPTY - wattr1af)
WTHIBRSR  DIM       3      3       223    Booking ref source 
.                                         WTCNBRSR (Category W1-4 or X5-8)
WTHIHIDE  DIM       1      1       226    Hide record in history (" "=No 1=Yes)
WTHIOLDP  DIM       9      9       227    Old Procedure Code
WTHIPCHG  DIM       3      3       236    Reason for change PPP (Cat WP)
WTHICSST  DIM       1      1       239    Consent Obtained
.                                         (N=No Y=Yes)
WTHICSDT  DIM       8      8       240    Consent Change Date (ccyymmdd)
WTHICNFA  DIM       8      8       248    Confirmed adm date (bkreedat)
WTHIOLDU  DIM       8      8       256    Old UR Number                 
WTHIASSR  DIM       10     10      264    Assessor code (pmshcpaf)
WTHISPAR  DIM       40     40      274    Spare Variable
.
.End of Record                     314  
.
.Redefine Key Variables
.----------------------
WTHIPCNT  FORM      2    
WTHIUCNT  FORM      4    
.
.Save variables        
.--------------
NBRFLAG   FORM      1
SAVEOLDP  DIM       9
SAVEPCHG  DIM       3
SAVEPRIO  DIM       3      Priority (Cat TP)                  
SAVERANK  DIM       6      Patient Rank                       
SAVEDAT2  DIM       8      Date Last Reviewed (CCYYMMDD)      
SAVEDAT3  DIM       8      Scheduled Adm Date (CCYYMMDD)      
SAVERDT3  DIM       3      Reason Change Scheduled Adm Date   
SAVESCHA  DIM       8      Scheduled Adm Date (CCYYMMDD)      
SAVEBSCD  DIM       2      Booking Status Code
SAVERCSD  DIM       2      Reason for changing scheduled admission date
SAVBMDT   DIM       8
SAVDBFT   DIM       8
SAVRCDT   DIM       8
SAVDOCTR  DIM       6
SAVEBOOK  FORM      8
SAVEUNIT  DIM       3
SAVESTAT  FORM      1
SAVEBOKC  DIM       3      
SAVEBCAN  DIM       3      
SAVEBRSR  DIM       3      
SAVEDRSA  DIM       8      
SAVEDOSA  DIM       8      
SAVEPHSP  DIM       3      
SAVEPCAT  DIM       3      
SAVEDTAD  DIM       8
SAVECSST  DIM       1
SAVECSDT  DIM       8
SAVEASSR  DIM       10
