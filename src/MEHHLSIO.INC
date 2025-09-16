.
. MEHHLSIO    
. --------
. Filename     : mehhlsaf.dat
.
RSMHHLS1  RESET     KEY16                                                       
          READ      MEHHLSA1,KEY16;;                                            
          RETURN
.
RAMHHLS1  RESET     KEY16                                                       
          MOVE      ZERO,OVRCD
          READ      MEHHLSA1,KEY16;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDMHHLS1  RESET     KEY16                                                       
          MOVE      ZERO,OVRCD
          READ      MEHHLSA1,KEY16;MHHLURNO,MHHLUNIQ,MHHLSDAT,MHHLSTIM,MHHLEDAT:
                                   MHHLETIM,MHHLSTAT,MHHLCURR,MHHLSREF,MHHLORCD:
                                   MHHLHCPC,MHHLRNAM,MHHLRAD1,MHHLRAD2,MHHLRAD3:
                                   MHHLRAD4,MHHLRPOS,MHHLRTEL,MHHLLAWY,MHHLPRIS:
                                   MHHLESDT,MHHLCUID,MHHLCDAT,MHHLCTIM,MHHLUUID:
                                   MHHLUDAT,MHHLUTIM,MHHLRSCL,MHHLCSTM,MHHLDUAO:
                                   MHHLKWRK,MHHLLAWT,MHHLUDFL,MHHLUDDT,MHHLCOMM:
                                   MHHLRODT,MHHLROTM,MHHLAMDT,MHHLAMTM,MHHLOREF:
                                   MHHLRCLI,MHHLRCLR,MHHLRDHB,MHHLSPAR          
          GOTO      OVERCOND IF OVER
          RETURN
.
RKMHHLS1  MOVE      ZERO,OVRCD                                                  
          READKS    MEHHLSA1;MHHLURNO,MHHLUNIQ,MHHLSDAT,MHHLSTIM,MHHLEDAT:      
                             MHHLETIM,MHHLSTAT,MHHLCURR,MHHLSREF,MHHLORCD:      
                             MHHLHCPC,MHHLRNAM,MHHLRAD1,MHHLRAD2,MHHLRAD3:      
                             MHHLRAD4,MHHLRPOS,MHHLRTEL,MHHLLAWY,MHHLPRIS:      
                             MHHLESDT,MHHLCUID,MHHLCDAT,MHHLCTIM,MHHLUUID:      
                             MHHLUDAT,MHHLUTIM,MHHLRSCL,MHHLCSTM,MHHLDUAO:      
                             MHHLKWRK,MHHLLAWT,MHHLUDFL,MHHLUDDT,MHHLCOMM:      
                             MHHLRODT,MHHLROTM,MHHLAMDT,MHHLAMTM,MHHLOREF:      
                             MHHLRCLI,MHHLRCLR,MHHLRDHB,MHHLSPAR                
          GOTO      OVERCOND IF OVER
          RETURN
.
RPMHHLS1  MOVE      ZERO,OVRCD                                                  
          READKP    MEHHLSA1;MHHLURNO,MHHLUNIQ,MHHLSDAT,MHHLSTIM,MHHLEDAT:      
                             MHHLETIM,MHHLSTAT,MHHLCURR,MHHLSREF,MHHLORCD:      
                             MHHLHCPC,MHHLRNAM,MHHLRAD1,MHHLRAD2,MHHLRAD3:      
                             MHHLRAD4,MHHLRPOS,MHHLRTEL,MHHLLAWY,MHHLPRIS:      
                             MHHLESDT,MHHLCUID,MHHLCDAT,MHHLCTIM,MHHLUUID:      
                             MHHLUDAT,MHHLUTIM,MHHLRSCL,MHHLCSTM,MHHLDUAO:      
                             MHHLKWRK,MHHLLAWT,MHHLUDFL,MHHLUDDT,MHHLCOMM:      
                             MHHLRODT,MHHLROTM,MHHLAMDT,MHHLAMTM,MHHLOREF:      
                             MHHLRCLI,MHHLRCLR,MHHLRDHB,MHHLSPAR                
          GOTO      OVERCOND IF OVER
          RETURN
.
UPMHHLS1  MOVE      ZERO,OVRCD                                                  
          UPDATE    MEHHLSA1;MHHLURNO,MHHLUNIQ,MHHLSDAT,MHHLSTIM,MHHLEDAT:      
                             MHHLETIM,MHHLSTAT,MHHLCURR,MHHLSREF,MHHLORCD:      
                             MHHLHCPC,MHHLRNAM,MHHLRAD1,MHHLRAD2,MHHLRAD3:      
                             MHHLRAD4,MHHLRPOS,MHHLRTEL,MHHLLAWY,MHHLPRIS:      
                             MHHLESDT,MHHLCUID,MHHLCDAT,MHHLCTIM,MHHLUUID:      
                             MHHLUDAT,MHHLUTIM,MHHLRSCL,MHHLCSTM,MHHLDUAO:      
                             MHHLKWRK,MHHLLAWT,MHHLUDFL,MHHLUDDT,MHHLCOMM:      
                             MHHLRODT,MHHLROTM,MHHLAMDT,MHHLAMTM,MHHLOREF:      
                             MHHLRCLI,MHHLRCLR,MHHLRDHB,MHHLSPAR                
          RETURN
.
WRMHHLS1  RESET     KEY16                                                       
          WRITE     MEHHLSA1,KEY16;MHHLURNO,MHHLUNIQ,MHHLSDAT,MHHLSTIM,MHHLEDAT:
                                   MHHLETIM,MHHLSTAT,MHHLCURR,MHHLSREF,MHHLORCD:
                                   MHHLHCPC,MHHLRNAM,MHHLRAD1,MHHLRAD2,MHHLRAD3:
                                   MHHLRAD4,MHHLRPOS,MHHLRTEL,MHHLLAWY,MHHLPRIS:
                                   MHHLESDT,MHHLCUID,MHHLCDAT,MHHLCTIM,MHHLUUID:
                                   MHHLUDAT,MHHLUTIM,MHHLRSCL,MHHLCSTM,MHHLDUAO:
                                   MHHLKWRK,MHHLLAWT,MHHLUDFL,MHHLUDDT,MHHLCOMM:
                                   MHHLRODT,MHHLROTM,MHHLAMDT,MHHLAMTM,MHHLOREF:
                                   MHHLRCLI,MHHLRCLR,MHHLRDHB,MHHLSPAR          
          RETURN
.
DEMHHLS1  RESET     KEY16                                                       
          DELETE    MEHHLSA1,KEY16                                              
          RETURN
.
RSMHHLS2  RESET     KEY32                                                       
          READ      MEHHLSA2,KEY32;;                                            
          RETURN
.
RAMHHLS2  RESET     KEY32                                                       
          MOVE      ZERO,OVRCD
          READ      MEHHLSA2,KEY32;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDMHHLS2  RESET     KEY32                                                       
          MOVE      ZERO,OVRCD
          READ      MEHHLSA2,KEY32;MHHLURNO,MHHLUNIQ,MHHLSDAT,MHHLSTIM,MHHLEDAT:
                                   MHHLETIM,MHHLSTAT,MHHLCURR,MHHLSREF,MHHLORCD:
                                   MHHLHCPC,MHHLRNAM,MHHLRAD1,MHHLRAD2,MHHLRAD3:
                                   MHHLRAD4,MHHLRPOS,MHHLRTEL,MHHLLAWY,MHHLPRIS:
                                   MHHLESDT,MHHLCUID,MHHLCDAT,MHHLCTIM,MHHLUUID:
                                   MHHLUDAT,MHHLUTIM,MHHLRSCL,MHHLCSTM,MHHLDUAO:
                                   MHHLKWRK,MHHLLAWT,MHHLUDFL,MHHLUDDT,MHHLCOMM:
                                   MHHLRODT,MHHLROTM,MHHLAMDT,MHHLAMTM,MHHLOREF:
                                   MHHLRCLI,MHHLRCLR,MHHLRDHB,MHHLSPAR          
          GOTO      OVERCOND IF OVER
          RETURN
.
RKMHHLS2  MOVE      ZERO,OVRCD                                                  
          READKS    MEHHLSA2;MHHLURNO,MHHLUNIQ,MHHLSDAT,MHHLSTIM,MHHLEDAT:      
                             MHHLETIM,MHHLSTAT,MHHLCURR,MHHLSREF,MHHLORCD:      
                             MHHLHCPC,MHHLRNAM,MHHLRAD1,MHHLRAD2,MHHLRAD3:      
                             MHHLRAD4,MHHLRPOS,MHHLRTEL,MHHLLAWY,MHHLPRIS:      
                             MHHLESDT,MHHLCUID,MHHLCDAT,MHHLCTIM,MHHLUUID:      
                             MHHLUDAT,MHHLUTIM,MHHLRSCL,MHHLCSTM,MHHLDUAO:      
                             MHHLKWRK,MHHLLAWT,MHHLUDFL,MHHLUDDT,MHHLCOMM:      
                             MHHLRODT,MHHLROTM,MHHLAMDT,MHHLAMTM,MHHLOREF:      
                             MHHLRCLI,MHHLRCLR,MHHLRDHB,MHHLSPAR                
          GOTO      OVERCOND IF OVER
          RETURN
.
RPMHHLS2  MOVE      ZERO,OVRCD                                                  
          READKP    MEHHLSA2;MHHLURNO,MHHLUNIQ,MHHLSDAT,MHHLSTIM,MHHLEDAT:      
                             MHHLETIM,MHHLSTAT,MHHLCURR,MHHLSREF,MHHLORCD:      
                             MHHLHCPC,MHHLRNAM,MHHLRAD1,MHHLRAD2,MHHLRAD3:      
                             MHHLRAD4,MHHLRPOS,MHHLRTEL,MHHLLAWY,MHHLPRIS:      
                             MHHLESDT,MHHLCUID,MHHLCDAT,MHHLCTIM,MHHLUUID:      
                             MHHLUDAT,MHHLUTIM,MHHLRSCL,MHHLCSTM,MHHLDUAO:      
                             MHHLKWRK,MHHLLAWT,MHHLUDFL,MHHLUDDT,MHHLCOMM:      
                             MHHLRODT,MHHLROTM,MHHLAMDT,MHHLAMTM,MHHLOREF:      
                             MHHLRCLI,MHHLRCLR,MHHLRDHB,MHHLSPAR                
          GOTO      OVERCOND IF OVER
          RETURN
.
UPMHHLS2  MOVE      ZERO,OVRCD                                                  
          UPDATE    MEHHLSA2;MHHLURNO,MHHLUNIQ,MHHLSDAT,MHHLSTIM,MHHLEDAT:      
                             MHHLETIM,MHHLSTAT,MHHLCURR,MHHLSREF,MHHLORCD:      
                             MHHLHCPC,MHHLRNAM,MHHLRAD1,MHHLRAD2,MHHLRAD3:      
                             MHHLRAD4,MHHLRPOS,MHHLRTEL,MHHLLAWY,MHHLPRIS:      
                             MHHLESDT,MHHLCUID,MHHLCDAT,MHHLCTIM,MHHLUUID:      
                             MHHLUDAT,MHHLUTIM,MHHLRSCL,MHHLCSTM,MHHLDUAO:      
                             MHHLKWRK,MHHLLAWT,MHHLUDFL,MHHLUDDT,MHHLCOMM:      
                             MHHLRODT,MHHLROTM,MHHLAMDT,MHHLAMTM,MHHLOREF:      
                             MHHLRCLI,MHHLRCLR,MHHLRDHB,MHHLSPAR                
          RETURN
.
WRMHHLS2  RESET     KEY32                                                       
          WRITE     MEHHLSA2,KEY32;MHHLURNO,MHHLUNIQ,MHHLSDAT,MHHLSTIM,MHHLEDAT:
                                   MHHLETIM,MHHLSTAT,MHHLCURR,MHHLSREF,MHHLORCD:
                                   MHHLHCPC,MHHLRNAM,MHHLRAD1,MHHLRAD2,MHHLRAD3:
                                   MHHLRAD4,MHHLRPOS,MHHLRTEL,MHHLLAWY,MHHLPRIS:
                                   MHHLESDT,MHHLCUID,MHHLCDAT,MHHLCTIM,MHHLUUID:
                                   MHHLUDAT,MHHLUTIM,MHHLRSCL,MHHLCSTM,MHHLDUAO:
                                   MHHLKWRK,MHHLLAWT,MHHLUDFL,MHHLUDDT,MHHLCOMM:
                                   MHHLRODT,MHHLROTM,MHHLAMDT,MHHLAMTM,MHHLOREF:
                                   MHHLRCLI,MHHLRCLR,MHHLRDHB,MHHLSPAR          
          RETURN
.
DEMHHLS2  RESET     KEY32                                                       
          DELETE    MEHHLSA2,KEY32                                              
          RETURN
.
.                                               ( end of File Generator data )
.
.**************************************
.
ASMHHL    RESET     KEY24
          READ      MEHAUDHA,KEY24;;
          RETURN
.
AKMHHL    MOVE      ZERO,OVRCD
          READKS    MEHAUDHA;MHHLMDAT,MHHLMTIM,MHHLRTYP,MHHLMUID:
                        MHHLURNO,MHHLUNIQ,MHHLSDAT,MHHLSTIM,MHHLEDAT:
                        MHHLETIM,MHHLSTAT,MHHLCURR,MHHLSREF,MHHLORCD,MHHLHCPC:
                        MHHLRNAM,MHHLRAD1,MHHLRAD2,MHHLRAD3,MHHLRAD4,MHHLRPOS:
                        MHHLRTEL,MHHLLAWY,MHHLPRIS,MHHLESDT,MHHLCUID,MHHLCDAT:
                        MHHLCTIM,MHHLUUID,MHHLUDAT,MHHLUTIM,MHHLRSCL,MHHLCSTM:
                        MHHLDUAO,MHHLKWRK,MHHLLAWT,MHHLUDFL,MHHLUDDT,MHHLCOMM:
                        MHHLRODT,MHHLROTM,MHHLAMDT,MHHLAMTM,MHHLOREF,MHHLRCLI:
                        MHHLRCLR,MHHLRDHB,MHHLSPAR
          GOTO      OVERCOND IF OVER
          RETURN
.
APMHHL    MOVE      ZERO,OVRCD
          READKP    MEHAUDHA;MHHLMDAT,MHHLMTIM,MHHLRTYP,MHHLMUID:
                        MHHLURNO,MHHLUNIQ,MHHLSDAT,MHHLSTIM,MHHLEDAT:
                        MHHLETIM,MHHLSTAT,MHHLCURR,MHHLSREF,MHHLORCD,MHHLHCPC:
                        MHHLRNAM,MHHLRAD1,MHHLRAD2,MHHLRAD3,MHHLRAD4,MHHLRPOS:
                        MHHLRTEL,MHHLLAWY,MHHLPRIS,MHHLESDT,MHHLCUID,MHHLCDAT:
                        MHHLCTIM,MHHLUUID,MHHLUDAT,MHHLUTIM,MHHLRSCL,MHHLCSTM:
                        MHHLDUAO,MHHLKWRK,MHHLLAWT,MHHLUDFL,MHHLUDDT,MHHLCOMM:
                        MHHLRODT,MHHLROTM,MHHLAMDT,MHHLAMTM,MHHLOREF,MHHLRCLI:
                        MHHLRCLR,MHHLRDHB,MHHLSPAR
          GOTO      OVERCOND IF OVER
          RETURN
.
AUMHHL    UPDATE    MEHAUDHA;MHHLMDAT,MHHLMTIM,MHHLRTYP,MHHLMUID:
                        MHHLURNO,MHHLUNIQ,MHHLSDAT,MHHLSTIM,MHHLEDAT:
                        MHHLETIM,MHHLSTAT,MHHLCURR,MHHLSREF,MHHLORCD,MHHLHCPC:
                        MHHLRNAM,MHHLRAD1,MHHLRAD2,MHHLRAD3,MHHLRAD4,MHHLRPOS:
                        MHHLRTEL,MHHLLAWY,MHHLPRIS,MHHLESDT,MHHLCUID,MHHLCDAT:
                        MHHLCTIM,MHHLUUID,MHHLUDAT,MHHLUTIM,MHHLRSCL,MHHLCSTM:
                        MHHLDUAO,MHHLKWRK,MHHLLAWT,MHHLUDFL,MHHLUDDT,MHHLCOMM:
                        MHHLRODT,MHHLROTM,MHHLAMDT,MHHLAMTM,MHHLOREF,MHHLRCLI:
                        MHHLRCLR,MHHLRDHB,MHHLSPAR
          RETURN
.
AWMHHL    RESET     KEY24
          WRITE     MEHAUDHA,KEY24;MHHLMDAT,MHHLMTIM,MHHLRTYP,MHHLMUID:
                        MHHLURNO,MHHLUNIQ,MHHLSDAT,MHHLSTIM,MHHLEDAT:
                        MHHLETIM,MHHLSTAT,MHHLCURR,MHHLSREF,MHHLORCD,MHHLHCPC:
                        MHHLRNAM,MHHLRAD1,MHHLRAD2,MHHLRAD3,MHHLRAD4,MHHLRPOS:
                        MHHLRTEL,MHHLLAWY,MHHLPRIS,MHHLESDT,MHHLCUID,MHHLCDAT:
                        MHHLCTIM,MHHLUUID,MHHLUDAT,MHHLUTIM,MHHLRSCL,MHHLCSTM:
                        MHHLDUAO,MHHLKWRK,MHHLLAWT,MHHLUDFL,MHHLUDDT,MHHLCOMM:
                        MHHLRODT,MHHLROTM,MHHLAMDT,MHHLAMTM,MHHLOREF,MHHLRCLI:
                        MHHLRCLR,MHHLRDHB,MHHLSPAR
          RETURN
.
ADMHHL    RESET     KEY24
          DELETE    MEHAUDHA,KEY24
          RETURN
.
