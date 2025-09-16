. V10.04.01 24/01/2014 DN - Increased size of PTVEHOUR and spare. CAR 272483
. V9.04.001 02/11/2005 JT                                                    
. *----------------------------------------------------------------------
. * Include Name  :   PATVENFD.INC
. *
. * Function      :   File Def'n Include for Patient System                     
. *                   Ventilation Details                
. *
. * File Type     :   SQL
. *
. * File Name     :   patvenaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
PATVENA1   IFILE    SQL, FIXED=105, KEY="U1-8,9-11,12-19,20-27"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
PTVEVISN  DIM       8      8        1     Visit Number                       
PTVEVTYP  DIM       3      3        9     Ventilation Type - Catg VE         
.                                         TCINDC1 = 1 (CPAP), 2 (Mechanical)
PTVESDAT  DIM       8      8        12    Start Date                         
PTVESTIM  DIM       8      8        20    Start Time                         
PTVEEDAT  DIM       8      8        28    End Date                           
PTVEETIM  DIM       8      8        36    End Time                           
PTVEHOUR  FORM      5.2    5        44    Hours                              
PTVEICUS  DIM       3      3        49    ICU Status - Catg IU               
PTVEISIT  DIM       3      3        52    Initiation Site - Catg II          
PTVESPAR  DIM       50     50       55    Spare variable                     
.
.End of Record                     105   
.
