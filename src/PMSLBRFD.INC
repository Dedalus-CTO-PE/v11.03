. V10.00.02 05/08/2010 JP  Added audit                                          
. V10.00.01 25/05/2010 JP  Created for CAR 222551                               
. *----------------------------------------------------------------------
. * Include Name  :   PMSLBRFD.INC
. *
. * Function      :   File Def'n Include for Patient System                     
. *                   Labour Details                     
. *
. * File Type     :   SQL
. *
. * File Name     :   pmslbraf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
PMSLBRA1   IFILE    SQL, FIXED=431, KEY="U1-10,11-18,19-21,22-24"               
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
PMLBUNIQ  DIM       10     10       1     Pregnancy Unique Id                
PMLBADMN  DIM       8      8        11    Admission Number                   
PMLBCNTR  DIM       3      3        19    Counter                            
PMLBAUDC  DIM       3      3        22    Audit Counter                      
PMLBONSL  DIM       3      3        25    Onset of Labour (Cat LH)           
PMLBDATL  DIM       8      8        28    Date of onset (CCYYMMDD)           
PMLBTIML  DIM       8      8        36    Time of onset (hh:mm:ss)           
PMLBMIN1  DIM       5      5        44    Minutes of 1st Stage of Labour     
PMLBDAT2  DIM       8      8        49    Date of 2nd Stage (CCYYMMDD)       
PMLBTIM2  DIM       8      8        57    Time of 2nd Stage (hh:mm:ss)       
PMLBMIN2  DIM       5      5        65    Minutes of 2nd Stage Labour        
PMLBDATR  DIM       8      8        70    Date of Rupture of Membranes       
PMLBINDI  DIM       9      9        78    Indication of Induction (ICD code) 
PMLBINDF  DIM       50     50       87    Ind of Induction Free Format       
PMLBINDO  DIM       9      9        137   Ind of Operative Delivery (ICD code
PMLBINOF  DIM       50     50       146   Ind of Operative Free Format       
PMLBANLG  DIM       3      3        196   Analgesia for Labour Ind (Cat LJ)  
PMLBPOSD  DIM       3      3        199   Position of Delivery (Cat LK)      
PMLBCOLL  DIM       3      3        202   Colour of Liquor (Cat LM)          
PMLBPRES  DIM       3      3        205   Presentation (Cat LV)              
PMLBMEMB  DIM       3      3        208   Membranes (Cat LX)                 
PMLBNVES  DIM       2      2        211   Number of Cord Vessels             
PMLBTYPB  DIM       3      3        213   Type of Birth (Cat LZ)             
PMLBPROP  DIM       3      3        216   Prophylactice Oxytocin 3rd (Cat ma)
PMLBMAN3  DIM       3      3        219   Management of 3rd Stage (Cat mb)   
PMLBPLAC  DIM       3      3        222   Placenta (Cat mc)                  
PMLBMPLA  DIM       3      3        225   Manual Removal of Placenta (Cat md)
PMLBEPIS  DIM       3      3        228   Episotomy Indicator (Cat me)       
PMLBPERI  DIM       3      3        231   Perineal Laceration Ind (Cat mf)   
PMLBPERT  DIM       3      3        234   Perineal Degree/Type (Cat mg)      
PMLBPERR  DIM       3      3        237   Perineal Repair (Cat mh)           
PMLBBLDL  DIM       4      4        240   Estimated Blood Loss (mls)         
PMLBBLTR  DIM       3      3        244   Blood Product Transfusion (Cat mi) 
PMLBDLIC  DIM       3      3        247   Disc of Lead Intrapartum Carer (mj)
PMLBDMID  DIM       10     10       250   Delivery Midwife (pmshcpaf)        
PMLBDDOC  DIM       10     10       260   Delivery Doctor (pmshcpaf)         
PMLBDANA  DIM       10     10       270   Delivery Anaesthetist (pmshcpaf)   
PMLBNUMB  DIM       2      2        280   Number of babies this birth        
PMLBMIDR  DIM       10     10       282   Midwife at Discharge (pmshcpaf)    
PMLBWEBC  DIM       10     10       292   Web User Id created (websecaf)     
PMLBDATC  DIM       8      8        302   Date Created (CCYYMMDD)            
PMLBTIMC  DIM       8      8        310   Time Created (hh:mm:ss)            
PMLBWEBU  DIM       10     10       318   Web User Id Updated (websecaf)     
PMLBDATU  DIM       8      8        328   Date Updated (CCYYMMDD)            
PMLBTIMU  DIM       8      8        336   Time Updated (hh:mm:ss)            
PMLBRECS  DIM       1      1        344   Record status 1=Deleted            
PMLBWEBD  DIM       10     10       345   Web User Id Deleted (websecaf)     
PMLBDATD  DIM       8      8        355   Date Deleted (CCYYMMDD)            
PMLBTIMD  DIM       8      8        363   Time Deleted (hh:mm:ss)            
PMLBREAS  DIM       3      3        371   Reason for change (Cat FY)         
PMLBSPAR  DIM       57     57       374   Spare                              
.
.End of Record                      431  
.
