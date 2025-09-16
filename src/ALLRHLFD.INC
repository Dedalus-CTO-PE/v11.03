. V10.01.02 22/03/2011 EC  Added Type 05  CAR 239576                       
. V10.01.01 28/02/2011 SA  Moved ALRHCOD2 to table definition CAR 220289
. V10.00.01 05/05/2010 EC  Added ALRHCOD2 CAR 220289                       
. V9.12.003 23/10/2009 EC  Added Created By CAR 207550                       
. V9.12.002 22/10/2009 SS  Added Index 2                                        
. V9.12.001 14/10/2009 EC  Created FD CAR 207550                                
. *----------------------------------------------------------------------
. * Include Name  :   ALLRHLFD.INC
. *
. * Function      :   File Def'n Include for Allied Health                      
. *                   Referral Health Conditions         
. *
. * File Type     :   SQL
. *
. * File Name     :   allrhlaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
ALLRHLA1   IFILE    SQL, FIXED=107, KEY="U1-8,9-10,11-13"                       
ALLRHLA2   IFILE    SQL, FIXED=107, KEY="U14-22,1-8,9-10,11-13"                 
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
ALRHVISN  DIM       8      8        1     Referral/Visit Number              
ALRHTYPE  DIM       2      2        9     Type                               
.                                         "01" - Health Condition 
.                                         "02" - Other Factor
.                                         "03" - Referral out 
.                                         "04" - Referral In
.                                         "05" - Transition Type
ALRHUNIQ  DIM       3      3        11    Unique Number                      
ALRHCODE  DIM       9      9        14    Code                               
.                                         Health Condition alldiaaf (Type 01)
.                                         Other Factor     allprraf (Type 02)
.                                         Service Type Cat zU       (Type 03)
.                                         Service Type Cat zU       (Type 04)
.                                         Transition Type Cat zW    (Type 05)
ALRHDATE  DIM       8      8        23    Date (CCYYMMDD)                    
ALRHCDAT  DIM       8      8        31    Date Record Created (CCYYMMDD)     
ALRHCTIM  DIM       8      8        39    Time Record Created (HH:MM:SS)     
ALRHCUID  DIM       10     10       47    WEB User ID Created (websecaf)     
ALRHCOD2  DIM       9      9        57    Code  2
.                                         Blank                     (Type 01)
.                                         Blank                     (Type 02)
.                                         Referral Place Cat zV     (Type 03)
.                                         Referral Place Cat zV     (Type 04)
ALRHSPAR  DIM       41     41       66    Spare                              
.
.End of Record                      107  
