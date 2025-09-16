. V11.00.01 15/06/2030 J.Tan TSK 0886178 - Mod for ABF invoice
. V6.09.001 22/06/2001 DS  Created                                           
. *----------------------------------------------------------------------
. * Include Name  :   PATINPFD.INC
. *
. * Function      :   File Def'n Include for Patient System                     
. *                   Invoice Pending Details Data       
. *
. * File Type     :   SQL
. *
. * File Name     :   patinpaf.dat
. *
. * Modification  :   21/04/2008 J.Tan    CAR 166600
. *                   Mods PTIPBAND to store Item Group (Cat FI)
. *                   20/11/2019 J.Tan    TSK 0857392
. *                   Added record type for ABF
. *
. * Note : IBAADT56 - Invoice Pending Details Extraction writes to this file
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
PATINPA1   IFILE    SQL, FIXED=408, KEY="U1-8,17-18,184-189"                    
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
DPTIPADM  DIM       8      8        1     Admission Number                   
PTIPURNO  DIM       8      8        9     U/R Number                         
PTIPRTYP  DIM       2      2        17    Record Type                        
.                                         A=Accommodation, I=ICU/CCU Accom.
.                                         T=Theatre
.                                         M=Misc.Item or (Catg FI ind.2)
.                                              A,I,T,P,D,L
.                                              A= Accommodation
.                                              I= ICU/CCU revenue
.                                              T= Theatre revenue
.                                              P= Prosthesis revenue
.                                              D= Pharmacy revenue
.                                              L= Labour ward revenue
.
.                                         1A - Emergency ABF Revenue
.                                         2A - Outpatient ABF Revenue
.                                         3A - Inpatient ABF Revenue
.
PTIPCLAM  DIM       3      3        19    Claim Code (Category CL)           
PTIPHFND  DIM       6      6        22    Health Fund                        
PTIPFTBL  DIM       8      8        28    Health Fund Table                  
PTIPATYP  DIM       3      3        36    Admission Type (Category A)        
PTIPWARD  DIM       3      3        39    Ward                               
PTIPWBED  DIM       3      3        42    Bed                                
PTIPBTYP  DIM       3      3        45    Bed Type (Category BT)             
PTIPBDAY  FORM      3      3        48    Total Days In Bed                  
PTIPEDAY  FORM      3      3        51    Total Days In Episode              
PTIPLDAY  FORM      3      3        54    Total Leave Days                   
PTIPCURI  DIM       1      1        57    Current/Onleave Inpatient (Y/N)
PTIPADAT  DIM       8      8        58    Admission Date (ccyymmdd)          
PTIPDDAT  DIM       8      8        66    Discharge Date (ccyymmdd)          
PTIPACCF  DIM       8      8        74    Accommodation Date From            
PTIPACCT  DIM       8      8        82    Accommodation Date To              
PTIPADOC  DIM       6      6        90    Attending Doctor Code              
PTIPFNAM  DIM       54     54       96    Attending Doctor Formatted Name    
PTIPDTYP  DIM       3      3        150   Attending Doctor Specialty (Cat.DT)
PTIPDDOC  DIM       6      6        153   Discharge Doctor Code              
PTIPRDOC  DIM       6      6        159   Referring Doctor Code              
PTIPROOM  DIM       6      6        165   Operating Room Code                
PTIPITEM  DIM       9      9        171   Item Number                        
.
.                                         for ABF Charge Transaction type :
.                                            - URG Code for Emergency Invoice
.                                            - Tier 2 Code for Outpatient Inv.
.                                            - Discharge DRG for Inpatient Inv.
.
PTIPMHDP  DIM       1      1        180   Misc./Theatre Charge (Cat.FI,Ind.2)
.                                            M= Miscellaneous
.                                            A= Accommodation
.                                            I= ICU/CCU revenue
.                                            T= Theatre revenue
.                                            P= Prosthesis revenue
.                                            D= Pharmacy revenue
.                                            L= Labour ward revenue
PTIPBAND  DIM       3      3        181   Theatre Band/ Item Group (Cat FI)  
DPTIPTRN  DIM       6      6        184   Transaction Number                 
PTIPTTYP  FORM      1      2        190   Transaction Type                   
.                                         1= Accommodation
.                                         2= Theatre
.                                         3= Misc.Charge
.                                         4= ABF Charge (ED,OUT,INP)
.                                         5= Procedure (ED)
PTIPAREV  FORM      12.2   8        192   Accommodation
PTIPTREV  FORM      12.2   8        200   Theatre Revenue                    
PTIPPREV  FORM      12.2   8        208   Prosthesis Revenue                 
PTIPHREV  FORM      12.2   8        216   Pharmacy Revenue                   
PTIPIREV  FORM      12.2   8        224   ICU/CCU Revenue                    
PTIPLREV  FORM      12.2   8        232   Labour Ward Revenue                
PTIPMREV  FORM      12.2   8        240   Miscellaneous Charges Revenue      
PTIPGREV  FORM      12.2   8        248   Gross Revenue                      
PTIPPMBS  DIM       9      9        256   CMBS Item Provisional              
PTIPGPOR  FORM      12.2   8        265   Government Portion Amount          
PTIPORAT  FORM      12.2   8        273   Original Rate                      
PTIPDRAT  FORM      12.2   8        281   Individual Daily Rate Amount       
PTIPADDT  FORM      12.2   8        289   Casepayment Additional Rate        
PTIPFREB  FORM      12.2   8        297   Estimated Fund Rebate              
PTIPPPOR  FORM      12.2   8        305   Lump Sum Amount - Patient Portion  
PTIPRPOR  FORM      12.2   8        313   Lump Sum AMount - Rebate Portion   
PTIPCTYP  FORM      1      2        321   Casemix Day Type                   
PTIPPDRG  DIM       9      9        323   Casemix MBS/DRG Code Provisional   
PTIPNDRG  DIM       4      4        332   Actual National DRG                
PTIPSDRG  DIM       4      4        336   Actual State DRG                   
PTIPNMDC  DIM       4      4        340   Actual National MDC                
PTIPSMDC  DIM       4      4        344   Actual State MDC                   
PTIPGRP1  DIM       3      3        348   Grouper Version 1                  
PTIPGRP2  DIM       3      3        351   Grouper Version 2                  
PTIPGRP3  DIM       3      3        354   Grouper Version 3                  
PTIPCDAT  DIM       8      8        357   Date Record Created (ccyymmdd)     
PTIPCTIM  DIM       8      8        365   Time Record Created (hh:mm:ss)     
PTIPOPER  DIM       4      4        373   Operator Id                        
PTIPGSTU  DIM       1      1        377   GST Unknown? (U=Yes)
PTIPSPAR  DIM       30     30       378   Spare Variable                     
.
.End of Record                      408  
.
.Redefine Key Variables
.----------------------
PTIPADMN  FORM      8    
PTIPTRNN  FORM      6    
