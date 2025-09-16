. V11.01.01 13/04/2021 TT C-0895165 Changed OPSGUT01/OPSGUT02 descriptions      
. V10.13.01 18/12/2018 SA C-0851661 Updated description for OPSGUC11            
. V10.12.03 16/07/2018 SA C-0851661 Updated field descriptions for OPSGUC06,    
. V                        OPSGUY03 and OPSGUY04.                               
. V10.12.02 08/06/2018 JT C-0851006 Changed Category for OPSGUC05 to Ti         
. V10.12.01 15/05/2018 PV C-0851006 Changed UY06 - Straight to DPU UY07 - No Rec
. V10.08.01 31/03/2016 SA C-0321157 Added OPSGDT3U & OPSGDT3C                   
. V10.04.01 24/06/2014 SA C-N/A Updated field descriptions                      
. V9.04.001 15/03/2005 LV  Changed item fields from DIM 6 to DIM 15             
. V9.02.001 21/01/2003 TT  Added new field "Number of Operations"-FORM 3        
. V9.00.003 12/06/2001 JT  Changed Delay Before Surgery                         
. *----------------------------------------------------------------------
. * Include Name  :   OPRSRGFD.INC
. *
. * Function      :   File Def'n Include for Theatre System                     
. *                   Operating Surgical Details         
. *
. * File Type     :   SQL
. *
. * File Name     :   oprsrgaf.dat
. * Audit Name    :   opraudsg.dat
. *
. * Index Values  :   KEY11                                                  
. *
. *----------------------------------------------------------------------
.
.Audit File Definition
.--------------------
OPRAUDSG   IFILE    SQL, FIXED=808, KEY="D1-8,9-16,17-18,19-19"                 
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
OPSGAUDD  DIM       8      8        1     Date of Change
OPSGAUDT  DIM       8      8        9     Time of Change
OPSGAUDP  DIM       2      2        17    Port
OPSGAUDR  DIM       1      1        19    Record Type
.                                         A=Added Record
.                                         B=Before Change
.                                         C=After Change
.                                         D=Deleted Record
OPSGAUDS  FORM      1      2        20    Record Status
.                                         1=Not Printed
.                                         2=Printed
OPSGAUDO  DIM       4      4        22    Operator ID
.
.
.Data File Definition
.--------------------
OPRSRGA1   IFILE    SQL, FIXED=783, KEY="U1-10,11-11"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
OPSGUNID  DIM       10     10       1     Unique ID.                         
OPSGTMNO  DIM       1      1        11    Team Number                        
OPSGTIPS  DIM       8      8        12    Time Prep Start (hh:mm:ss)         
OPSGTIDR  DIM       8      8        20    Time of Dressing (hh:mm:ss)        
OPSGTISS  DIM       8      8        28    Time Surgery Started (hh:mm:ss)    
OPSGTISE  DIM       8      8        36    Time Surgery Ended (hh:mm:ss)      
OPSGSGDL  DIM       3      3        44    Delay Before Surgery (Cat TV)      
OPSGCCNT  DIM       1      1        47    Count Correct                      
OPSGCNTO  DIM       6      6        48    Operator Name for Counter(oprnuraf)
OPSGBLOS  DIM       3      3        54    Blood Loss (Cat Ta)                
OPSGWCON  DIM       3      3        57    Wound Condition (Cat Tb)           
OPSGWCM1  DIM       3      3        60    Wound Closure Method 1 (Cat Tc)    
OPSGWCM2  DIM       3      3        63    Wound Closure Method 2 (Cat Td)    
OPSGWCM3  DIM       3      3        66    Wound Closure Method 3 (Cat Te)    
OPSGICD1  DIM       15     15       69    Item Code 1 (opriteaf)             
OPSGICD2  DIM       15     15       84    Item Code 2 (opriteaf)             
OPSGICD3  DIM       15     15       99    Item Code 3 (opriteaf)             
OPSGDST1  DIM       4      4        114   Diathermy 1 Setting                
OPSGDCD1  DIM       15     15       118   Diathermy 1 Code (opriteaf)        
OPSGDNM1  DIM       15     15       133   Diathermy 1 No. (free or opriteaf) 
OPSGDPS1  DIM       20     20       148   Diathermy 1 Plate Site(free format)
OPSGDCK1  DIM       1      1        168   Diathermy 1 Checked                
OPSGDPR1  DIM       1      1        169   Diathermy 1 Plate Removed          
OPSGDST2  DIM       4      4        170   Diathermy 2 Setting                
OPSGDCD2  DIM       15     15       174   Diathermy 2 Code (opriteaf)        
OPSGDNM2  DIM       15     15       189   Diathermy 2 Number (free format)   
OPSGDPS2  DIM       20     20       204   Diathermy 2 Plate Site(free format)
OPSGDCK2  DIM       1      1        224   Diathermy 2 Checked                
OPSGDPR2  DIM       1      1        225   Diathermy 2 Plate Removed          
OPSGCAT1  DIM       15     15       226   Catheter 1 (opriteaf)              
OPSGCAT2  DIM       15     15       241   Catheter 2 (opriteaf)              
OPSGDRT1  DIM       15     15       256   Drain Tube 1 (opriteaf)            
OPSGDRT2  DIM       15     15       271   Drain Tube 2 (opriteaf)            
OPSGPACK  DIM       15     15       286   Packing (opriteaf)                 
OPSGDRS1  DIM       15     15       301   Dressing 1 (opriteaf)              
OPSGDRS2  DIM       15     15       316   Dressing 2 (opriteaf)              
OPSGDRS3  DIM       15     15       331   Dressing 3 (opriteaf)              
OPSGWDV1  DIM       15     15       346   Warming Device 1 (opriteaf)        
OPSGWDV2  DIM       15     15       361   Warming Device 2 (opriteaf)        
OPSGWDV3  DIM       15     15       376   Warming Device 3 (opriteaf)        
OPSGIRIG  DIM       15     15       391   Irrigation (opriteaf)              
OPSGIRGS  DIM       15     15       406   Irrigation Solution (opriteaf)     
OPSGIRAI  FORM      4      3        421   Irrigation Amount In               
OPSGIRAO  FORM      4      3        424   Irrigation Amount Out              
OPSGCLFS  DIM       2      2        427   Calf Stimultor                     
OPSGINFC  DIM       1      1        429   Infection Control Classification   
OPSGSPMI  DIM       2      2        430   Specimens Microbiology             
OPSGSPAP  DIM       2      2        432   Specimens Anatomical Pathology     
OPSGOTHR  DIM       37     37       434   Other                              
OPSGUC01  DIM       3      3        471   User Defined Code 1 (Cat Tf)       
OPSGUC02  DIM       3      3        474   User Defined Code 2 (Cat Tf)       
OPSGUC03  DIM       3      3        477   User Defined Code 3 (Cat Tf)       
OPSGUC04  DIM       3      3        480   Diathermy Type 1    (Cat Ti)       
.                                         Mono/Polar/BiPolar                   
OPSGUC05  DIM       3      3        483   Diathermy Type 2    (Cat Ti)       
.                                         Mono/Polar/BiPolar                   
OPSGUC06  DIM       3      3        486   Recovery Exit Delay Reason (Cat Tk)
OPSGUC07  DIM       3      3        489   User Defined Code 7 (Cat Tl)       
OPSGUC08  DIM       3      3        492   User Defined Code 8 (Cat Tm)       
OPSGUC09  DIM       3      3        495   User Defined Code 9 (Cat Tn)       
OPSGUC10  DIM       3      3        498   User Defined Code 10 (Cat To)      
OPSGUC11  DIM       3      3        501   Wound Classification/Infection     
.                                         Control (Cat Tp)                     
OPSGUC12  DIM       3      3        504   User Defined Code 12 (Cat Tq)      
OPSGUC13  DIM       3      3        507   User Defined Code 13 (Cat Tr)      
OPSGUC14  DIM       3      3        510   User Defined Code 14 (Cat Ts)      
OPSGUC15  DIM       3      3        513   User Defined Code 15 (Cat Tt)      
OPSGUC16  DIM       3      3        516   User Defined Code 16 (Cat Tu)      
OPSGUC17  DIM       3      3        519   User Defined Code 17 (Cat Tv)      
OPSGUC18  DIM       3      3        522   User Defined Code 18 (Cat Tw)      
OPSGUC19  DIM       3      3        525   User Defined Code 19 (Cat Tx)      
OPSGUC20  DIM       3      3        528   User Defined Code 20 (Cat Ty)      
OPSGUY01  DIM       1      1        531   User Defined Y/N 1                 
OPSGUY02  DIM       1      1        532   Overnight Indicator                
OPSGUY03  DIM       1      1        533   Fast Post Recovery (1=Yes)         
OPSGUY04  DIM       1      1        534   Admit Post Procedure (1=Yes)       
OPSGUY05  DIM       1      1        535   Case Abandoned (1=Yes)             
OPSGUY06  DIM       1      1        536   Straight To DPU                    
OPSGUY07  DIM       1      1        537   No Recovery                        
OPSGUY08  DIM       1      1        538   User Defined Y/N 8                 
OPSGUY09  DIM       1      1        539   User Defined Y/N 9                 
OPSGUY10  DIM       1      1        540   User Defined Y/N 10                
OPSGUT01  DIM       8      8        541   Wheels In                          
OPSGUT02  DIM       8      8        549   Wheels Out                         
OPSGUT03  DIM       8      8        557   User Defined Time Field 3          
OPSGUT04  DIM       8      8        565   User Defined Time Field 4          
OPSGUT05  DIM       8      8        573   User Defined Time Field 5          
OPSGUT06  DIM       8      8        581   User Defined Time Field 6          
OPSGUT07  DIM       8      8        589   User Defined Time Field 7          
OPSGUT08  DIM       8      8        597   User Defined Time Field 8          
OPSGUT09  DIM       8      8        605   User Defined Time Field 9          
OPSGUT10  DIM       8      8        613   User Defined Time Field 10         
OPSGUF01  FORM      6      4        621   No. of Drain Tube 1 Used           
OPSGUF02  FORM      6      4        625   No. of Drain Tube 2 Used           
OPSGUF03  FORM      6      4        629   No. of Packing  Used               
OPSGUF04  FORM      6      4        633   No. of Dressing 1 Used             
OPSGUF05  FORM      6      4        637   No. of Dressing 2 Used             
OPSGUF06  FORM      6      4        641   No. of Dressing 3 Used             
OPSGUF07  FORM      6      4        645   No. of Catheter 1 Used             
OPSGUF08  FORM      6      4        649   No. of Catheter 2 Used             
OPSGUF09  FORM      6      4        653   No. of Warming Device 1 Used       
OPSGUF10  FORM      6      4        657   No. of Warming Device 2 Used       
OPSGUTHR  DIM       10     10       661   User ID for Theatre (websecaf)     
OPSGIDES  DIM       60     60       671   Implant Description                
OPSGNOOP  FORM      3      3        731   Number of Operations               
OPSGDT3U  DIM       6      6        734   Number of Drain Tube 3 Used        
OPSGDT3C  DIM       15     15       740   Drain Tube 3 Code (opriteaf)       
OPSGSPAR  DIM       28     28       755   Spare Variable                     
.
.End of Record                      783  
.
