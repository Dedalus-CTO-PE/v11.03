. V10.02.01 26/07/2011 SA C-240684 Added Event No. to index                     
. V9.09.001 07/08/2007 ML  Added LGATHOSC, LGACATDR & LGACPRPF                  
. V9.05.000 02/03/2006 ML  New FD/IO for Alternate Legacy system                
. *----------------------------------------------------------------------
. * Include Name  :   LEGALTFD.INC
. *
. * Function      :   File Def'n Include for Legacy Data System                 
. *                   Alternate (Customised) Legacy Mast 
. *
. * File Type     :   SQL
. *
. * File Name     :   legaltaf.dat
. *
. * Index Values  :   KEY32                                                  
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
LEGALTA1   IFILE    SQL, FIXED=251, KEY="U1-8,9-16,17-24,25-32"                 
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
LGATURNO  DIM       8      8        1     Patient's U/R Number (patma1af)    
LGATADAT  DIM       8      8        9     Event Date (ccyymmdd)              
LGATATIM  DIM       8      8        17    Event Time (HH:MM:SS)              
LGATEVNO  DIM       8      8        25    Event No. - A&E, Outpat, Inpatient 
LGATTYPE  FORM      1      2        33    Event Type - 1=AAE, 2=O/P 3=Inpat  
LGATSTAT  DIM       30     30       35    Status                             
LGATDDRG  DIM       4      4        65    DRG Code                           
LGATDDAT  DIM       8      8        69    End/Discharge Date (ccyymmdd)      
LGATDTIM  DIM       8      8        77    End/Discharge Time (HH:MM:SS)      
LGATHOSC  DIM       5      5        85    Hospital Code                      
LGATATDR  DIM       20     20       90    Attending Doctor (free text)       
LGATPRPF  DIM       120    120      110   Procedures Performed               
LGATSPAR  DIM       21     21       230   Spare Variable                     
.
.End of Record                      251  
.
