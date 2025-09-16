. V9.09.001 22/11/2007 EC  Created FD CAR 150315                             
. *----------------------------------------------------------------------
. * Include Name  :   OPRJRRFD.INC
. *
. * Function      :   File Def'n Include for Theatre System                     
. *                   Joint Replacement Registry         
. *
. * File Type     :   SQL
. *
. * File Name     :   oprjrraf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
OPRJRRA1   IFILE    SQL, FIXED=1197, KEY="U1-10,11-12"                          
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
OPJRUNIQ  DIM       10     10       1     Theatre Unique Id                  
OPJRRCNT  DIM       2      2        11    Replacement Registry Form Counter  
OPJRTYPE  DIM       1      1        13    Replacement Registry Form Type     
.                                         1=Knee
.                                         2=Hip
.                                         3=Multi Joint
.                                         4=Spine (not used)
OPJRJOIN  DIM       1      1        14    Joint                              
.                                         1=Shoulder
.                                         2=Elbow
.                                         3=Wrist
.                                         4=Ankle
OPJRSIDE  DIM       1      1        15    Anatomical Side/Level              
.                                         1=Left 2=Right
OPJRPRIM  DIM       1      1        16    Primary or Revision                
.                                         1 = Primary 2 = Revision
OPJRDI01  DIM       1      1        17    Osteoarthritis 1=Yes               
OPJRDI02  DIM       1      1        18    Rheumatoid Arthritis 1=Yes         
OPJRDI03  DIM       1      1        19    Other Inflam Arthritis 1=Yes       
OPJRDI04  DIM       1      1        20    Avascular Necrosis 1=Yes           
OPJRDI05  DIM       1      1        21    Dysplasia 1=Yes                    
OPJRDI06  DIM       1      1        22    Fracture 1=Yes                     
OPJRDI07  DIM       1      1        23    Trauma 1=Yes                       
OPJRDI08  DIM       1      1        24    Dislocation 1=Yes                  
OPJRDI09  DIM       1      1        25    Instability 1=Yes                  
OPJRDI10  DIM       1      1        26    Tumour 1=Yes                       
OPJRDI11  DIM       1      1        27    Other 1=Yes                        
OPJRDI12  DIM       1      1        28    Disc Disease with radiculopathy)1=Yes
OPJRDI13  DIM       1      1        29    Disc Disease without radiculopathy
OPJRDI14  DIM       1      1        30    Spondylolisthesis 1=Yes            
OPJRDI15  DIM       1      1        31    Adjacent Segment Syndrome 1=Yes    
OPJRDI16  DIM       1      1        32    Post Laminectomy or Disectomy 1=Yes
OPJRDI17  DIM       1      1        33    Adjacent to Concurrent Fusion 1=Yes
OPJRDI18  DIM       1      1        34    Pain of Unknown Cause 1=Yes        
OPJRDI19  DIM       1      1        35    Loosening 1=Yes                    
OPJRDI20  DIM       1      1        36    Lysis 1=Yes                        
OPJRDI21  DIM       1      1        37    Infection 1=Yes                    
OPJRDI22  DIM       1      1        38    Implant Breakage 
.                                         1=Femoral
.                                         2=Tibial
.                                         3=Patella
.                                         4=Stem
.                                         5=acetabular
OPJRDI23  DIM       1      1        39    Neurological 1=Yes                 
OPJRDI24  DIM       1      1        40    Diagnosis (not used)               
OPJRDI25  DIM       1      1        41    Diagnosis (not used)               
OPJRDC01  DIM       50     50       42    Diagnosis Other Comment            
OPJRDC02  DIM       50     50       92    Diagnosis Fracture Comment         
OPJRDC03  DIM       50     50       142   Diagnosis Tumour Comment           
OPJRDC04  DIM       50     50       192   Diagnosis Breakage Comment         
OPJRDC05  DIM       50     50       242   Diagnosis Comment (not used)       
OPJRUNCM  DIM       1      1        292   Inicompartmental Medial 1=Yes      
OPJRUNCL  DIM       1      1        293   Inicompartmental Lateral 1=Yes     
OPJRCMT1  DIM       70     70       294   Comment Line 1                     
OPJRCMT2  DIM       70     70       364   Comment Line 2                     
OPJRCMT3  DIM       70     70       434   Comment Line 3                     
OPJRCMT4  DIM       70     70       504   Comment Line 4                     
OPJRCMT5  DIM       70     70       574   Comment Line 5                     
OPJRCOMP  DIM       1      1        644   Computer Assisted 1=Yes            
OPJRCMPS  DIM       3      3        645   Computer System (Cat pr)           
OPJRREOP  DIM       1      1        648   Re-Operation Performed 1=Yes       
OPJRRRES  DIM       50     50       649   Re-Operation Reason                
OPJRCEMP  DIM       1      1        699   Patella Cement Used 1=Yes          
OPJRCNMP  DIM       50     50       700   Patella Cement Company Name        
OPJRCEMT  DIM       1      1        750   Tibial Cement Used 1=Yes           
OPJRCNMT  DIM       50     50       751   Tibial Cement Company Name         
OPJRCEMF  DIM       1      1        801   Femoral Cement Used 1=Yes          
OPJRCNMF  DIM       50     50       802   Femoral Cement Company Name        
OPJRCEMA  DIM       1      1        852   Acetabular Cement Used 1=Yes       
OPJRCNMA  DIM       50     50       853   Acetabular Cement Company Name     
OPJRCEMX  DIM       1      1        903   Proximal Cement Used 1=Yes         
OPJRCNMX  DIM       50     50       904   Proximal/Distal Cement Company Name
OPJRCEMD  DIM       1      1        954   Distal Cement Used 1=Yes           
OPJRSCRW  DIM       1      1        955   Screws Used 1=Yes                  
OPJRSCRN  DIM       3      3        956   Number of Screws Used              
OPJRWIRE  DIM       1      1        959   Wire Used 1=Yes                    
OPJRGRIP  DIM       1      1        960   Trochanteric Grip 1=Yes            
OPJRGRIC  DIM       50     50       961   Trochanteric Grip Company          
OPJRCABL  DIM       1      1        1011  Cables Used 1=Yes                  
OPJRCABC  DIM       50     50       1012  Cable Company Name                 
OPJRCABN  DIM       3      3        1062  Number of Cables Used              
OPJRCDAT  DIM       8      8        1065  Date Created (ccyymmdd)            
OPJRCTIM  DIM       8      8        1073  Time Created (hh:mm:ss)            
OPJRCUID  DIM       10     10       1081  Web User Id Created (webcesaf)     
OPJRUDAT  DIM       8      8        1091  Date Updated (ccyymmdd)            
OPJRUTIM  DIM       8      8        1099  Time Updated (hh:mm:ss)            
OPJRUUID  DIM       10     10       1107  Web User id Updated (websecaf)     
OPJRSPAR  DIM       80     80       1117  Spare                              
.
.End of Record                      1197 
.
