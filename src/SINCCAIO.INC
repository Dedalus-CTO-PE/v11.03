.
. SINCCAIO    
. --------
. Filename     : sinccaaf.dat
.
RSSICA1   RESET     KEY5                                                        
          READ      SINCCAA1,KEY5;;                                             
          RETURN
.
RASICA1   RESET     KEY5                                                        
          MOVE      ZERO,OVRCD
          READ      SINCCAA1,KEY5;ANS                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
RDSICA1   RESET     KEY5                                                        
          MOVE      ZERO,OVRCD
          READ      SINCCAA1,KEY5;SICACODE,SICADESC,SICATELE,SICACONT,SICAGL:   
                        SICAIMPD,SICADAD1,SICADAD2,SICADAD3,SICALOC,SICAMES:    
                        SICAUR1,SICAUR2,SICAUD1,SICAUD2,SICAUC1,SICAUC2:        
                        SICAUY1,SICAUY2,SICARID,SICAPACC,SICASPA                
          GOTO      OVERCOND IF OVER
          RETURN
.
RKSICA1                                                                         
          MOVE      ZERO,OVRCD
          READKS    SINCCAA1;SICACODE,SICADESC,SICATELE,SICACONT,SICAGL:        
                        SICAIMPD,SICADAD1,SICADAD2,SICADAD3,SICALOC,SICAMES:    
                        SICAUR1,SICAUR2,SICAUD1,SICAUD2,SICAUC1,SICAUC2:        
                        SICAUY1,SICAUY2,SICARID,SICAPACC,SICASPA                
          GOTO      OVERCOND IF OVER
          RETURN
.
RPSICA1                                                                         
          MOVE      ZERO,OVRCD
          READKP    SINCCAA1;SICACODE,SICADESC,SICATELE,SICACONT,SICAGL:        
                        SICAIMPD,SICADAD1,SICADAD2,SICADAD3,SICALOC,SICAMES:    
                        SICAUR1,SICAUR2,SICAUD1,SICAUD2,SICAUC1,SICAUC2:        
                        SICAUY1,SICAUY2,SICARID,SICAPACC,SICASPA                
          GOTO      OVERCOND IF OVER
          RETURN
.
UPSICA1                                                                         
          UPDATE    SINCCAA1;SICACODE,SICADESC,SICATELE,SICACONT,SICAGL:        
                        SICAIMPD,SICADAD1,SICADAD2,SICADAD3,SICALOC,SICAMES:    
                        SICAUR1,SICAUR2,SICAUD1,SICAUD2,SICAUC1,SICAUC2:        
                        SICAUY1,SICAUY2,SICARID,SICAPACC,SICASPA                
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRSICA1   RESET     KEY5                                                        
          WRITE     SINCCAA1,KEY5;SICACODE,SICADESC,SICATELE,SICACONT,SICAGL:   
                        SICAIMPD,SICADAD1,SICADAD2,SICADAD3,SICALOC,SICAMES:    
                        SICAUR1,SICAUR2,SICAUD1,SICAUD2,SICAUC1,SICAUC2:        
                        SICAUY1,SICAUY2,SICARID,SICAPACC,SICASPA                
          RETURN
.
DESICA1   RESET     KEY5                                                        
          DELETE    SINCCAA1,KEY5                                               
          RETURN
.
RLSICA1   RESET     KEY5                                                        
          MOVE      ZERO,OVRCD
          READL     SINCCAA1,KEY5;SICACODE,SICADESC,SICATELE,SICACONT,SICAGL:   
                        SICAIMPD,SICADAD1,SICADAD2,SICADAD3,SICALOC,SICAMES:    
                        SICAUR1,SICAUR2,SICAUD1,SICAUD2,SICAUC1,SICAUC2:        
                        SICAUY1,SICAUY2,SICARID,SICAPACC,SICASPA                
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLSICA1                                                                         
          MOVE      ZERO,OVRCD
          READLKS   SINCCAA1;SICACODE,SICADESC,SICATELE,SICACONT,SICAGL:        
                        SICAIMPD,SICADAD1,SICADAD2,SICADAD3,SICALOC,SICAMES:    
                        SICAUR1,SICAUR2,SICAUD1,SICAUD2,SICAUC1,SICAUC2:        
                        SICAUY1,SICAUY2,SICARID,SICAPACC,SICASPA                
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLSICA1                                                                         
          MOVE      ZERO,OVRCD
          READLKP   SINCCAA1;SICACODE,SICADESC,SICATELE,SICACONT,SICAGL:        
                        SICAIMPD,SICADAD1,SICADAD2,SICADAD3,SICALOC,SICAMES:    
                        SICAUR1,SICAUR2,SICAUD1,SICAUD2,SICAUC1,SICAUC2:        
                        SICAUY1,SICAUY2,SICARID,SICAPACC,SICASPA                
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUSICA1   RESET     KEY5                                                        
          UNLOCK    SINCCAA1                                                    
          RETURN
.
RSSICA2   RESET     KEY45                                                       
          READ      SINCCAA2,KEY45;;                                            
          RETURN
.
RASICA2   RESET     KEY45                                                       
          MOVE      ZERO,OVRCD
          READ      SINCCAA2,KEY45;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDSICA2   RESET     KEY45                                                       
          MOVE      ZERO,OVRCD
          READ      SINCCAA2,KEY45;SICACODE,SICADESC,SICATELE,SICACONT,SICAGL:  
                        SICAIMPD,SICADAD1,SICADAD2,SICADAD3,SICALOC,SICAMES:    
                        SICAUR1,SICAUR2,SICAUD1,SICAUD2,SICAUC1,SICAUC2:        
                        SICAUY1,SICAUY2,SICARID,SICAPACC,SICASPA                
          GOTO      OVERCOND IF OVER
          RETURN
.
RKSICA2                                                                         
          MOVE      ZERO,OVRCD
          READKS    SINCCAA2;SICACODE,SICADESC,SICATELE,SICACONT,SICAGL:        
                        SICAIMPD,SICADAD1,SICADAD2,SICADAD3,SICALOC,SICAMES:    
                        SICAUR1,SICAUR2,SICAUD1,SICAUD2,SICAUC1,SICAUC2:        
                        SICAUY1,SICAUY2,SICARID,SICAPACC,SICASPA                
          GOTO      OVERCOND IF OVER
          RETURN
.
RPSICA2                                                                         
          MOVE      ZERO,OVRCD
          READKP    SINCCAA2;SICACODE,SICADESC,SICATELE,SICACONT,SICAGL:        
                        SICAIMPD,SICADAD1,SICADAD2,SICADAD3,SICALOC,SICAMES:    
                        SICAUR1,SICAUR2,SICAUD1,SICAUD2,SICAUC1,SICAUC2:        
                        SICAUY1,SICAUY2,SICARID,SICAPACC,SICASPA                
          GOTO      OVERCOND IF OVER
          RETURN
.
UPSICA2                                                                         
          UPDATE    SINCCAA2;SICACODE,SICADESC,SICATELE,SICACONT,SICAGL:        
                        SICAIMPD,SICADAD1,SICADAD2,SICADAD3,SICALOC,SICAMES:    
                        SICAUR1,SICAUR2,SICAUD1,SICAUD2,SICAUC1,SICAUC2:        
                        SICAUY1,SICAUY2,SICARID,SICAPACC,SICASPA                
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRSICA2   RESET     KEY45                                                       
          WRITE     SINCCAA2,KEY45;SICACODE,SICADESC,SICATELE,SICACONT,SICAGL:  
                        SICAIMPD,SICADAD1,SICADAD2,SICADAD3,SICALOC,SICAMES:    
                        SICAUR1,SICAUR2,SICAUD1,SICAUD2,SICAUC1,SICAUC2:        
                        SICAUY1,SICAUY2,SICARID,SICAPACC,SICASPA                
          RETURN
.
DESICA2   RESET     KEY45                                                       
          DELETE    SINCCAA2,KEY45                                              
          RETURN
.
RLSICA2   RESET     KEY45                                                       
          MOVE      ZERO,OVRCD
          READL     SINCCAA2,KEY45;SICACODE,SICADESC,SICATELE,SICACONT,SICAGL:  
                        SICAIMPD,SICADAD1,SICADAD2,SICADAD3,SICALOC,SICAMES:    
                        SICAUR1,SICAUR2,SICAUD1,SICAUD2,SICAUC1,SICAUC2:        
                        SICAUY1,SICAUY2,SICARID,SICAPACC,SICASPA                
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLSICA2                                                                         
          MOVE      ZERO,OVRCD
          READLKS   SINCCAA2;SICACODE,SICADESC,SICATELE,SICACONT,SICAGL:        
                        SICAIMPD,SICADAD1,SICADAD2,SICADAD3,SICALOC,SICAMES:    
                        SICAUR1,SICAUR2,SICAUD1,SICAUD2,SICAUC1,SICAUC2:        
                        SICAUY1,SICAUY2,SICARID,SICAPACC,SICASPA                
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLSICA2                                                                         
          MOVE      ZERO,OVRCD
          READLKP   SINCCAA2;SICACODE,SICADESC,SICATELE,SICACONT,SICAGL:        
                        SICAIMPD,SICADAD1,SICADAD2,SICADAD3,SICALOC,SICAMES:    
                        SICAUR1,SICAUR2,SICAUD1,SICAUD2,SICAUC1,SICAUC2:        
                        SICAUY1,SICAUY2,SICARID,SICAPACC,SICASPA                
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUSICA2   RESET     KEY45                                                       
          UNLOCK    SINCCAA2                                                    
          RETURN
.
.**************************************
. WAssff - Write Audit Record           
. Requires - AUDTTYPE 1=write 
.                     2=before change
.                     3=after change
.                     4=delete
.**************************************
WASICA00
          MOVE      "   24",AUDTSECT
          MOVE      "202",AUDTPOST
          READ      CONTROLF,AUDTSECT;*AUDTPOST,AUDTFLAG
          COMPARE   ONE,AUDTFLAG
          GOTO      WASICA99 IF NOT EQUAL
.
          PACK      SICAAUDD,CCC,CYY,CMM,CDD
          REP       " 0",SICAAUDD
          CLOCK     TIME,SICAAUDT
          MOVE      PORT,SICAAUDP
          LOAD      SICAAUDR,AUDTTYPE,ANSA,ANSB,ANSC,ANSD
          MOVE      ONE,SICAAUDS
          MOVE      PASSCODE,SICAAUDO
          PACK      KEY19,SICAAUDD,SICAAUDT,SICAAUDP,SICAAUDR
          MOVE      KEY19,AUDTSKEY
          CALL      AWSICA
WASICA99  RETURN
.**************************************
. DAssff - Delete Before Change Audit 
.**************************************
DASICA00
          MOVE      "   24",AUDTSECT
          MOVE      "202",AUDTPOST
          READ      CONTROLF,AUDTSECT;*AUDTPOST,AUDTFLAG
          COMPARE   ONE,AUDTFLAG
          GOTO      DASICA99 IF NOT EQUAL
.
          MOVE      AUDTSKEY,KEY19
          CALL      ADSICA
DASICA99  RETURN
ASSICA    RESET     KEY19                                                       
          READ      SINAUDCA,KEY19;;                                            
          RETURN
.
AKSICA                                                                          
          MOVE      ZERO,OVRCD
          READKS    SINAUDCA;SICAAUDD,SICAAUDT,SICAAUDP,SICAAUDR,SICAAUDS:      
                    SICAAUDO,SICACODE,SICADESC,SICATELE,SICACONT,SICAGL:        
                        SICAIMPD,SICADAD1,SICADAD2,SICADAD3,SICALOC,SICAMES:    
                        SICAUR1,SICAUR2,SICAUD1,SICAUD2,SICAUC1,SICAUC2:        
                        SICAUY1,SICAUY2,SICARID,SICAPACC,SICASPA                
          GOTO      OVERCOND IF OVER
          RETURN
.
AUSICA                                                                          
          UPDATE    SINAUDCA;SICAAUDD,SICAAUDT,SICAAUDP,SICAAUDR,SICAAUDS:      
                    SICAAUDO,SICACODE,SICADESC,SICATELE,SICACONT,SICAGL:        
                        SICAIMPD,SICADAD1,SICADAD2,SICADAD3,SICALOC,SICAMES:    
                        SICAUR1,SICAUR2,SICAUD1,SICAUD2,SICAUC1,SICAUC2:        
                        SICAUY1,SICAUY2,SICARID,SICAPACC,SICASPA                
          RETURN
.
AWSICA    RESET     KEY19                                                       
          WRITE     SINAUDCA,KEY19;SICAAUDD,SICAAUDT,SICAAUDP,SICAAUDR,SICAAUDS:
                    SICAAUDO,SICACODE,SICADESC,SICATELE,SICACONT,SICAGL:        
                        SICAIMPD,SICADAD1,SICADAD2,SICADAD3,SICALOC,SICAMES:    
                        SICAUR1,SICAUR2,SICAUD1,SICAUD2,SICAUC1,SICAUC2:        
                        SICAUY1,SICAUY2,SICARID,SICAPACC,SICASPA                
          RETURN
.
ADSICA    RESET     KEY19                                                       
          DELETE    SINAUDCA,KEY19;                                             
          RETURN
.
