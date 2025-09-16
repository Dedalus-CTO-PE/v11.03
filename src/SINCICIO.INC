.
. SINCICIO    
. --------
. Filename     : sincicaf.dat
.
RSSIIC1   RESET     KEY27                                                       
          READ      SINCICA1,KEY27;;                                            
          RETURN
.
RASIIC1   RESET     KEY27                                                       
          MOVE      ZERO,OVRCD
          READ      SINCICA1,KEY27;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDSIIC1   RESET     KEY27                                                       
          MOVE      ZERO,OVRCD
          READ      SINCICA1,KEY27;SIICCAT,SIICSUP,SIICSUT,SIICCCT,SIICLCT:     
                        SIICLTM,SIICPNO,SIICPD1,SIICPD2,SIICMAN,SIICAPO:        
                        SIICUR1,SIICUR2,SIICUD1,SIICUD2,SIICUC1,SIICUC2:        
                        SIICUY1,SIICUY2,SIICUOM,SIICCONT,SIICCTEX,SIICSPA       
          GOTO      OVERCOND IF OVER
          RETURN
.
RKSIIC1                                                                         
          MOVE      ZERO,OVRCD
          READKS    SINCICA1;SIICCAT,SIICSUP,SIICSUT,SIICCCT,SIICLCT:           
                        SIICLTM,SIICPNO,SIICPD1,SIICPD2,SIICMAN,SIICAPO:        
                        SIICUR1,SIICUR2,SIICUD1,SIICUD2,SIICUC1,SIICUC2:        
                        SIICUY1,SIICUY2,SIICUOM,SIICCONT,SIICCTEX,SIICSPA       
          GOTO      OVERCOND IF OVER
          RETURN
.
RPSIIC1                                                                         
          MOVE      ZERO,OVRCD
          READKP    SINCICA1;SIICCAT,SIICSUP,SIICSUT,SIICCCT,SIICLCT:           
                        SIICLTM,SIICPNO,SIICPD1,SIICPD2,SIICMAN,SIICAPO:        
                        SIICUR1,SIICUR2,SIICUD1,SIICUD2,SIICUC1,SIICUC2:        
                        SIICUY1,SIICUY2,SIICUOM,SIICCONT,SIICCTEX,SIICSPA       
          GOTO      OVERCOND IF OVER
          RETURN
.
UPSIIC1                                                                         
          UPDATE    SINCICA1;SIICCAT,SIICSUP,SIICSUT,SIICCCT,SIICLCT:           
                        SIICLTM,SIICPNO,SIICPD1,SIICPD2,SIICMAN,SIICAPO:        
                        SIICUR1,SIICUR2,SIICUD1,SIICUD2,SIICUC1,SIICUC2:        
                        SIICUY1,SIICUY2,SIICUOM,SIICCONT,SIICCTEX,SIICSPA       
          RETURN
.
WRSIIC1   RESET     KEY27                                                       
          WRITE     SINCICA1,KEY27;SIICCAT,SIICSUP,SIICSUT,SIICCCT,SIICLCT:     
                        SIICLTM,SIICPNO,SIICPD1,SIICPD2,SIICMAN,SIICAPO:        
                        SIICUR1,SIICUR2,SIICUD1,SIICUD2,SIICUC1,SIICUC2:        
                        SIICUY1,SIICUY2,SIICUOM,SIICCONT,SIICCTEX,SIICSPA       
          RETURN
.
DESIIC1   RESET     KEY27                                                       
          DELETE    SINCICA1,KEY27                                              
          RETURN
.
RSSIIC2   RESET     KEY57                                                       
          READ      SINCICA2,KEY57;;                                            
          RETURN
.
RASIIC2   RESET     KEY57                                                       
          MOVE      ZERO,OVRCD
          READ      SINCICA2,KEY57;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDSIIC2   RESET     KEY57                                                       
          MOVE      ZERO,OVRCD
          READ      SINCICA2,KEY57;SIICCAT,SIICSUP,SIICSUT,SIICCCT,SIICLCT:     
                        SIICLTM,SIICPNO,SIICPD1,SIICPD2,SIICMAN,SIICAPO:        
                        SIICUR1,SIICUR2,SIICUD1,SIICUD2,SIICUC1,SIICUC2:        
                        SIICUY1,SIICUY2,SIICUOM,SIICCONT,SIICCTEX,SIICSPA       
          GOTO      OVERCOND IF OVER
          RETURN
.
RKSIIC2                                                                         
          MOVE      ZERO,OVRCD
          READKS    SINCICA2;SIICCAT,SIICSUP,SIICSUT,SIICCCT,SIICLCT:           
                        SIICLTM,SIICPNO,SIICPD1,SIICPD2,SIICMAN,SIICAPO:        
                        SIICUR1,SIICUR2,SIICUD1,SIICUD2,SIICUC1,SIICUC2:        
                        SIICUY1,SIICUY2,SIICUOM,SIICCONT,SIICCTEX,SIICSPA       
          GOTO      OVERCOND IF OVER
          RETURN
.
RPSIIC2                                                                         
          MOVE      ZERO,OVRCD
          READKP    SINCICA2;SIICCAT,SIICSUP,SIICSUT,SIICCCT,SIICLCT:           
                        SIICLTM,SIICPNO,SIICPD1,SIICPD2,SIICMAN,SIICAPO:        
                        SIICUR1,SIICUR2,SIICUD1,SIICUD2,SIICUC1,SIICUC2:        
                        SIICUY1,SIICUY2,SIICUOM,SIICCONT,SIICCTEX,SIICSPA       
          GOTO      OVERCOND IF OVER
          RETURN
.
UPSIIC2                                                                         
          UPDATE    SINCICA2;SIICCAT,SIICSUP,SIICSUT,SIICCCT,SIICLCT:           
                        SIICLTM,SIICPNO,SIICPD1,SIICPD2,SIICMAN,SIICAPO:        
                        SIICUR1,SIICUR2,SIICUD1,SIICUD2,SIICUC1,SIICUC2:        
                        SIICUY1,SIICUY2,SIICUOM,SIICCONT,SIICCTEX,SIICSPA       
          RETURN
.
WRSIIC2   RESET     KEY57                                                       
          WRITE     SINCICA2,KEY57;SIICCAT,SIICSUP,SIICSUT,SIICCCT,SIICLCT:     
                        SIICLTM,SIICPNO,SIICPD1,SIICPD2,SIICMAN,SIICAPO:        
                        SIICUR1,SIICUR2,SIICUD1,SIICUD2,SIICUC1,SIICUC2:        
                        SIICUY1,SIICUY2,SIICUOM,SIICCONT,SIICCTEX,SIICSPA       
          RETURN
.
DESIIC2   RESET     KEY57                                                       
          DELETE    SINCICA2,KEY57                                              
          RETURN
.
RSSIIC3   RESET     KEY27                                                       
          READ      SINCICA3,KEY27;;                                            
          RETURN
.
RASIIC3   RESET     KEY27                                                       
          MOVE      ZERO,OVRCD
          READ      SINCICA3,KEY27;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDSIIC3   RESET     KEY27                                                       
          MOVE      ZERO,OVRCD
          READ      SINCICA3,KEY27;SIICCAT,SIICSUP,SIICSUT,SIICCCT,SIICLCT:     
                        SIICLTM,SIICPNO,SIICPD1,SIICPD2,SIICMAN,SIICAPO:        
                        SIICUR1,SIICUR2,SIICUD1,SIICUD2,SIICUC1,SIICUC2:        
                        SIICUY1,SIICUY2,SIICUOM,SIICCONT,SIICCTEX,SIICSPA       
          GOTO      OVERCOND IF OVER
          RETURN
.
RKSIIC3                                                                         
          MOVE      ZERO,OVRCD
          READKS    SINCICA3;SIICCAT,SIICSUP,SIICSUT,SIICCCT,SIICLCT:           
                        SIICLTM,SIICPNO,SIICPD1,SIICPD2,SIICMAN,SIICAPO:        
                        SIICUR1,SIICUR2,SIICUD1,SIICUD2,SIICUC1,SIICUC2:        
                        SIICUY1,SIICUY2,SIICUOM,SIICCONT,SIICCTEX,SIICSPA       
          GOTO      OVERCOND IF OVER
          RETURN
.
RPSIIC3                                                                         
          MOVE      ZERO,OVRCD
          READKP    SINCICA3;SIICCAT,SIICSUP,SIICSUT,SIICCCT,SIICLCT:           
                        SIICLTM,SIICPNO,SIICPD1,SIICPD2,SIICMAN,SIICAPO:        
                        SIICUR1,SIICUR2,SIICUD1,SIICUD2,SIICUC1,SIICUC2:        
                        SIICUY1,SIICUY2,SIICUOM,SIICCONT,SIICCTEX,SIICSPA       
          GOTO      OVERCOND IF OVER
          RETURN
.
UPSIIC3                                                                         
          UPDATE    SINCICA3;SIICCAT,SIICSUP,SIICSUT,SIICCCT,SIICLCT:           
                        SIICLTM,SIICPNO,SIICPD1,SIICPD2,SIICMAN,SIICAPO:        
                        SIICUR1,SIICUR2,SIICUD1,SIICUD2,SIICUC1,SIICUC2:        
                        SIICUY1,SIICUY2,SIICUOM,SIICCONT,SIICCTEX,SIICSPA       
          RETURN
.
WRSIIC3   RESET     KEY27                                                       
          WRITE     SINCICA3,KEY27;SIICCAT,SIICSUP,SIICSUT,SIICCCT,SIICLCT:     
                        SIICLTM,SIICPNO,SIICPD1,SIICPD2,SIICMAN,SIICAPO:        
                        SIICUR1,SIICUR2,SIICUD1,SIICUD2,SIICUC1,SIICUC2:        
                        SIICUY1,SIICUY2,SIICUOM,SIICCONT,SIICCTEX,SIICSPA       
          RETURN
.
DESIIC3   RESET     KEY27                                                       
          DELETE    SINCICA3,KEY27                                              
          RETURN
.
RSSIIC4   RESET     KEY57                                                       
          READ      SINCICA4,KEY57;;                                            
          RETURN
.
RASIIC4   RESET     KEY57                                                       
          MOVE      ZERO,OVRCD
          READ      SINCICA4,KEY57;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDSIIC4   RESET     KEY57                                                       
          MOVE      ZERO,OVRCD
          READ      SINCICA4,KEY57;SIICCAT,SIICSUP,SIICSUT,SIICCCT,SIICLCT:     
                        SIICLTM,SIICPNO,SIICPD1,SIICPD2,SIICMAN,SIICAPO:        
                        SIICUR1,SIICUR2,SIICUD1,SIICUD2,SIICUC1,SIICUC2:        
                        SIICUY1,SIICUY2,SIICUOM,SIICCONT,SIICCTEX,SIICSPA       
          GOTO      OVERCOND IF OVER
          RETURN
.
RKSIIC4                                                                         
          MOVE      ZERO,OVRCD
          READKS    SINCICA4;SIICCAT,SIICSUP,SIICSUT,SIICCCT,SIICLCT:           
                        SIICLTM,SIICPNO,SIICPD1,SIICPD2,SIICMAN,SIICAPO:        
                        SIICUR1,SIICUR2,SIICUD1,SIICUD2,SIICUC1,SIICUC2:        
                        SIICUY1,SIICUY2,SIICUOM,SIICCONT,SIICCTEX,SIICSPA       
          GOTO      OVERCOND IF OVER
          RETURN
.
RPSIIC4                                                                         
          MOVE      ZERO,OVRCD
          READKP    SINCICA4;SIICCAT,SIICSUP,SIICSUT,SIICCCT,SIICLCT:           
                        SIICLTM,SIICPNO,SIICPD1,SIICPD2,SIICMAN,SIICAPO:        
                        SIICUR1,SIICUR2,SIICUD1,SIICUD2,SIICUC1,SIICUC2:        
                        SIICUY1,SIICUY2,SIICUOM,SIICCONT,SIICCTEX,SIICSPA       
          GOTO      OVERCOND IF OVER
          RETURN
.
UPSIIC4                                                                         
          UPDATE    SINCICA4;SIICCAT,SIICSUP,SIICSUT,SIICCCT,SIICLCT:           
                        SIICLTM,SIICPNO,SIICPD1,SIICPD2,SIICMAN,SIICAPO:        
                        SIICUR1,SIICUR2,SIICUD1,SIICUD2,SIICUC1,SIICUC2:        
                        SIICUY1,SIICUY2,SIICUOM,SIICCONT,SIICCTEX,SIICSPA       
          RETURN
.
WRSIIC4   RESET     KEY57                                                       
          WRITE     SINCICA4,KEY57;SIICCAT,SIICSUP,SIICSUT,SIICCCT,SIICLCT:     
                        SIICLTM,SIICPNO,SIICPD1,SIICPD2,SIICMAN,SIICAPO:        
                        SIICUR1,SIICUR2,SIICUD1,SIICUD2,SIICUC1,SIICUC2:        
                        SIICUY1,SIICUY2,SIICUOM,SIICCONT,SIICCTEX,SIICSPA       
          RETURN
.
DESIIC4   RESET     KEY57                                                       
          DELETE    SINCICA4,KEY57                                              
          RETURN
.
.**************************************
. WAssff - Write Audit Record           
. Requires - AUDTTYPE 1=write 
.                     2=before change
.                     3=after change
.                     4=delete
.**************************************
WASIIC00
          MOVE      "   24",AUDTSECT
          MOVE      "207",AUDTPOST
          READ      CONTROLF,AUDTSECT;*AUDTPOST,AUDTFLAG
          COMPARE   ONE,AUDTFLAG
          GOTO      WASIIC99 IF NOT EQUAL
.
          PACK     SIICAUDD,CCC,CYY,CMM,CDD
          REP       " 0",SIICAUDD
          CLOCK     TIME,SIICAUDT
          MOVE      PORT,SIICAUDP
          LOAD      SIICAUDR,AUDTTYPE,ANSA,ANSB,ANSC,ANSD
          MOVE      ONE,SIICAUDS
          MOVE      PASSCODE,SIICAUDO
          PACK      KEY19,SIICAUDD,SIICAUDT,SIICAUDP,SIICAUDR
          MOVE      KEY19,AUDTSKEY
          CALL      AWSIIC
WASIIC99  RETURN
.**************************************
. DAssff - Delete Before Change Audit 
.**************************************
DASIIC00
          MOVE      "   24",AUDTSECT
          MOVE      "207",AUDTPOST
          READ      CONTROLF,AUDTSECT;*AUDTPOST,AUDTFLAG
          COMPARE   ONE,AUDTFLAG
          GOTO      DASIIC99 IF NOT EQUAL
.
          MOVE      AUDTSKEY,KEY19
          CALL      ADSIIC
DASIIC99  RETURN
ASSIIC    RESET     KEY19                                                       
          READ      SINAUDIC,KEY19;;                                            
          RETURN
.
AKSIIC                                                                          
          MOVE      ZERO,OVRCD
          READKS    SINAUDIC;SIICAUDD,SIICAUDT,SIICAUDP,SIICAUDR,SIICAUDS:      
                    SIICAUDO,SIICCAT,SIICSUP,SIICSUT,SIICCCT,SIICLCT:           
                        SIICLTM,SIICPNO,SIICPD1,SIICPD2,SIICMAN,SIICAPO:        
                        SIICUR1,SIICUR2,SIICUD1,SIICUD2,SIICUC1,SIICUC2:        
                        SIICUY1,SIICUY2,SIICUOM,SIICCONT,SIICCTEX,SIICSPA       
          GOTO      OVERCOND IF OVER
          RETURN
.
AUSIIC                                                                          
          UPDATE    SINAUDIC;SIICAUDD,SIICAUDT,SIICAUDP,SIICAUDR,SIICAUDS:      
                    SIICAUDO,SIICCAT,SIICSUP,SIICSUT,SIICCCT,SIICLCT:           
                        SIICLTM,SIICPNO,SIICPD1,SIICPD2,SIICMAN,SIICAPO:        
                        SIICUR1,SIICUR2,SIICUD1,SIICUD2,SIICUC1,SIICUC2:        
                        SIICUY1,SIICUY2,SIICUOM,SIICCONT,SIICCTEX,SIICSPA       
          RETURN
.
AWSIIC    RESET     KEY19                                                       
          WRITE     SINAUDIC,KEY19;SIICAUDD,SIICAUDT,SIICAUDP,SIICAUDR,SIICAUDS:
                    SIICAUDO,SIICCAT,SIICSUP,SIICSUT,SIICCCT,SIICLCT:           
                        SIICLTM,SIICPNO,SIICPD1,SIICPD2,SIICMAN,SIICAPO:        
                        SIICUR1,SIICUR2,SIICUD1,SIICUD2,SIICUC1,SIICUC2:        
                        SIICUY1,SIICUY2,SIICUOM,SIICCONT,SIICCTEX,SIICSPA       
          RETURN
.
ADSIIC    RESET     KEY19                                                       
          DELETE    SINAUDIC,KEY19;                                             
          RETURN
.
