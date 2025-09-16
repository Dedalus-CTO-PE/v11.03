. V9.08.001 04/12/2006 EC  Created FD CAR 126779
. V9.08.002 02/01/2007 EC  Added NZRPRPIS CAR 126779
. V9.08.003 03/01/2007 EC  Added Index 2 CAR 126779                          
. *----------------------------------------------------------------------
. * Include Name  :   NZPRPIFD.INC
. *
. * Function      :   File Def'n Include for New Zealand Private                
. *                   Related Provider Information       
. *
. * File Type     :   SQL
. *
. * File Name     :   nzprpiaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
NZPRPIA1   IFILE    SQL, FIXED=287, KEY="U1-8,9-16,17-36"                       
NZPRPIA2   IFILE    SQL, FIXED=287, KEY="U187-194"                              
NZPRPIA3   IFILE    SQL, FIXED=287, KEY="U66-66,187-194"                        
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
NZRPADMN  DIM       8      8        1     Admission Number                   
NZRPINVN  DIM       8      8        9     Invoice Number                     
NZRPRINV  DIM       20     20       17    RP Invoice Number                  
NZRPDATE  DIM       8      8        37    RP Invoice Date (ccyymmdd)         
NZRPAMNT  FORM      12.2   8        45    RP Invoice Amount                  
NZRPPTYP  DIM       3      3        53    Provider Type (nzpptyaf)           
NZRPPCOD  DIM       10     10       56    Provider Code (pmshcpaf)           
NZRPAPIS  DIM       1      1        66    AP Interface Status                
.                                         " " or 0=Unsent 1=Sent 2=Paid
.                                         3=Info
NZRPAPDT  DIM       8      8        67    AP Interface Date (ccyymmdd)       
NZRPCOMT  DIM       60     60       75    Comment                            
NZRPCDAT  DIM       8      8        135   Date Created (ccyymmdd)            
NZRPCTIM  DIM       8      8        143   Time Created (hh:mm:ss)            
NZRPCUID  DIM       10     10       151   Web User Id Created (websecaf)     
NZRPUDAT  DIM       8      8        161   Date Updated (ccyymmdd)            
NZRPUTIM  DIM       8      8        169   Time Updated (hh:mm:ss)            
NZRPUUID  DIM       10     10       177   Web User Id Updated (websecaf)     
NZRPRPIS  DIM       8      8        187   Related Provider Invoice Sequence  
NZRPSPAR  DIM       92     92       195   Spare                              
.
.End of Record                      287  
.
