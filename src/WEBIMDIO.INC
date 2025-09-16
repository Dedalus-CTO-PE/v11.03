.
. WEBIMDIO    
. --------
. Filename     : webimdaf.dat
.
RSWBIMD1  RESET     KEY32                                                       
          READ      WEBIMDA1,KEY32;;                                            
          RETURN
.
RAWBIMD1  RESET     KEY32                                                       
          MOVE      ZERO,OVRCD
          READ      WEBIMDA1,KEY32;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDWBIMD1  RESET     KEY32                                                       
          MOVE      ZERO,OVRCD
          READ      WEBIMDA1,KEY32;WBIDFBID,WBIDARID,WBIDCLID,WBIDRPTC,WBIDTRST:
                                   WBIDRPST,WBIDMSTC,WBIDMSTT,WBIDMCMN,WBIDMCRN:
                                   WBIDMCGN,WBIDHFSC,WBIDHFST,WBIDMAFL,WBIDMALD:
                                   WBIDMAMN,WBIDMARN,WBIDMAFN,WBIDMAGN,WBIDHFAC:
                                   WBIDHFAP,WBIDHFEC,WBIDHFET,WBIDTRID,WBIDMSID:
                                   WBIDCUID,WBIDCDAT,WBIDCTIM,WBIDUUID,WBIDUDAT:
                                   WBIDUTIM,WBIDSPAR                            
          GOTO      OVERCOND IF OVER
          RETURN
.
RKWBIMD1  MOVE      ZERO,OVRCD                                                  
          READKS    WEBIMDA1;WBIDFBID,WBIDARID,WBIDCLID,WBIDRPTC,WBIDTRST:      
                             WBIDRPST,WBIDMSTC,WBIDMSTT,WBIDMCMN,WBIDMCRN:      
                             WBIDMCGN,WBIDHFSC,WBIDHFST,WBIDMAFL,WBIDMALD:      
                             WBIDMAMN,WBIDMARN,WBIDMAFN,WBIDMAGN,WBIDHFAC:      
                             WBIDHFAP,WBIDHFEC,WBIDHFET,WBIDTRID,WBIDMSID:      
                             WBIDCUID,WBIDCDAT,WBIDCTIM,WBIDUUID,WBIDUDAT:      
                             WBIDUTIM,WBIDSPAR                                  
          GOTO      OVERCOND IF OVER
          RETURN
.
RPWBIMD1  MOVE      ZERO,OVRCD                                                  
          READKP    WEBIMDA1;WBIDFBID,WBIDARID,WBIDCLID,WBIDRPTC,WBIDTRST:      
                             WBIDRPST,WBIDMSTC,WBIDMSTT,WBIDMCMN,WBIDMCRN:      
                             WBIDMCGN,WBIDHFSC,WBIDHFST,WBIDMAFL,WBIDMALD:      
                             WBIDMAMN,WBIDMARN,WBIDMAFN,WBIDMAGN,WBIDHFAC:      
                             WBIDHFAP,WBIDHFEC,WBIDHFET,WBIDTRID,WBIDMSID:      
                             WBIDCUID,WBIDCDAT,WBIDCTIM,WBIDUUID,WBIDUDAT:      
                             WBIDUTIM,WBIDSPAR                                  
          GOTO      OVERCOND IF OVER
          RETURN
.
UPWBIMD1  MOVE      ZERO,OVRCD                                                  
          UPDATE    WEBIMDA1;WBIDFBID,WBIDARID,WBIDCLID,WBIDRPTC,WBIDTRST:      
                             WBIDRPST,WBIDMSTC,WBIDMSTT,WBIDMCMN,WBIDMCRN:      
                             WBIDMCGN,WBIDHFSC,WBIDHFST,WBIDMAFL,WBIDMALD:      
                             WBIDMAMN,WBIDMARN,WBIDMAFN,WBIDMAGN,WBIDHFAC:      
                             WBIDHFAP,WBIDHFEC,WBIDHFET,WBIDTRID,WBIDMSID:      
                             WBIDCUID,WBIDCDAT,WBIDCTIM,WBIDUUID,WBIDUDAT:      
                             WBIDUTIM,WBIDSPAR                                  
          RETURN
.
WRWBIMD1  RESET     KEY32                                                       
          WRITE     WEBIMDA1,KEY32;WBIDFBID,WBIDARID,WBIDCLID,WBIDRPTC,WBIDTRST:
                                   WBIDRPST,WBIDMSTC,WBIDMSTT,WBIDMCMN,WBIDMCRN:
                                   WBIDMCGN,WBIDHFSC,WBIDHFST,WBIDMAFL,WBIDMALD:
                                   WBIDMAMN,WBIDMARN,WBIDMAFN,WBIDMAGN,WBIDHFAC:
                                   WBIDHFAP,WBIDHFEC,WBIDHFET,WBIDTRID,WBIDMSID:
                                   WBIDCUID,WBIDCDAT,WBIDCTIM,WBIDUUID,WBIDUDAT:
                                   WBIDUTIM,WBIDSPAR                            
          RETURN
.
DEWBIMD1  RESET     KEY32                                                       
          DELETE    WEBIMDA1,KEY32                                              
          RETURN
.
RSWBIMD2  RESET     KEY56                                                       
          READ      WEBIMDA2,KEY56;;                                            
          RETURN
.
RAWBIMD2  RESET     KEY56                                                       
          MOVE      ZERO,OVRCD
          READ      WEBIMDA2,KEY56;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDWBIMD2  RESET     KEY56                                                       
          MOVE      ZERO,OVRCD
          READ      WEBIMDA2,KEY56;WBIDFBID,WBIDARID,WBIDCLID,WBIDRPTC,WBIDTRST:
                                   WBIDRPST,WBIDMSTC,WBIDMSTT,WBIDMCMN,WBIDMCRN:
                                   WBIDMCGN,WBIDHFSC,WBIDHFST,WBIDMAFL,WBIDMALD:
                                   WBIDMAMN,WBIDMARN,WBIDMAFN,WBIDMAGN,WBIDHFAC:
                                   WBIDHFAP,WBIDHFEC,WBIDHFET,WBIDTRID,WBIDMSID:
                                   WBIDCUID,WBIDCDAT,WBIDCTIM,WBIDUUID,WBIDUDAT:
                                   WBIDUTIM,WBIDSPAR                            
          GOTO      OVERCOND IF OVER
          RETURN
.
RKWBIMD2  MOVE      ZERO,OVRCD                                                  
          READKS    WEBIMDA2;WBIDFBID,WBIDARID,WBIDCLID,WBIDRPTC,WBIDTRST:      
                             WBIDRPST,WBIDMSTC,WBIDMSTT,WBIDMCMN,WBIDMCRN:      
                             WBIDMCGN,WBIDHFSC,WBIDHFST,WBIDMAFL,WBIDMALD:      
                             WBIDMAMN,WBIDMARN,WBIDMAFN,WBIDMAGN,WBIDHFAC:      
                             WBIDHFAP,WBIDHFEC,WBIDHFET,WBIDTRID,WBIDMSID:      
                             WBIDCUID,WBIDCDAT,WBIDCTIM,WBIDUUID,WBIDUDAT:      
                             WBIDUTIM,WBIDSPAR                                  
          GOTO      OVERCOND IF OVER
          RETURN
.
RPWBIMD2  MOVE      ZERO,OVRCD                                                  
          READKP    WEBIMDA2;WBIDFBID,WBIDARID,WBIDCLID,WBIDRPTC,WBIDTRST:      
                             WBIDRPST,WBIDMSTC,WBIDMSTT,WBIDMCMN,WBIDMCRN:      
                             WBIDMCGN,WBIDHFSC,WBIDHFST,WBIDMAFL,WBIDMALD:      
                             WBIDMAMN,WBIDMARN,WBIDMAFN,WBIDMAGN,WBIDHFAC:      
                             WBIDHFAP,WBIDHFEC,WBIDHFET,WBIDTRID,WBIDMSID:      
                             WBIDCUID,WBIDCDAT,WBIDCTIM,WBIDUUID,WBIDUDAT:      
                             WBIDUTIM,WBIDSPAR                                  
          GOTO      OVERCOND IF OVER
          RETURN
.
UPWBIMD2  MOVE      ZERO,OVRCD                                                  
          UPDATE    WEBIMDA2;WBIDFBID,WBIDARID,WBIDCLID,WBIDRPTC,WBIDTRST:      
                             WBIDRPST,WBIDMSTC,WBIDMSTT,WBIDMCMN,WBIDMCRN:      
                             WBIDMCGN,WBIDHFSC,WBIDHFST,WBIDMAFL,WBIDMALD:      
                             WBIDMAMN,WBIDMARN,WBIDMAFN,WBIDMAGN,WBIDHFAC:      
                             WBIDHFAP,WBIDHFEC,WBIDHFET,WBIDTRID,WBIDMSID:      
                             WBIDCUID,WBIDCDAT,WBIDCTIM,WBIDUUID,WBIDUDAT:      
                             WBIDUTIM,WBIDSPAR                                  
          RETURN
.
WRWBIMD2  RESET     KEY56                                                       
          WRITE     WEBIMDA2,KEY56;WBIDFBID,WBIDARID,WBIDCLID,WBIDRPTC,WBIDTRST:
                                   WBIDRPST,WBIDMSTC,WBIDMSTT,WBIDMCMN,WBIDMCRN:
                                   WBIDMCGN,WBIDHFSC,WBIDHFST,WBIDMAFL,WBIDMALD:
                                   WBIDMAMN,WBIDMARN,WBIDMAFN,WBIDMAGN,WBIDHFAC:
                                   WBIDHFAP,WBIDHFEC,WBIDHFET,WBIDTRID,WBIDMSID:
                                   WBIDCUID,WBIDCDAT,WBIDCTIM,WBIDUUID,WBIDUDAT:
                                   WBIDUTIM,WBIDSPAR                            
          RETURN
.
DEWBIMD2  RESET     KEY56                                                       
          DELETE    WEBIMDA2,KEY56                                              
          RETURN
.
RSWBIMD3  RESET     KEY68                                                       
          READ      WEBIMDA3,KEY68;;                                            
          RETURN
.
RAWBIMD3  RESET     KEY68                                                       
          MOVE      ZERO,OVRCD
          READ      WEBIMDA3,KEY68;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDWBIMD3  RESET     KEY68                                                       
          MOVE      ZERO,OVRCD
          READ      WEBIMDA3,KEY68;WBIDFBID,WBIDARID,WBIDCLID,WBIDRPTC,WBIDTRST:
                                   WBIDRPST,WBIDMSTC,WBIDMSTT,WBIDMCMN,WBIDMCRN:
                                   WBIDMCGN,WBIDHFSC,WBIDHFST,WBIDMAFL,WBIDMALD:
                                   WBIDMAMN,WBIDMARN,WBIDMAFN,WBIDMAGN,WBIDHFAC:
                                   WBIDHFAP,WBIDHFEC,WBIDHFET,WBIDTRID,WBIDMSID:
                                   WBIDCUID,WBIDCDAT,WBIDCTIM,WBIDUUID,WBIDUDAT:
                                   WBIDUTIM,WBIDSPAR                            
          GOTO      OVERCOND IF OVER
          RETURN
.
RKWBIMD3  MOVE      ZERO,OVRCD                                                  
          READKS    WEBIMDA3;WBIDFBID,WBIDARID,WBIDCLID,WBIDRPTC,WBIDTRST:      
                             WBIDRPST,WBIDMSTC,WBIDMSTT,WBIDMCMN,WBIDMCRN:      
                             WBIDMCGN,WBIDHFSC,WBIDHFST,WBIDMAFL,WBIDMALD:      
                             WBIDMAMN,WBIDMARN,WBIDMAFN,WBIDMAGN,WBIDHFAC:      
                             WBIDHFAP,WBIDHFEC,WBIDHFET,WBIDTRID,WBIDMSID:      
                             WBIDCUID,WBIDCDAT,WBIDCTIM,WBIDUUID,WBIDUDAT:      
                             WBIDUTIM,WBIDSPAR                                  
          GOTO      OVERCOND IF OVER
          RETURN
.
RPWBIMD3  MOVE      ZERO,OVRCD                                                  
          READKP    WEBIMDA3;WBIDFBID,WBIDARID,WBIDCLID,WBIDRPTC,WBIDTRST:      
                             WBIDRPST,WBIDMSTC,WBIDMSTT,WBIDMCMN,WBIDMCRN:      
                             WBIDMCGN,WBIDHFSC,WBIDHFST,WBIDMAFL,WBIDMALD:      
                             WBIDMAMN,WBIDMARN,WBIDMAFN,WBIDMAGN,WBIDHFAC:      
                             WBIDHFAP,WBIDHFEC,WBIDHFET,WBIDTRID,WBIDMSID:      
                             WBIDCUID,WBIDCDAT,WBIDCTIM,WBIDUUID,WBIDUDAT:      
                             WBIDUTIM,WBIDSPAR                                  
          GOTO      OVERCOND IF OVER
          RETURN
.
UPWBIMD3  MOVE      ZERO,OVRCD                                                  
          UPDATE    WEBIMDA3;WBIDFBID,WBIDARID,WBIDCLID,WBIDRPTC,WBIDTRST:      
                             WBIDRPST,WBIDMSTC,WBIDMSTT,WBIDMCMN,WBIDMCRN:      
                             WBIDMCGN,WBIDHFSC,WBIDHFST,WBIDMAFL,WBIDMALD:      
                             WBIDMAMN,WBIDMARN,WBIDMAFN,WBIDMAGN,WBIDHFAC:      
                             WBIDHFAP,WBIDHFEC,WBIDHFET,WBIDTRID,WBIDMSID:      
                             WBIDCUID,WBIDCDAT,WBIDCTIM,WBIDUUID,WBIDUDAT:      
                             WBIDUTIM,WBIDSPAR                                  
          RETURN
.
WRWBIMD3  RESET     KEY68                                                       
          WRITE     WEBIMDA3,KEY68;WBIDFBID,WBIDARID,WBIDCLID,WBIDRPTC,WBIDTRST:
                                   WBIDRPST,WBIDMSTC,WBIDMSTT,WBIDMCMN,WBIDMCRN:
                                   WBIDMCGN,WBIDHFSC,WBIDHFST,WBIDMAFL,WBIDMALD:
                                   WBIDMAMN,WBIDMARN,WBIDMAFN,WBIDMAGN,WBIDHFAC:
                                   WBIDHFAP,WBIDHFEC,WBIDHFET,WBIDTRID,WBIDMSID:
                                   WBIDCUID,WBIDCDAT,WBIDCTIM,WBIDUUID,WBIDUDAT:
                                   WBIDUTIM,WBIDSPAR                            
          RETURN
.
DEWBIMD3  RESET     KEY68                                                       
          DELETE    WEBIMDA3,KEY68                                              
          RETURN
.
