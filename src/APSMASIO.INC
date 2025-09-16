.
. APSMASIO    
. --------
. Filename     : apsmasaf.dat
.
RSAPMA1   RESET     KEY5                                                        
          READ      APSMASA1,KEY5;;                                             
          RETURN
.
RAAPMA1   RESET     KEY5                                                        
          MOVE      ZERO,OVRCD
          READ      APSMASA1,KEY5;ANS                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
RDAPMA1   RESET     KEY5                                                        
          MOVE      ZERO,OVRCD
          READ      APSMASA1,KEY5;APMACRD,APMATYP,APMASKY,APMACN1,APMACN2:      
                        APMACA1,APMACA2,APMACA3,APMACPC,APMACTEL,APMACFAX:      
                        APMACMOD,APMACEDI,APMACON,APMASN1,APMASN2,APMASA1:      
                        APMASA2,APMASA3,APMASPC,APMASTEL,APMASFAX,APMASMOD:     
                        APMASEDI,APMASCON,APMABSB,APMABAC,APMAPNM,APMAPPT:      
                        APMAPOT,APMAHOR,APMAHIN,APMAHCR,APMAHPY,APMAPMT:        
                        APMAGMT,APMAPPD,APMADTM,APMAUR1,APMAUR2,APMAUD1:        
                        APMAUD2,APMAUC1,APMAUC2,APMAGREG,APMAUY2,APMADIS:       
                        APMATSE,APMAABN,APMADISS,APMASPA                        
          GOTO      OVERCOND IF OVER
          RETURN
.
RKAPMA1                                                                         
          MOVE      ZERO,OVRCD
          READKS    APSMASA1;APMACRD,APMATYP,APMASKY,APMACN1,APMACN2:           
                        APMACA1,APMACA2,APMACA3,APMACPC,APMACTEL,APMACFAX:      
                        APMACMOD,APMACEDI,APMACON,APMASN1,APMASN2,APMASA1:      
                        APMASA2,APMASA3,APMASPC,APMASTEL,APMASFAX,APMASMOD:     
                        APMASEDI,APMASCON,APMABSB,APMABAC,APMAPNM,APMAPPT:      
                        APMAPOT,APMAHOR,APMAHIN,APMAHCR,APMAHPY,APMAPMT:        
                        APMAGMT,APMAPPD,APMADTM,APMAUR1,APMAUR2,APMAUD1:        
                        APMAUD2,APMAUC1,APMAUC2,APMAGREG,APMAUY2,APMADIS:       
                        APMATSE,APMAABN,APMADISS,APMASPA                        
          GOTO      OVERCOND IF OVER
          RETURN
.
RPAPMA1                                                                         
          MOVE      ZERO,OVRCD
          READKP    APSMASA1;APMACRD,APMATYP,APMASKY,APMACN1,APMACN2:           
                        APMACA1,APMACA2,APMACA3,APMACPC,APMACTEL,APMACFAX:      
                        APMACMOD,APMACEDI,APMACON,APMASN1,APMASN2,APMASA1:      
                        APMASA2,APMASA3,APMASPC,APMASTEL,APMASFAX,APMASMOD:     
                        APMASEDI,APMASCON,APMABSB,APMABAC,APMAPNM,APMAPPT:      
                        APMAPOT,APMAHOR,APMAHIN,APMAHCR,APMAHPY,APMAPMT:        
                        APMAGMT,APMAPPD,APMADTM,APMAUR1,APMAUR2,APMAUD1:        
                        APMAUD2,APMAUC1,APMAUC2,APMAGREG,APMAUY2,APMADIS:       
                        APMATSE,APMAABN,APMADISS,APMASPA                        
          GOTO      OVERCOND IF OVER
          RETURN
.
UPAPMA1                                                                         
          UPDATE    APSMASA1;APMACRD,APMATYP,APMASKY,APMACN1,APMACN2:           
                        APMACA1,APMACA2,APMACA3,APMACPC,APMACTEL,APMACFAX:      
                        APMACMOD,APMACEDI,APMACON,APMASN1,APMASN2,APMASA1:      
                        APMASA2,APMASA3,APMASPC,APMASTEL,APMASFAX,APMASMOD:     
                        APMASEDI,APMASCON,APMABSB,APMABAC,APMAPNM,APMAPPT:      
                        APMAPOT,APMAHOR,APMAHIN,APMAHCR,APMAHPY,APMAPMT:        
                        APMAGMT,APMAPPD,APMADTM,APMAUR1,APMAUR2,APMAUD1:        
                        APMAUD2,APMAUC1,APMAUC2,APMAGREG,APMAUY2,APMADIS:       
                        APMATSE,APMAABN,APMADISS,APMASPA                        
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRAPMA1   RESET     KEY5                                                        
          WRITE     APSMASA1,KEY5;APMACRD,APMATYP,APMASKY,APMACN1,APMACN2:      
                        APMACA1,APMACA2,APMACA3,APMACPC,APMACTEL,APMACFAX:      
                        APMACMOD,APMACEDI,APMACON,APMASN1,APMASN2,APMASA1:      
                        APMASA2,APMASA3,APMASPC,APMASTEL,APMASFAX,APMASMOD:     
                        APMASEDI,APMASCON,APMABSB,APMABAC,APMAPNM,APMAPPT:      
                        APMAPOT,APMAHOR,APMAHIN,APMAHCR,APMAHPY,APMAPMT:        
                        APMAGMT,APMAPPD,APMADTM,APMAUR1,APMAUR2,APMAUD1:        
                        APMAUD2,APMAUC1,APMAUC2,APMAGREG,APMAUY2,APMADIS:       
                        APMATSE,APMAABN,APMADISS,APMASPA                        
          RETURN
.
DEAPMA1   RESET     KEY5                                                        
          DELETE    APSMASA1,KEY5                                               
          RETURN
.
RLAPMA1   RESET     KEY5                                                        
          MOVE      ZERO,OVRCD
          READL     APSMASA1,KEY5;APMACRD,APMATYP,APMASKY,APMACN1,APMACN2:      
                        APMACA1,APMACA2,APMACA3,APMACPC,APMACTEL,APMACFAX:      
                        APMACMOD,APMACEDI,APMACON,APMASN1,APMASN2,APMASA1:      
                        APMASA2,APMASA3,APMASPC,APMASTEL,APMASFAX,APMASMOD:     
                        APMASEDI,APMASCON,APMABSB,APMABAC,APMAPNM,APMAPPT:      
                        APMAPOT,APMAHOR,APMAHIN,APMAHCR,APMAHPY,APMAPMT:        
                        APMAGMT,APMAPPD,APMADTM,APMAUR1,APMAUR2,APMAUD1:        
                        APMAUD2,APMAUC1,APMAUC2,APMAGREG,APMAUY2,APMADIS:       
                        APMATSE,APMAABN,APMADISS,APMASPA                        
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLAPMA1                                                                         
          MOVE      ZERO,OVRCD
          READLKS   APSMASA1;APMACRD,APMATYP,APMASKY,APMACN1,APMACN2:           
                        APMACA1,APMACA2,APMACA3,APMACPC,APMACTEL,APMACFAX:      
                        APMACMOD,APMACEDI,APMACON,APMASN1,APMASN2,APMASA1:      
                        APMASA2,APMASA3,APMASPC,APMASTEL,APMASFAX,APMASMOD:     
                        APMASEDI,APMASCON,APMABSB,APMABAC,APMAPNM,APMAPPT:      
                        APMAPOT,APMAHOR,APMAHIN,APMAHCR,APMAHPY,APMAPMT:        
                        APMAGMT,APMAPPD,APMADTM,APMAUR1,APMAUR2,APMAUD1:        
                        APMAUD2,APMAUC1,APMAUC2,APMAGREG,APMAUY2,APMADIS:       
                        APMATSE,APMAABN,APMADISS,APMASPA                        
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLAPMA1                                                                         
          MOVE      ZERO,OVRCD
          READLKP   APSMASA1;APMACRD,APMATYP,APMASKY,APMACN1,APMACN2:           
                        APMACA1,APMACA2,APMACA3,APMACPC,APMACTEL,APMACFAX:      
                        APMACMOD,APMACEDI,APMACON,APMASN1,APMASN2,APMASA1:      
                        APMASA2,APMASA3,APMASPC,APMASTEL,APMASFAX,APMASMOD:     
                        APMASEDI,APMASCON,APMABSB,APMABAC,APMAPNM,APMAPPT:      
                        APMAPOT,APMAHOR,APMAHIN,APMAHCR,APMAHPY,APMAPMT:        
                        APMAGMT,APMAPPD,APMADTM,APMAUR1,APMAUR2,APMAUD1:        
                        APMAUD2,APMAUC1,APMAUC2,APMAGREG,APMAUY2,APMADIS:       
                        APMATSE,APMAABN,APMADISS,APMASPA                        
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUAPMA1   RESET     KEY5                                                        
          UNLOCK    APSMASA1                                                    
          RETURN
.
RSAPMA2   RESET     KEY8                                                        
          READ      APSMASA2,KEY8;;                                             
          RETURN
.
RAAPMA2   RESET     KEY8                                                        
          MOVE      ZERO,OVRCD
          READ      APSMASA2,KEY8;ANS                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
RDAPMA2   RESET     KEY8                                                        
          MOVE      ZERO,OVRCD
          READ      APSMASA2,KEY8;APMACRD,APMATYP,APMASKY,APMACN1,APMACN2:      
                        APMACA1,APMACA2,APMACA3,APMACPC,APMACTEL,APMACFAX:      
                        APMACMOD,APMACEDI,APMACON,APMASN1,APMASN2,APMASA1:      
                        APMASA2,APMASA3,APMASPC,APMASTEL,APMASFAX,APMASMOD:     
                        APMASEDI,APMASCON,APMABSB,APMABAC,APMAPNM,APMAPPT:      
                        APMAPOT,APMAHOR,APMAHIN,APMAHCR,APMAHPY,APMAPMT:        
                        APMAGMT,APMAPPD,APMADTM,APMAUR1,APMAUR2,APMAUD1:        
                        APMAUD2,APMAUC1,APMAUC2,APMAGREG,APMAUY2,APMADIS:       
                        APMATSE,APMAABN,APMADISS,APMASPA                        
          GOTO      OVERCOND IF OVER
          RETURN
.
RKAPMA2                                                                         
          MOVE      ZERO,OVRCD
          READKS    APSMASA2;APMACRD,APMATYP,APMASKY,APMACN1,APMACN2:           
                        APMACA1,APMACA2,APMACA3,APMACPC,APMACTEL,APMACFAX:      
                        APMACMOD,APMACEDI,APMACON,APMASN1,APMASN2,APMASA1:      
                        APMASA2,APMASA3,APMASPC,APMASTEL,APMASFAX,APMASMOD:     
                        APMASEDI,APMASCON,APMABSB,APMABAC,APMAPNM,APMAPPT:      
                        APMAPOT,APMAHOR,APMAHIN,APMAHCR,APMAHPY,APMAPMT:        
                        APMAGMT,APMAPPD,APMADTM,APMAUR1,APMAUR2,APMAUD1:        
                        APMAUD2,APMAUC1,APMAUC2,APMAGREG,APMAUY2,APMADIS:       
                        APMATSE,APMAABN,APMADISS,APMASPA                        
          GOTO      OVERCOND IF OVER
          RETURN
.
RPAPMA2                                                                         
          MOVE      ZERO,OVRCD
          READKP    APSMASA2;APMACRD,APMATYP,APMASKY,APMACN1,APMACN2:           
                        APMACA1,APMACA2,APMACA3,APMACPC,APMACTEL,APMACFAX:      
                        APMACMOD,APMACEDI,APMACON,APMASN1,APMASN2,APMASA1:      
                        APMASA2,APMASA3,APMASPC,APMASTEL,APMASFAX,APMASMOD:     
                        APMASEDI,APMASCON,APMABSB,APMABAC,APMAPNM,APMAPPT:      
                        APMAPOT,APMAHOR,APMAHIN,APMAHCR,APMAHPY,APMAPMT:        
                        APMAGMT,APMAPPD,APMADTM,APMAUR1,APMAUR2,APMAUD1:        
                        APMAUD2,APMAUC1,APMAUC2,APMAGREG,APMAUY2,APMADIS:       
                        APMATSE,APMAABN,APMADISS,APMASPA                        
          GOTO      OVERCOND IF OVER
          RETURN
.
UPAPMA2                                                                         
          UPDATE    APSMASA2;APMACRD,APMATYP,APMASKY,APMACN1,APMACN2:           
                        APMACA1,APMACA2,APMACA3,APMACPC,APMACTEL,APMACFAX:      
                        APMACMOD,APMACEDI,APMACON,APMASN1,APMASN2,APMASA1:      
                        APMASA2,APMASA3,APMASPC,APMASTEL,APMASFAX,APMASMOD:     
                        APMASEDI,APMASCON,APMABSB,APMABAC,APMAPNM,APMAPPT:      
                        APMAPOT,APMAHOR,APMAHIN,APMAHCR,APMAHPY,APMAPMT:        
                        APMAGMT,APMAPPD,APMADTM,APMAUR1,APMAUR2,APMAUD1:        
                        APMAUD2,APMAUC1,APMAUC2,APMAGREG,APMAUY2,APMADIS:       
                        APMATSE,APMAABN,APMADISS,APMASPA                        
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRAPMA2   RESET     KEY8                                                        
          WRITE     APSMASA2,KEY8;APMACRD,APMATYP,APMASKY,APMACN1,APMACN2:      
                        APMACA1,APMACA2,APMACA3,APMACPC,APMACTEL,APMACFAX:      
                        APMACMOD,APMACEDI,APMACON,APMASN1,APMASN2,APMASA1:      
                        APMASA2,APMASA3,APMASPC,APMASTEL,APMASFAX,APMASMOD:     
                        APMASEDI,APMASCON,APMABSB,APMABAC,APMAPNM,APMAPPT:      
                        APMAPOT,APMAHOR,APMAHIN,APMAHCR,APMAHPY,APMAPMT:        
                        APMAGMT,APMAPPD,APMADTM,APMAUR1,APMAUR2,APMAUD1:        
                        APMAUD2,APMAUC1,APMAUC2,APMAGREG,APMAUY2,APMADIS:       
                        APMATSE,APMAABN,APMADISS,APMASPA                        
          RETURN
.
DEAPMA2   RESET     KEY8                                                        
          DELETE    APSMASA2,KEY8                                               
          RETURN
.
RLAPMA2   RESET     KEY8                                                        
          MOVE      ZERO,OVRCD
          READL     APSMASA2,KEY8;APMACRD,APMATYP,APMASKY,APMACN1,APMACN2:      
                        APMACA1,APMACA2,APMACA3,APMACPC,APMACTEL,APMACFAX:      
                        APMACMOD,APMACEDI,APMACON,APMASN1,APMASN2,APMASA1:      
                        APMASA2,APMASA3,APMASPC,APMASTEL,APMASFAX,APMASMOD:     
                        APMASEDI,APMASCON,APMABSB,APMABAC,APMAPNM,APMAPPT:      
                        APMAPOT,APMAHOR,APMAHIN,APMAHCR,APMAHPY,APMAPMT:        
                        APMAGMT,APMAPPD,APMADTM,APMAUR1,APMAUR2,APMAUD1:        
                        APMAUD2,APMAUC1,APMAUC2,APMAGREG,APMAUY2,APMADIS:       
                        APMATSE,APMAABN,APMADISS,APMASPA                        
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLAPMA2                                                                         
          MOVE      ZERO,OVRCD
          READLKS   APSMASA2;APMACRD,APMATYP,APMASKY,APMACN1,APMACN2:           
                        APMACA1,APMACA2,APMACA3,APMACPC,APMACTEL,APMACFAX:      
                        APMACMOD,APMACEDI,APMACON,APMASN1,APMASN2,APMASA1:      
                        APMASA2,APMASA3,APMASPC,APMASTEL,APMASFAX,APMASMOD:     
                        APMASEDI,APMASCON,APMABSB,APMABAC,APMAPNM,APMAPPT:      
                        APMAPOT,APMAHOR,APMAHIN,APMAHCR,APMAHPY,APMAPMT:        
                        APMAGMT,APMAPPD,APMADTM,APMAUR1,APMAUR2,APMAUD1:        
                        APMAUD2,APMAUC1,APMAUC2,APMAGREG,APMAUY2,APMADIS:       
                        APMATSE,APMAABN,APMADISS,APMASPA                        
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLAPMA2                                                                         
          MOVE      ZERO,OVRCD
          READLKP   APSMASA2;APMACRD,APMATYP,APMASKY,APMACN1,APMACN2:           
                        APMACA1,APMACA2,APMACA3,APMACPC,APMACTEL,APMACFAX:      
                        APMACMOD,APMACEDI,APMACON,APMASN1,APMASN2,APMASA1:      
                        APMASA2,APMASA3,APMASPC,APMASTEL,APMASFAX,APMASMOD:     
                        APMASEDI,APMASCON,APMABSB,APMABAC,APMAPNM,APMAPPT:      
                        APMAPOT,APMAHOR,APMAHIN,APMAHCR,APMAHPY,APMAPMT:        
                        APMAGMT,APMAPPD,APMADTM,APMAUR1,APMAUR2,APMAUD1:        
                        APMAUD2,APMAUC1,APMAUC2,APMAGREG,APMAUY2,APMADIS:       
                        APMATSE,APMAABN,APMADISS,APMASPA                        
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUAPMA2   RESET     KEY8                                                        
          UNLOCK    APSMASA2                                                    
          RETURN
.
RSAPMA3   RESET     KEY11                                                       
          READ      APSMASA3,KEY11;;                                            
          RETURN
.
RAAPMA3   RESET     KEY11                                                       
          MOVE      ZERO,OVRCD
          READ      APSMASA3,KEY11;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDAPMA3   RESET     KEY11                                                       
          MOVE      ZERO,OVRCD
          READ      APSMASA3,KEY11;APMACRD,APMATYP,APMASKY,APMACN1,APMACN2:     
                        APMACA1,APMACA2,APMACA3,APMACPC,APMACTEL,APMACFAX:      
                        APMACMOD,APMACEDI,APMACON,APMASN1,APMASN2,APMASA1:      
                        APMASA2,APMASA3,APMASPC,APMASTEL,APMASFAX,APMASMOD:     
                        APMASEDI,APMASCON,APMABSB,APMABAC,APMAPNM,APMAPPT:      
                        APMAPOT,APMAHOR,APMAHIN,APMAHCR,APMAHPY,APMAPMT:        
                        APMAGMT,APMAPPD,APMADTM,APMAUR1,APMAUR2,APMAUD1:        
                        APMAUD2,APMAUC1,APMAUC2,APMAGREG,APMAUY2,APMADIS:       
                        APMATSE,APMAABN,APMADISS,APMASPA                        
          GOTO      OVERCOND IF OVER
          RETURN
.
RKAPMA3                                                                         
          MOVE      ZERO,OVRCD
          READKS    APSMASA3;APMACRD,APMATYP,APMASKY,APMACN1,APMACN2:           
                        APMACA1,APMACA2,APMACA3,APMACPC,APMACTEL,APMACFAX:      
                        APMACMOD,APMACEDI,APMACON,APMASN1,APMASN2,APMASA1:      
                        APMASA2,APMASA3,APMASPC,APMASTEL,APMASFAX,APMASMOD:     
                        APMASEDI,APMASCON,APMABSB,APMABAC,APMAPNM,APMAPPT:      
                        APMAPOT,APMAHOR,APMAHIN,APMAHCR,APMAHPY,APMAPMT:        
                        APMAGMT,APMAPPD,APMADTM,APMAUR1,APMAUR2,APMAUD1:        
                        APMAUD2,APMAUC1,APMAUC2,APMAGREG,APMAUY2,APMADIS:       
                        APMATSE,APMAABN,APMADISS,APMASPA                        
          GOTO      OVERCOND IF OVER
          RETURN
.
RPAPMA3                                                                         
          MOVE      ZERO,OVRCD
          READKP    APSMASA3;APMACRD,APMATYP,APMASKY,APMACN1,APMACN2:           
                        APMACA1,APMACA2,APMACA3,APMACPC,APMACTEL,APMACFAX:      
                        APMACMOD,APMACEDI,APMACON,APMASN1,APMASN2,APMASA1:      
                        APMASA2,APMASA3,APMASPC,APMASTEL,APMASFAX,APMASMOD:     
                        APMASEDI,APMASCON,APMABSB,APMABAC,APMAPNM,APMAPPT:      
                        APMAPOT,APMAHOR,APMAHIN,APMAHCR,APMAHPY,APMAPMT:        
                        APMAGMT,APMAPPD,APMADTM,APMAUR1,APMAUR2,APMAUD1:        
                        APMAUD2,APMAUC1,APMAUC2,APMAGREG,APMAUY2,APMADIS:       
                        APMATSE,APMAABN,APMADISS,APMASPA                        
          GOTO      OVERCOND IF OVER
          RETURN
.
UPAPMA3                                                                         
          UPDATE    APSMASA3;APMACRD,APMATYP,APMASKY,APMACN1,APMACN2:           
                        APMACA1,APMACA2,APMACA3,APMACPC,APMACTEL,APMACFAX:      
                        APMACMOD,APMACEDI,APMACON,APMASN1,APMASN2,APMASA1:      
                        APMASA2,APMASA3,APMASPC,APMASTEL,APMASFAX,APMASMOD:     
                        APMASEDI,APMASCON,APMABSB,APMABAC,APMAPNM,APMAPPT:      
                        APMAPOT,APMAHOR,APMAHIN,APMAHCR,APMAHPY,APMAPMT:        
                        APMAGMT,APMAPPD,APMADTM,APMAUR1,APMAUR2,APMAUD1:        
                        APMAUD2,APMAUC1,APMAUC2,APMAGREG,APMAUY2,APMADIS:       
                        APMATSE,APMAABN,APMADISS,APMASPA                        
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRAPMA3   RESET     KEY11                                                       
          WRITE     APSMASA3,KEY11;APMACRD,APMATYP,APMASKY,APMACN1,APMACN2:     
                        APMACA1,APMACA2,APMACA3,APMACPC,APMACTEL,APMACFAX:      
                        APMACMOD,APMACEDI,APMACON,APMASN1,APMASN2,APMASA1:      
                        APMASA2,APMASA3,APMASPC,APMASTEL,APMASFAX,APMASMOD:     
                        APMASEDI,APMASCON,APMABSB,APMABAC,APMAPNM,APMAPPT:      
                        APMAPOT,APMAHOR,APMAHIN,APMAHCR,APMAHPY,APMAPMT:        
                        APMAGMT,APMAPPD,APMADTM,APMAUR1,APMAUR2,APMAUD1:        
                        APMAUD2,APMAUC1,APMAUC2,APMAGREG,APMAUY2,APMADIS:       
                        APMATSE,APMAABN,APMADISS,APMASPA                        
          RETURN
.
DEAPMA3   RESET     KEY11                                                       
          DELETE    APSMASA3,KEY11                                              
          RETURN
.
RLAPMA3   RESET     KEY11                                                       
          MOVE      ZERO,OVRCD
          READL     APSMASA3,KEY11;APMACRD,APMATYP,APMASKY,APMACN1,APMACN2:     
                        APMACA1,APMACA2,APMACA3,APMACPC,APMACTEL,APMACFAX:      
                        APMACMOD,APMACEDI,APMACON,APMASN1,APMASN2,APMASA1:      
                        APMASA2,APMASA3,APMASPC,APMASTEL,APMASFAX,APMASMOD:     
                        APMASEDI,APMASCON,APMABSB,APMABAC,APMAPNM,APMAPPT:      
                        APMAPOT,APMAHOR,APMAHIN,APMAHCR,APMAHPY,APMAPMT:        
                        APMAGMT,APMAPPD,APMADTM,APMAUR1,APMAUR2,APMAUD1:        
                        APMAUD2,APMAUC1,APMAUC2,APMAGREG,APMAUY2,APMADIS:       
                        APMATSE,APMAABN,APMADISS,APMASPA                        
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLAPMA3                                                                         
          MOVE      ZERO,OVRCD
          READLKS   APSMASA3;APMACRD,APMATYP,APMASKY,APMACN1,APMACN2:           
                        APMACA1,APMACA2,APMACA3,APMACPC,APMACTEL,APMACFAX:      
                        APMACMOD,APMACEDI,APMACON,APMASN1,APMASN2,APMASA1:      
                        APMASA2,APMASA3,APMASPC,APMASTEL,APMASFAX,APMASMOD:     
                        APMASEDI,APMASCON,APMABSB,APMABAC,APMAPNM,APMAPPT:      
                        APMAPOT,APMAHOR,APMAHIN,APMAHCR,APMAHPY,APMAPMT:        
                        APMAGMT,APMAPPD,APMADTM,APMAUR1,APMAUR2,APMAUD1:        
                        APMAUD2,APMAUC1,APMAUC2,APMAGREG,APMAUY2,APMADIS:       
                        APMATSE,APMAABN,APMADISS,APMASPA                        
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLAPMA3                                                                         
          MOVE      ZERO,OVRCD
          READLKP   APSMASA3;APMACRD,APMATYP,APMASKY,APMACN1,APMACN2:           
                        APMACA1,APMACA2,APMACA3,APMACPC,APMACTEL,APMACFAX:      
                        APMACMOD,APMACEDI,APMACON,APMASN1,APMASN2,APMASA1:      
                        APMASA2,APMASA3,APMASPC,APMASTEL,APMASFAX,APMASMOD:     
                        APMASEDI,APMASCON,APMABSB,APMABAC,APMAPNM,APMAPPT:      
                        APMAPOT,APMAHOR,APMAHIN,APMAHCR,APMAHPY,APMAPMT:        
                        APMAGMT,APMAPPD,APMADTM,APMAUR1,APMAUR2,APMAUD1:        
                        APMAUD2,APMAUC1,APMAUC2,APMAGREG,APMAUY2,APMADIS:       
                        APMATSE,APMAABN,APMADISS,APMASPA                        
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUAPMA3   RESET     KEY11                                                       
          UNLOCK    APSMASA3                                                    
          RETURN
.
.**************************************
. WAssff - Write Audit Record           
. Requires - AUDTTYPE 1=write 
.                     2=before change
.                     3=after change
.                     4=delete
.**************************************
WAAPMA00
          MOVE      "   51",AUDTSECT
          MOVE      " 48",AUDTPOST
          READ      CONTROLF,AUDTSECT;*AUDTPOST,AUDTFLAG
          COMPARE   ONE,AUDTFLAG
          GOTO      WAAPMA99 IF NOT EQUAL
.
          PACK     APMAAUDD,CCC,CYY,CMM,CDD
          REP       " 0",APMAAUDD
          CLOCK     TIME,APMAAUDT
          MOVE      PORT,APMAAUDP
          LOAD      APMAAUDR,AUDTTYPE,ANSA,ANSB,ANSC,ANSD
          MOVE      ONE,APMAAUDS
          MOVE      PASSCODE,APMAAUDO
          PACK      KEY19,APMAAUDD,APMAAUDT,APMAAUDP,APMAAUDR
          MOVE      KEY19,AUDTSKEY
          CALL      AWAPMA
WAAPMA99  RETURN
.**************************************
. DAssff - Delete Before Change Audit 
.**************************************
DAAPMA00
          MOVE      "   51",AUDTSECT
          MOVE      " 48",AUDTPOST
          READ      CONTROLF,AUDTSECT;*AUDTPOST,AUDTFLAG
          COMPARE   ONE,AUDTFLAG
          GOTO      DAAPMA99 IF NOT EQUAL
.
          MOVE      AUDTSKEY,KEY19
          CALL      ADAPMA
DAAPMA99  RETURN
ASAPMA    RESET     KEY19                                                       
          READ      APSAUDMA,KEY19;;                                            
          RETURN
.
AKAPMA                                                                          
          MOVE      ZERO,OVRCD
          READKS    APSAUDMA;APMAAUDD,APMAAUDT,APMAAUDP,APMAAUDR,APMAAUDS:      
                    APMAAUDO,APMACRD,APMATYP,APMASKY,APMACN1,APMACN2:           
                        APMACA1,APMACA2,APMACA3,APMACPC,APMACTEL,APMACFAX:      
                        APMACMOD,APMACEDI,APMACON,APMASN1,APMASN2,APMASA1:      
                        APMASA2,APMASA3,APMASPC,APMASTEL,APMASFAX,APMASMOD:     
                        APMASEDI,APMASCON,APMABSB,APMABAC,APMAPNM,APMAPPT:      
                        APMAPOT,APMAHOR,APMAHIN,APMAHCR,APMAHPY,APMAPMT:        
                        APMAGMT,APMAPPD,APMADTM,APMAUR1,APMAUR2,APMAUD1:        
                        APMAUD2,APMAUC1,APMAUC2,APMAGREG,APMAUY2,APMADIS:       
                        APMATSE,APMAABN,APMADISS,APMASPA                        
          GOTO      OVERCOND IF OVER
          RETURN
.
AUAPMA                                                                          
          UPDATE    APSAUDMA;APMAAUDD,APMAAUDT,APMAAUDP,APMAAUDR,APMAAUDS:      
                    APMAAUDO,APMACRD,APMATYP,APMASKY,APMACN1,APMACN2:           
                        APMACA1,APMACA2,APMACA3,APMACPC,APMACTEL,APMACFAX:      
                        APMACMOD,APMACEDI,APMACON,APMASN1,APMASN2,APMASA1:      
                        APMASA2,APMASA3,APMASPC,APMASTEL,APMASFAX,APMASMOD:     
                        APMASEDI,APMASCON,APMABSB,APMABAC,APMAPNM,APMAPPT:      
                        APMAPOT,APMAHOR,APMAHIN,APMAHCR,APMAHPY,APMAPMT:        
                        APMAGMT,APMAPPD,APMADTM,APMAUR1,APMAUR2,APMAUD1:        
                        APMAUD2,APMAUC1,APMAUC2,APMAGREG,APMAUY2,APMADIS:       
                        APMATSE,APMAABN,APMADISS,APMASPA                        
          RETURN
.
AWAPMA    RESET     KEY19                                                       
          WRITE     APSAUDMA,KEY19;APMAAUDD,APMAAUDT,APMAAUDP,APMAAUDR,APMAAUDS:
                    APMAAUDO,APMACRD,APMATYP,APMASKY,APMACN1,APMACN2:           
                        APMACA1,APMACA2,APMACA3,APMACPC,APMACTEL,APMACFAX:      
                        APMACMOD,APMACEDI,APMACON,APMASN1,APMASN2,APMASA1:      
                        APMASA2,APMASA3,APMASPC,APMASTEL,APMASFAX,APMASMOD:     
                        APMASEDI,APMASCON,APMABSB,APMABAC,APMAPNM,APMAPPT:      
                        APMAPOT,APMAHOR,APMAHIN,APMAHCR,APMAHPY,APMAPMT:        
                        APMAGMT,APMAPPD,APMADTM,APMAUR1,APMAUR2,APMAUD1:        
                        APMAUD2,APMAUC1,APMAUC2,APMAGREG,APMAUY2,APMADIS:       
                        APMATSE,APMAABN,APMADISS,APMASPA                        
          RETURN
.
ADAPMA    RESET     KEY19                                                       
          DELETE    APSAUDMA,KEY19;                                             
          RETURN
.
