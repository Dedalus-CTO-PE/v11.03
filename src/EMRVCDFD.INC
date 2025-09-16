. V11.01.01 20/07/2021 JT C-0905305 Added 006 - AECC Class
. V10.00.01 14/04/2010 SA  Added EMVCFTXT and Increased EMVCSPAR (CAR 219933)
. V9.08.001 01/06/2007 PV  Added EMVCSUBN EMVCEDAD CAR SJOG ED Billing
. V9.03.002 09/08/2004 DS  Added emvccdat,emvcctim,emvccuid
. V9.02.001 14/11/2002 EC Added EMVCDELE
. V5.07.000 14/10/1999 NMH Port to 5.07
. V6.06.001 19/05/1999 kcn Created FD
. V6.06.002 25/05/1999 kcn Increment Time size from 6 to 8
. *----------------------------------------------------------------------
. * Include Name  :   EMRVCDFD.INC
. *
. * Function      :   File Def'n Include for Emergency System                   
. *                   Emergency Visit Coding Table       
. *
. * File Type     :   SQL
. *
. * File Name     :   emrvcdaf.dat
. *
. * Index Values  :   KEY14   KEY17                                          
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
EMRVCDA1   IFILE    SQL, FIXED=430, KEY="U1-8,9-11,12-14"
EMRVCDA2   IFILE    SQL, FIXED=430, KEY="U1-8,9-11,27-29,12-14"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
EMVCVIST  DIM       8      8        1     Visit Number                       
EMVCTYPE  DIM       3      3        9     Coding Type (Cat wl)               
.                                         004 - Procedure                      
.                                         005 - Diagnosis                      
.                                         006 - AECC Class                     
EMVCUNIQ  DIM       3      3        12    Unique Record Number               
EMVCCSYS  FORM      2      2        15    Coding System                      
.                                         1 - paticddf                         
.                                         2 - paticdof                         
.                                         3 - patitemn                         
.                                         4 - emrproaf                         
.                                         5 - emricdaf                         
.                                         6 - priitemf                         
EMVCMNCD  DIM       10     10       17    Main Code                          
EMVCSEQU  DIM       3      3        27    Sequencing                         
EMVCDATE  DIM       8      8        30    Date                               
EMVCTIME  DIM       8      8        38    Time                               
EMVCUDC1  DIM       3      3        46    User Defined Code 1                
EMVCUDC2  DIM       3      3        49    User Defined Code 2                
EMVCUDC3  DIM       3      3        52    User Defined Code 3                
EMVCUDC4  DIM       3      3        55    User Defined Code 4                
EMVCUDR1  DIM       40     40       58    User Defined Reference 1           
EMVCUDR2  DIM       40     40       98    User Defined Reference 2           
EMVCUYN1  DIM       1      1        138   User Defined Y/N 1                 
EMVCUYN2  DIM       1      1        139   User Defined Y/N 2                 
EMVCUYN3  DIM       1      1        140   User Defined Y/N 3                 
EMVCUYN4  DIM       1      1        141   User Defined Y/N 4                 
EMVCUDA1  FORM      12.2   8        142   User Defined Amount 1              
EMVCUDA2  FORM      12.2   8        150   User Defined Amount 2              
EMVCUDA3  FORM      12.2   8        158   User Defined Amount 3              
EMVCUDA4  FORM      12.2   8        166   User Defined Amount 4              
EMVCUDD1  DIM       8      8        174   User Defined Date 1                
EMVCUDD2  DIM       8      8        182   User Defined Date 2                
EMVCUDD3  DIM       8      8        190   User Defined Date 3                
EMVCUDD4  DIM       8      8        198   User Defined Date 4                
EMVCUDT1  DIM       8      8        206   User Defined Time 1                
EMVCUDT2  DIM       8      8        214   User Defined Time 2                
EMVCUDT3  DIM       8      8        222   User Defined Time 3                
EMVCUDT4  DIM       8      8        230   User Defined Time 4                
EMVCEFLG  DIM       1      1        238   Send in Extract Flag               
EMVCLUDT  DIM       8      8        239   Last Update Date                   
EMVCLUTM  DIM       8      8        247   Last Update Time                   
EMVCWUSR  DIM       10     10       255   Last Update Web User               
EMVCDELE  DIM       1      1        265   Delete Flag 1=Deleted              
EMVCCDAT  DIM       8      8        266   Date Record Created (ccyymmdd)     
EMVCCTIM  DIM       8      8        274   Time Record Created (hh:mm:ss)     
EMVCCUID  DIM       10     10       282   WEB User ID Created (websecaf)     
EMVCSUBN  DIM       3      3        292   Sub Item Number                    
EMVCEDAD  DIM       10     10       295   Attending Doctor                   
EMVCFTXT  DIM       100    100      305   Free Format Text                   
EMVCSPAR  DIM       25     25       405   Spare                              
.
.End of Record                      430  
.
