. V10.00.01 27/05/2010 JP  Created for CAR 188324                               
. *----------------------------------------------------------------------
. * Include Name  :   OBSCOMFD.INC
. *
. * Function      :   File Def'n Include for Clinical Observations              
. *                   Comorbidities and Complications    
. *
. * File Type     :   SQL
. *
. * File Name     :   obscomaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
OBSCOMA1   IFILE    SQL, FIXED=527, KEY="U1-8"                                  
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
OBCOVISN  DIM       8      8        1     Visit Number                       
OBCOLTAC  DIM       1      1        9     Long Term Anticoagulant Thrpy 1=Yes
OBCODIAB  DIM       1      1        10    Diabetes 1=Type1 2=Type2 3=Type2 In
OBCOCCAL  DIM       1      1        11    CAL 1=Yes                          
OBCOASTH  DIM       1      1        12    Asthma 1=Yes                       
OBCOCIHD  DIM       1      1        13    IHD 1=Yes                          
OBCOCCCF  DIM       1      1        14    CCF 1=Yes                          
OBCOHYPR  DIM       1      1        15    Hypertension 1=Yes                 
OBCOWOUN  DIM       1      1        16    Wound Infection 1=Yes              
OBCOHAEM  DIM       1      1        17    Heamorrhage/Heamatoma 1=Yes        
OBCOCMPE  DIM       1      1        18    PE 1=Yes                           
OBCOCUTI  DIM       1      1        19    UTI 1=Yes                          
OBCOCHIN  DIM       1      1        20    Chest Infection 1=Yes              
OBCOCDVT  DIM       1      1        21    DVT 1=Yes                          
OBCOPRUL  DIM       1      1        22    Pressure Sore/Ulcer 1=Yes          
OBCOOTHE  DIM       1      1        23    Other                              
OBCODESC  DIM       80     80       24    Description                        
OBCOFVMO  DIM       1      1        104   Follow up VMO 1=Yes                
OBCOVMON  DIM       80     80       105   VMO Name                           
OBCOVDAT  DIM       8      8        185   VMO Date (CCYYMMDD)                
OBCOVTIM  DIM       8      8        193   VMO Time (hh:mm:ss)                
OBCOFLMO  DIM       1      1        201   Follow Up LMO 1=Yes                
OBCOLMON  DIM       80     80       202   LMO Name                           
OBCOLDAT  DIM       8      8        282   LMO Date (CCYYMMDD)                
OBCOLTIM  DIM       8      8        290   LMO Time (hh:mm:ss)                
OBCOFOTH  DIM       1      1        298   Follow Up Other 1=Yes              
OBCOOTHN  DIM       80     80       299   Other Name                         
OBCOODAT  DIM       8      8        379   Other Date (CCYYMMDD)              
OBCOOTIM  DIM       8      8        387   Other Time (hh:mm:ss)              
OBCOWEBC  DIM       10     10       395   Web User ID Created (websecaf)     
OBCODATC  DIM       8      8        405   Date Created (CCYYMMDD)            
OBCOTIMC  DIM       8      8        413   Time Created (hh:mm:ss)            
OBCOWEBU  DIM       10     10       421   Web User ID Updated (websecaf)     
OBCODATU  DIM       8      8        431   Date Updated (CCYYMMDD)            
OBCOTIMU  DIM       8      8        439   Time Updated (hh:mm:ss)            
OBCOSPAR  DIM       80     80       447   Spare                              
.
.End of Record                      527  
.
