. V9.03.005 01/12/2003 LV  Added Received From Code & removed No of Times Run
. V9.03.003 01/12/2003 JH
. V9.03.004 01/12/2003 JH
. V9.03.006 04/12/2003 EC  Added RCBNCHQA                                    
. V9.03.007 12/01/2004 SB  Changed Cheque Number from 14 to 15               
. *----------------------------------------------------------------------
. * Include Name  :   RCPBNKFD.INC
. *
. * Function      :   File Def'n Include for Receipting                         
. *                   Receipting Bank Header File        
. *
. * File Type     :   SQL
. *
. * File Name     :   rcpbnkaf.dat
. *   ***** Programmer's Note **************************************
. *   *  Any changes made to this FD may also affect TMPBNKFD/IO.  *
. *   **************************************************************
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
RCPBNKA1   IFILE    SQL, FIXED=196, KEY="U1-12"                                 
RCPBNKA2   IFILE    SQL, FIXED=196, KEY="U13-20,29-34,1-12"                     
RCPBNKA3   IFILE    SQL, FIXED=196, KEY="U64-71,29-34,1-12"                     
RCPBNKA4   IFILE    SQL, FIXED=196, KEY="U48-55,64-71,29-34,1-12"               
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
RCBNRECN  DIM       12     12       1     Receipt Number                     
RCBNTDAT  DIM       8      8        13    Transaction Date (CCYYMMDD)        
RCBNTOTP  FORM      12.2   8        21    Total Payment                      
RCBNCDRW  DIM       6      6        29    Cash Drawer                        
RCBNMHOS  DIM       3      3        35    Multi Hospital Id (pathspaf)       
RCBNMDHS  DIM       2      2        38    Multi Database Hosp Id (pathospf)  
RCBNTTYP  DIM       1      1        40    Received From Type                 
.                                         0 = Patient
.                                         1 = Health Fund
.                                         2 = Insurance Company
.                                         3 = Government Department
.                                         4 = Health Fund Group
RCBNRCOD  DIM       6      6        41    Received From Code                 
RCBNSTAT  DIM       1      1        47    Status                             
.                                         0 = Not Banked
.                                         1 = Cancelled
.                                         2 = Banked
RCBNBDAT  DIM       8      8        48    Bank Deposit Date (CCYYMMDD)       
RCBNBTIM  DIM       8      8        56    Bank Deposit Time (hh:mm:ss)       
RCBNRDAT  DIM       8      8        64    Reconciliation Date (CCYYMMDD)     
RCBNRTIM  DIM       8      8        72    Reconciliation Time (hh:mm:ss)     
RCBNCHQA  DIM       15     15       80    Cheque Account Number              
RCBNCDAT  DIM       8      8        95    Date Record Created (CCYYMMDD)     
RCBNCTIM  DIM       8      8        103   Time Record Created (hh:mm:ss)     
RCBNCUID  DIM       10     10       111   Web User Id Created (websecaf)     
RCBNUDAT  DIM       8      8        121   Date Record Updated (CCYYMMDD)     
RCBNUTIM  DIM       8      8        129   Time Record Updated (hh:mm:ss)     
RCBNUUID  DIM       10     10       137   Web User Id Updated (websecaf)     
RCBNSPAR  DIM       49     49       147   Spare                              
.
.End of Record                      196  
.
