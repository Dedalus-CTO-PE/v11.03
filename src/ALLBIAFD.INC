. V10.02.01 29/03/2011 EC  Added ALBATOTS  CAR 239576                        
. V10.00.01 06/05/2010 SA  Created FD CAR 220289                                
. *----------------------------------------------------------------------
. * Include Name  :   ALLBIAFD.INC
. *
. * Function      :   File Def'n Include for Allied Health                      
. *                   Barthel Index Assessment            
. *
. * File Type     :   SQL
. *
. * File Name     :   allbiaaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
ALLBIAA1   IFILE    SQL, FIXED=316, KEY="U1-8,9-16,17-24"                       
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
ALBAVISN  DIM       8      8        1     Visit Number                       
ALBADATE  DIM       8      8        9     Date of Assessment (ccyymmdd)      
ALBATIME  DIM       8      8        17    Time of Assessment (hh:mm:ss)      
ALBADRK1  FORM      4      3        25    Drinking from a Cup Score 1        
.                                            Score 000-100:                    
.                                            "Can do without aids"             
ALBADRK2  FORM      4      3        28    Drinking from a Cup Score 2        
.                                            Score 000-100:                    
.                                            "Can do with aids"                
ALBADRK3  FORM      4      3        31    Drinking from a Cup Score 3        
.                                            Score 000-100:                    
.                                            "Can do with help of someone else"
ALBADRK4  FORM      4      3        34    Drinking from a Cup Score 4        
.                                            Score 000-100:                    
.                                            "Cannot do at all"                
ALBAEAT1  FORM      4      3        37    Eating Score 1                     
.                                            Score 000-100:                    
.                                            "Can do without aids"             
ALBAEAT2  FORM      4      3        40    Eating Score 2                     
.                                            Score 000-100:                    
.                                            "Can do with aids"                
ALBAEAT3  FORM      4      3        43    Eating Score 3                     
.                                            Score 000-100:                    
.                                            "Can do with help of someone else"
ALBAEAT4  FORM      4      3        46    Eating Score 4                     
.                                            Score 000-100:                    
.                                            "Cannot do at all"                
ALBAUPP1  FORM      4      3        49    Dressing Upper Body Score 1        
.                                            Score 000-100:                    
.                                            "Can do without aids"             
ALBAUPP2  FORM      4      3        52    Dressing Upper Body Score 2        
.                                            Score 000-100:                    
.                                            "Can do with aids"                
ALBAUPP3  FORM      4      3        55    Dressing Upper Body Score 3        
.                                            Score 000-100:                    
.                                            "Can do with help of someone else"
ALBAUPP4  FORM      4      3        58    Dressing Upper Body Score 4        
.                                            Score 000-100:                    
.                                            "Cannot do at all"                
ALBALOW1  FORM      4      3        61    Dressing Lower Body Score 1        
.                                            Score 000-100:                    
.                                            "Can do without aids"             
ALBALOW2  FORM      4      3        64    Dressing Lower Body Score 2        
.                                            Score 000-100:                    
.                                            "Can do with aids"                
ALBALOW3  FORM      4      3        67    Dressing Lower Body Score 3        
.                                            Score 000-100:                    
.                                            "Can do with help of someone else"
ALBALOW4  FORM      4      3        70    Dressing Lower Body Score 4        
.                                            Score 000-100:                    
.                                            "Cannot do at all"                
ALBABRC1  FORM      4      3        73    Putting on Brace Score 1           
.                                            Score 000-100:                    
.                                            "Can do without aids"             
ALBABRC2  FORM      4      3        76    Putting on Brace Score 2           
.                                            Score 000-100:                    
.                                            "Can do with aids"                
ALBABRC3  FORM      4      3        79    Putting on Brace Score 3           
.                                            Score 000-100:                    
.                                            "Can do with help of someone else"
ALBABRC4  FORM      4      3        82    Putting on Brace Score 4           
.                                            Score 000-100:                    
.                                            "Cannot do at all"                
ALBAGRM1  FORM      4      3        85    Grooming Score 1                   
.                                            Score 000-100:                    
.                                            "Can do without aids"             
ALBAGRM2  FORM      4      3        88    Grooming Score 2                   
.                                            Score 000-100:                    
.                                            "Can do with aids"                
ALBAGRM3  FORM      4      3        91    Grooming Score 3                   
.                                            Score 000-100:                    
.                                            "Can do with help of someone else"
ALBAGRM4  FORM      4      3        94    Grooming Score 4                   
.                                            Score 000-100:                    
.                                            "Cannot do at all"                
ALBAWSH1  FORM      4      3        97    Washing or Bathing Score 1         
.                                            Score 000-100:                    
.                                            "Can do without aids"             
ALBAWSH2  FORM      4      3        100   Washing or Bathing Score 2         
.                                            Score 000-100:                    
.                                            "Can do with aids"                
ALBAWSH3  FORM      4      3        103   Washing or Bathing Score 3         
.                                            Score 000-100:                    
.                                            "Can do with help of someone else"
ALBAWSH4  FORM      4      3        106   Washing or Bathing Score 4         
.                                            Score 000-100:                    
.                                            "Cannot do at all"                
ALBAURN1  FORM      4      3        109   Controlling Urination Score 1      
.                                            Score 000-100:                    
.                                            "Can do without aids"             
ALBAURN2  FORM      4      3        112   Controlling Urination Score 2      
.                                            Score 000-100:                    
.                                            "Can do with aids"                
ALBAURN3  FORM      4      3        115   Controlling Urination Score 3      
.                                            Score 000-100:                    
.                                            "Can do with help of someone else"
ALBAURN4  FORM      4      3        118   Controlling Urination Score 4      
.                                            Score 000-100:                    
.                                            "Cannot do at all"                
ALBABOW1  FORM      4      3        121   Controlling Bowel Movements Score 1
.                                            Score 000-100:                    
.                                            "Can do without aids"             
ALBABOW2  FORM      4      3        124   Controlling Bowel Movements Score 2
.                                            Score 000-100:                    
.                                            "Can do with aids"                
ALBABOW3  FORM      4      3        127   Controlling Bowel Movements Score 3
.                                            Score 000-100:                    
.                                            "Can do with help of someone else"
ALBABOW4  FORM      4      3        130   Controlling Bowel Movements Score 4
.                                            Score 000-100:                    
.                                            "Cannot do at all"                
ALBACAR1  FORM      4      3        133   Care of Clothes at Toilet Score 1  
.                                            Score 000-100:                    
.                                            "Can do without aids"             
ALBACAR2  FORM      4      3        136   Care of Clothes at Toilet Score 2  
.                                            Score 000-100:                    
.                                            "Can do with aids"                
ALBACAR3  FORM      4      3        139   Care of Clothes at Toilet Score 3  
.                                            Score 000-100:                    
.                                            "Can do with help of someone else"
ALBACAR4  FORM      4      3        142   Care of Clothes at Toilet Score 4  
.                                            Score 000-100:                    
.                                            "Cannot do at all"                
ALBACHR1  FORM      4      3        145   Getting In & Out of Chair Score 1  
.                                            Score 000-100:                    
.                                            "Can do without aids"             
ALBACHR2  FORM      4      3        148   Getting In & Out of Chair Score 2  
.                                            Score 000-100:                    
.                                            "Can do with aids"                
ALBACHR3  FORM      4      3        151   Getting In & Out of Chair Score 3  
.                                            Score 000-100:                    
.                                            "Can do with help of someone else"
ALBACHR4  FORM      4      3        154   Getting In & Out of Chair Score 4  
.                                            Score 000-100:                    
.                                            "Cannot do at all"                
ALBATOL1  FORM      4      3        157   Getting On & Off Toilet Score 1    
.                                            Score 000-100:                    
.                                            "Can do without aids"             
ALBATOL2  FORM      4      3        160   Getting On & Off Toilet Score 2    
.                                            Score 000-100:                    
.                                            "Can do with aids"                
ALBATOL3  FORM      4      3        163   Getting On & Off Toilet Score 3    
.                                            Score 000-100:                    
.                                            "Can do with help of someone else"
ALBATOL4  FORM      4      3        166   Getting On & Off Toilet Score 4    
.                                            Score 000-100:                    
.                                            "Cannot do at all"                
ALBASHW1  FORM      4      3        169   Getting In & Out of Shower Score 1 
.                                            Score 000-100:                    
.                                            "Can do without aids"             
ALBASHW2  FORM      4      3        172   Getting In & Out of Shower Score 2 
.                                            Score 000-100:                    
.                                            "Can do with aids"                
ALBASHW3  FORM      4      3        175   Getting In & Out of Shower Score 3 
.                                            Score 000-100:                    
.                                            "Can do with help of someone else"
ALBASHW4  FORM      4      3        178   Getting In & Out of Shower Score 4 
.                                            Score 000-100:                    
.                                            "Cannot do at all"                
ALBALVL1  FORM      4      3        181   Walking 45m on the Level Score 1   
.                                            Score 000-100:                    
.                                            "Can do without aids"             
ALBALVL2  FORM      4      3        184   Walking 45m on the Level Score 2   
.                                            Score 000-100:                    
.                                            "Can do with aids"                
ALBALVL3  FORM      4      3        187   Walking 45m on the Level Score 3   
.                                            Score 000-100:                    
.                                            "Can do with help of someone else"
ALBALVL4  FORM      4      3        190   Walking 45m on the Level Score 4   
.                                            Score 000-100:                    
.                                            "Cannot do at all"                
ALBAUPD1  FORM      4      3        193   Walking Up/Down Stairs Score 1     
.                                            Score 000-100:                    
.                                            "Can do without aids"             
ALBAUPD2  FORM      4      3        196   Walking Up/Down Stairs Score 2     
.                                            Score 000-100:                    
.                                            "Can do with aids"                
ALBAUPD3  FORM      4      3        199   Walking Up/Down Stairs Score 3     
.                                            Score 000-100:                    
.                                            "Can do with help of someone else"
ALBAUPD4  FORM      4      3        202   Walking Up/Down Stairs Score 4     
.                                            Score 000-100:                    
.                                            "Cannot do at all"                
ALBAPRO1  FORM      4      3        205   Propel/Pushing Wheelchair Score 1  
.                                            Score 000-100:                    
.                                            "Can do without aids"             
ALBAPRO2  FORM      4      3        208   Propel/Pushing Wheelchair Score 2  
.                                            Score 000-100:                    
.                                            "Can do with aids"                
ALBAPRO3  FORM      4      3        211   Propel/Pushing Wheelchair Score 3  
.                                            Score 000-100:                    
.                                            "Can do with help of someone else"
ALBAPRO4  FORM      4      3        214   Propel/Pushing Wheelchair Score 4  
.                                            Score 000-100:                    
.                                            "Cannot do at all"                
ALBADELF  DIM       1      1        217   Delete Flag                        
.                                             0 or Blank = Not deleted         
.                                             1 = Deleted                      
ALBACUID  DIM       10     10       218   WEB User Id Created (websecaf)     
ALBACDAT  DIM       8      8        228   Date Record Created (ccyymmdd)     
ALBACTIM  DIM       8      8        236   Time Record Created (hh:mm:ss)     
ALBAUUID  DIM       10     10       244   WEB User Id Update (websecaf)      
ALBAUDAT  DIM       8      8        254   Date Record Update (ccyymmdd)      
ALBAUTIM  DIM       8      8        262   Time Record Updated (hh:mm:ss)     
ALBADUID  DIM       10     10       270   WEB User Id Deleted (websecaf)     
ALBADDAT  DIM       8      8        280   Date Record Deleted (ccyymmdd)     
ALBADTIM  DIM       8      8        288   Time Record Deleted (hh:mm:ss)     
ALBATOTS  DIM       3      3        296   Total Score 0-100                  
ALBASPAR  DIM       17     17       299   Spare Variable                     
.
.End of Record                      316  
.
