. V10.15.01 17/10/2019 RPH C-0861257 Added OTDNREQC                             
. *----------------------------------------------------------------------
. * Include Name  :   OUTDANFD.INC
. *
. * Function      :   File Def'n Include for Outpatients                        
. *                   Outpatient Direct Actions          
. *
. * File Type     :   SQL
. *
. * File Name     :   outdanaf.dat
. *
. * Index Values  :   KEY34   KEY34   KEY34   KEY42                          
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
OUTDANA1   IFILE    SQL, FIXED=257, KEY="U1-8,9-16,17-24,25-26,27-34"
OUTDANA2   IFILE    SQL, FIXED=257, KEY="U1-8,27-34,25-26,9-16,17-24"
OUTDANA3   IFILE    SQL, FIXED=257, KEY="U9-16,17-24,25-26,1-8,27-34"
OUTDANA4   IFILE    SQL, FIXED=257, KEY="U205-212,1-8,9-16,17-24,25-26,27-34"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
OTDNURNO  DIM       8      8        1     U/R Number                         
OTDNADAT  DIM       8      8        9     Action Date (CCYYMMDD)             
OTDNATIM  DIM       8      8        17    Action Time (HH:MM:SS)             
OTDNATYP  DIM       2      2        25    Action Type                        
.                                         " 0" = PMI Update                    
.                                         " 1" = Appointment Message           
.                                         " 2" = Reschedule Appointment        
.                                         " 3" = Cancel Appointment            
.                                         " 4" = Pending Reschdule             
.                                         " 5" = Closed Referral               
OTDNVISN  DIM       8      8        27    Visit Number                       
OTDNCOMP  DIM       1      1        35    Completed                          
.                                         "0" = No, "1" = Yes                  
OTDNOUTC  DIM       3      3        36    Action Outcome (Cat FZ)            
OTDNCOMM  DIM       80     80       39    Action Comment                     
OTDNCOMD  DIM       8      8        119   Date Action Completed (CCYYMMDD)   
OTDNCOMT  DIM       8      8        127   Time Action Completed (HH:MM:SS)   
OTDNCOMU  DIM       10     10       135   Web User Id Completed (websecaf)   
OTDNCDAT  DIM       8      8        145   Date Record Created (CCYYMMDD)     
OTDNCTIM  DIM       8      8        153   Time Record Created (HH:MM:SS)     
OTDNCUID  DIM       10     10       161   Web User ID Created (websecaf)     
OTDNUDAT  DIM       8      8        171   Date Record Updated (CCYYMMDD(     
OTDNUTIM  DIM       8      8        179   Time Record Updated (HH:MM:SS)     
OTDNUUID  DIM       10     10       187   Web User Id Updated (websecaf)     
OTDNREFN  DIM       8      8        197   AH Referral Number                 
OTDNVDAT  DIM       8      8        205   Visit Date (CCYYMMDD)              
OTDNREQC  DIM       3      3        213   Requestor (Category rs)            
OTDNSPAR  DIM       41     41       216   Spare Variable                     
.
.End of Record                      257  
.
