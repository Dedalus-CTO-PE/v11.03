. V9.11.001 13/01/2009 EC  Added OPTSUY01 CAR 169339                         
. V9.02.02  14/01/2002 Ashwin Assigned 0 = Operating Surgeon.                   
. V9.02.01  03/01/2002 Ashwin Add OPTSINST                                      
. v9.00.001 31/05/2001
. *----------------------------------------------------------------------
. * Include Name  :   OPRTSMFD.INC
. *
. * Function      :   File Def'n Include for Theatre System                     
. *                   Theatre Staff Member Table         
. *
. * File Type     :   SQL
. *
. * File Name     :   oprtsmaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
OPRTSMA1   IFILE    SQL, FIXED=69, KEY="U1-10,11-11,12-13,14-19,20-27,28-35"    
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
OPTSUNID  DIM       10     10       1     Unique ID.                         
OPTSTMNO  DIM       1      1        11    Team Number                        
DOPTSSIN  DIM       2      2        12    Staff Type                         
.                                         0 = Operating Surgeon
.                                         1 = Doctor
.                                         2 = Nurse
.                                         3 = Other
OPTSSCDE  DIM       6      6        14    Staff Code (Doctor or Nurse code)  
OPTSSDAT  DIM       8      8        20    Start Date (CCYYMMDD)              
OPTSSTIM  DIM       8      8        28    Start Time (HH:MM:SS)              
OPTSEDAT  DIM       8      8        36    End Date (CCYYMMDD)                
OPTSETIM  DIM       8      8        44    End Time (HH:MM:SS)                
OPTSSLEV  DIM       3      3        52    Supervisor Level (Category OS)     
OPTSSTYP  DIM       3      3        55    Staff Category Code                
.                                         Doctor Category is  OP
.                                         Nurse Category is   ON
.                                         Other Category is OF
OPTSINST  DIM       1      1        58    Final Instrument Count             
OPTSUY01  DIM       1      1        59    User Defined Y/N 1                 
.                                         0=No 1=Yes
OPTSSPAR  DIM       9      9        60    Spare                              
.
.End of Record                      69   
.
.Redefine Key Variables
.----------------------
OPTSSIND  FORM      2    
