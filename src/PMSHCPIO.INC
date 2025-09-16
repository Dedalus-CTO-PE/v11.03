.
. PMSHCPIO    
. --------
. Filename     : pmshcpaf.dat
.
RSPMHCP1  RESET     KEY10                                                       
          READ      PMSHCPA1,KEY10;;                                            
          RETURN
.
RAPMHCP1  RESET     KEY10                                                       
          MOVE      ZERO,OVRCD
          READ      PMSHCPA1,KEY10;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPMHCP1  RESET     KEY10                                                       
          MOVE      ZERO,OVRCD
          READ      PMSHCPA1,KEY10;PMHCHCPC,PMHCHCPT,PMHCTITL,PMHCGNAM,PMHCSNAM:
                                   PMHCINIT,PMHCGNDR,PMHCDTOB,PMHCSPC1,PMHCSPD1:
                                   PMHCSPC2,PMHCSPD2,PMHCSPC3,PMHCSPD3,PMHCSPC4:
                                   PMHCSPD4,PMHCSPC5,PMHCSPD5,PMHCRCPT,PMHCADR1:
                                   PMHCADR2,PMHCADR3,PMHCADR4,PMHCADR5,PMHCADR6:
                                   PMHCPOST,PMHCSTAT,PMHCSEML,PMHCSTEL,PMHCPAGR:
                                   PMHCPAGN,PMHCAHP1,PMHCAHP2,PMHCAHP3,PMHCAHP4:
                                   PMHCAHP5,PMHCPRV1,PMHCPRV2,PMHCPRV3,PMHCPRV4:
                                   PMHCPRV5,PMHCHTEL,PMHCHAD1,PMHCHAD2,PMHCHAD3:
                                   PMHCHAD4,PMHCHAD5,PMHCHAD6,PMHCHPCD,PMHCHEML:
                                   PMHCDFAC,PMHCDLAC,PMHCYACC,PMHCATYP,PMHCHHCP:
                                   PMHCOSLV,PMHCHCST,PMHCHCSD,PMHCFAXN,PMHCHFXN:
                                   PMHCMOBN,PMHCCRDC,PMHCWAHC,PMHCMRBN,PMHCNHSN:
                                   PMHCUDF1,PMHCUDF2,PMHCUDF3,PMHCUDF4,PMHCUDF5:
                                   PMHCUYN1,PMHCUYN2,PMHCUYN3,PMHCUYN4,PMHCUYN5:
                                   PMHCINSC,PMHCIPLN,PMHCIDTF,PMHCIDTT,PMHCMPGN:
                                   PMHCAPCI,PMHCREGT,PMHCRGDF,PMHCRGDT,PMHCPRDF:
                                   PMHCPRDT,PMHCTSDF,PMHCTFDT,PMHCVISD,PMHCPRFC:
                                   PMHCPRFN,PMHCABNN,PMHCUPDF,PMHCPRMK,PMHCSTTS:
                                   PMHCDLMI,PMHCDLMA,PMHCCDTE,PMHCCTIM,PMHCWEBC:
                                   PMHCLUPD,PMHCLUPT,PMHCWEBU,PMHCSLGP,PMHCHOSS:
                                   PMHCPTYP,PMHCEXML,PMHCDEAC,PMHCCPER,PMHCAHC1:
                                   PMHCAHC2,PMHCAHC3,PMHCLDOC,PMHCSDAT,PMHCEDAT:
                                   PMHCNHTA,PMHCWWCN,PMHCWWCE,PMHCWWCS,PMHCSMD1:
                                   PMHCSMD2,PMHCSPAR                            
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPMHCP1  MOVE      ZERO,OVRCD                                                  
          READKS    PMSHCPA1;PMHCHCPC,PMHCHCPT,PMHCTITL,PMHCGNAM,PMHCSNAM:      
                             PMHCINIT,PMHCGNDR,PMHCDTOB,PMHCSPC1,PMHCSPD1:      
                             PMHCSPC2,PMHCSPD2,PMHCSPC3,PMHCSPD3,PMHCSPC4:      
                             PMHCSPD4,PMHCSPC5,PMHCSPD5,PMHCRCPT,PMHCADR1:      
                             PMHCADR2,PMHCADR3,PMHCADR4,PMHCADR5,PMHCADR6:      
                             PMHCPOST,PMHCSTAT,PMHCSEML,PMHCSTEL,PMHCPAGR:      
                             PMHCPAGN,PMHCAHP1,PMHCAHP2,PMHCAHP3,PMHCAHP4:      
                             PMHCAHP5,PMHCPRV1,PMHCPRV2,PMHCPRV3,PMHCPRV4:      
                             PMHCPRV5,PMHCHTEL,PMHCHAD1,PMHCHAD2,PMHCHAD3:      
                             PMHCHAD4,PMHCHAD5,PMHCHAD6,PMHCHPCD,PMHCHEML:      
                             PMHCDFAC,PMHCDLAC,PMHCYACC,PMHCATYP,PMHCHHCP:      
                             PMHCOSLV,PMHCHCST,PMHCHCSD,PMHCFAXN,PMHCHFXN:      
                             PMHCMOBN,PMHCCRDC,PMHCWAHC,PMHCMRBN,PMHCNHSN:      
                             PMHCUDF1,PMHCUDF2,PMHCUDF3,PMHCUDF4,PMHCUDF5:      
                             PMHCUYN1,PMHCUYN2,PMHCUYN3,PMHCUYN4,PMHCUYN5:      
                             PMHCINSC,PMHCIPLN,PMHCIDTF,PMHCIDTT,PMHCMPGN:      
                             PMHCAPCI,PMHCREGT,PMHCRGDF,PMHCRGDT,PMHCPRDF:      
                             PMHCPRDT,PMHCTSDF,PMHCTFDT,PMHCVISD,PMHCPRFC:      
                             PMHCPRFN,PMHCABNN,PMHCUPDF,PMHCPRMK,PMHCSTTS:      
                             PMHCDLMI,PMHCDLMA,PMHCCDTE,PMHCCTIM,PMHCWEBC:      
                             PMHCLUPD,PMHCLUPT,PMHCWEBU,PMHCSLGP,PMHCHOSS:      
                             PMHCPTYP,PMHCEXML,PMHCDEAC,PMHCCPER,PMHCAHC1:      
                             PMHCAHC2,PMHCAHC3,PMHCLDOC,PMHCSDAT,PMHCEDAT:      
                             PMHCNHTA,PMHCWWCN,PMHCWWCE,PMHCWWCS,PMHCSMD1:      
                             PMHCSMD2,PMHCSPAR                                  
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPMHCP1  MOVE      ZERO,OVRCD                                                  
          READKP    PMSHCPA1;PMHCHCPC,PMHCHCPT,PMHCTITL,PMHCGNAM,PMHCSNAM:      
                             PMHCINIT,PMHCGNDR,PMHCDTOB,PMHCSPC1,PMHCSPD1:      
                             PMHCSPC2,PMHCSPD2,PMHCSPC3,PMHCSPD3,PMHCSPC4:      
                             PMHCSPD4,PMHCSPC5,PMHCSPD5,PMHCRCPT,PMHCADR1:      
                             PMHCADR2,PMHCADR3,PMHCADR4,PMHCADR5,PMHCADR6:      
                             PMHCPOST,PMHCSTAT,PMHCSEML,PMHCSTEL,PMHCPAGR:      
                             PMHCPAGN,PMHCAHP1,PMHCAHP2,PMHCAHP3,PMHCAHP4:      
                             PMHCAHP5,PMHCPRV1,PMHCPRV2,PMHCPRV3,PMHCPRV4:      
                             PMHCPRV5,PMHCHTEL,PMHCHAD1,PMHCHAD2,PMHCHAD3:      
                             PMHCHAD4,PMHCHAD5,PMHCHAD6,PMHCHPCD,PMHCHEML:      
                             PMHCDFAC,PMHCDLAC,PMHCYACC,PMHCATYP,PMHCHHCP:      
                             PMHCOSLV,PMHCHCST,PMHCHCSD,PMHCFAXN,PMHCHFXN:      
                             PMHCMOBN,PMHCCRDC,PMHCWAHC,PMHCMRBN,PMHCNHSN:      
                             PMHCUDF1,PMHCUDF2,PMHCUDF3,PMHCUDF4,PMHCUDF5:      
                             PMHCUYN1,PMHCUYN2,PMHCUYN3,PMHCUYN4,PMHCUYN5:      
                             PMHCINSC,PMHCIPLN,PMHCIDTF,PMHCIDTT,PMHCMPGN:      
                             PMHCAPCI,PMHCREGT,PMHCRGDF,PMHCRGDT,PMHCPRDF:      
                             PMHCPRDT,PMHCTSDF,PMHCTFDT,PMHCVISD,PMHCPRFC:      
                             PMHCPRFN,PMHCABNN,PMHCUPDF,PMHCPRMK,PMHCSTTS:      
                             PMHCDLMI,PMHCDLMA,PMHCCDTE,PMHCCTIM,PMHCWEBC:      
                             PMHCLUPD,PMHCLUPT,PMHCWEBU,PMHCSLGP,PMHCHOSS:      
                             PMHCPTYP,PMHCEXML,PMHCDEAC,PMHCCPER,PMHCAHC1:      
                             PMHCAHC2,PMHCAHC3,PMHCLDOC,PMHCSDAT,PMHCEDAT:      
                             PMHCNHTA,PMHCWWCN,PMHCWWCE,PMHCWWCS,PMHCSMD1:      
                             PMHCSMD2,PMHCSPAR                                  
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPMHCP1  MOVE      ZERO,OVRCD                                                  
          UPDATE    PMSHCPA1;PMHCHCPC,PMHCHCPT,PMHCTITL,PMHCGNAM,PMHCSNAM:      
                             PMHCINIT,PMHCGNDR,PMHCDTOB,PMHCSPC1,PMHCSPD1:      
                             PMHCSPC2,PMHCSPD2,PMHCSPC3,PMHCSPD3,PMHCSPC4:      
                             PMHCSPD4,PMHCSPC5,PMHCSPD5,PMHCRCPT,PMHCADR1:      
                             PMHCADR2,PMHCADR3,PMHCADR4,PMHCADR5,PMHCADR6:      
                             PMHCPOST,PMHCSTAT,PMHCSEML,PMHCSTEL,PMHCPAGR:      
                             PMHCPAGN,PMHCAHP1,PMHCAHP2,PMHCAHP3,PMHCAHP4:      
                             PMHCAHP5,PMHCPRV1,PMHCPRV2,PMHCPRV3,PMHCPRV4:      
                             PMHCPRV5,PMHCHTEL,PMHCHAD1,PMHCHAD2,PMHCHAD3:      
                             PMHCHAD4,PMHCHAD5,PMHCHAD6,PMHCHPCD,PMHCHEML:      
                             PMHCDFAC,PMHCDLAC,PMHCYACC,PMHCATYP,PMHCHHCP:      
                             PMHCOSLV,PMHCHCST,PMHCHCSD,PMHCFAXN,PMHCHFXN:      
                             PMHCMOBN,PMHCCRDC,PMHCWAHC,PMHCMRBN,PMHCNHSN:      
                             PMHCUDF1,PMHCUDF2,PMHCUDF3,PMHCUDF4,PMHCUDF5:      
                             PMHCUYN1,PMHCUYN2,PMHCUYN3,PMHCUYN4,PMHCUYN5:      
                             PMHCINSC,PMHCIPLN,PMHCIDTF,PMHCIDTT,PMHCMPGN:      
                             PMHCAPCI,PMHCREGT,PMHCRGDF,PMHCRGDT,PMHCPRDF:      
                             PMHCPRDT,PMHCTSDF,PMHCTFDT,PMHCVISD,PMHCPRFC:      
                             PMHCPRFN,PMHCABNN,PMHCUPDF,PMHCPRMK,PMHCSTTS:      
                             PMHCDLMI,PMHCDLMA,PMHCCDTE,PMHCCTIM,PMHCWEBC:      
                             PMHCLUPD,PMHCLUPT,PMHCWEBU,PMHCSLGP,PMHCHOSS:      
                             PMHCPTYP,PMHCEXML,PMHCDEAC,PMHCCPER,PMHCAHC1:      
                             PMHCAHC2,PMHCAHC3,PMHCLDOC,PMHCSDAT,PMHCEDAT:      
                             PMHCNHTA,PMHCWWCN,PMHCWWCE,PMHCWWCS,PMHCSMD1:      
                             PMHCSMD2,PMHCSPAR                                  
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRPMHCP1  RESET     KEY10                                                       
          WRITE     PMSHCPA1,KEY10;PMHCHCPC,PMHCHCPT,PMHCTITL,PMHCGNAM,PMHCSNAM:
                                   PMHCINIT,PMHCGNDR,PMHCDTOB,PMHCSPC1,PMHCSPD1:
                                   PMHCSPC2,PMHCSPD2,PMHCSPC3,PMHCSPD3,PMHCSPC4:
                                   PMHCSPD4,PMHCSPC5,PMHCSPD5,PMHCRCPT,PMHCADR1:
                                   PMHCADR2,PMHCADR3,PMHCADR4,PMHCADR5,PMHCADR6:
                                   PMHCPOST,PMHCSTAT,PMHCSEML,PMHCSTEL,PMHCPAGR:
                                   PMHCPAGN,PMHCAHP1,PMHCAHP2,PMHCAHP3,PMHCAHP4:
                                   PMHCAHP5,PMHCPRV1,PMHCPRV2,PMHCPRV3,PMHCPRV4:
                                   PMHCPRV5,PMHCHTEL,PMHCHAD1,PMHCHAD2,PMHCHAD3:
                                   PMHCHAD4,PMHCHAD5,PMHCHAD6,PMHCHPCD,PMHCHEML:
                                   PMHCDFAC,PMHCDLAC,PMHCYACC,PMHCATYP,PMHCHHCP:
                                   PMHCOSLV,PMHCHCST,PMHCHCSD,PMHCFAXN,PMHCHFXN:
                                   PMHCMOBN,PMHCCRDC,PMHCWAHC,PMHCMRBN,PMHCNHSN:
                                   PMHCUDF1,PMHCUDF2,PMHCUDF3,PMHCUDF4,PMHCUDF5:
                                   PMHCUYN1,PMHCUYN2,PMHCUYN3,PMHCUYN4,PMHCUYN5:
                                   PMHCINSC,PMHCIPLN,PMHCIDTF,PMHCIDTT,PMHCMPGN:
                                   PMHCAPCI,PMHCREGT,PMHCRGDF,PMHCRGDT,PMHCPRDF:
                                   PMHCPRDT,PMHCTSDF,PMHCTFDT,PMHCVISD,PMHCPRFC:
                                   PMHCPRFN,PMHCABNN,PMHCUPDF,PMHCPRMK,PMHCSTTS:
                                   PMHCDLMI,PMHCDLMA,PMHCCDTE,PMHCCTIM,PMHCWEBC:
                                   PMHCLUPD,PMHCLUPT,PMHCWEBU,PMHCSLGP,PMHCHOSS:
                                   PMHCPTYP,PMHCEXML,PMHCDEAC,PMHCCPER,PMHCAHC1:
                                   PMHCAHC2,PMHCAHC3,PMHCLDOC,PMHCSDAT,PMHCEDAT:
                                   PMHCNHTA,PMHCWWCN,PMHCWWCE,PMHCWWCS,PMHCSMD1:
                                   PMHCSMD2,PMHCSPAR                            
          RETURN
.
DEPMHCP1  RESET     KEY10                                                       
          DELETE    PMSHCPA1,KEY10                                              
          RETURN
.
RLPMHCP1  RESET     KEY10                                                       
          MOVE      ZERO,OVRCD
          READL     PMSHCPA1,KEY10;PMHCHCPC,PMHCHCPT,PMHCTITL,PMHCGNAM,PMHCSNAM:
                                   PMHCINIT,PMHCGNDR,PMHCDTOB,PMHCSPC1,PMHCSPD1:
                                   PMHCSPC2,PMHCSPD2,PMHCSPC3,PMHCSPD3,PMHCSPC4:
                                   PMHCSPD4,PMHCSPC5,PMHCSPD5,PMHCRCPT,PMHCADR1:
                                   PMHCADR2,PMHCADR3,PMHCADR4,PMHCADR5,PMHCADR6:
                                   PMHCPOST,PMHCSTAT,PMHCSEML,PMHCSTEL,PMHCPAGR:
                                   PMHCPAGN,PMHCAHP1,PMHCAHP2,PMHCAHP3,PMHCAHP4:
                                   PMHCAHP5,PMHCPRV1,PMHCPRV2,PMHCPRV3,PMHCPRV4:
                                   PMHCPRV5,PMHCHTEL,PMHCHAD1,PMHCHAD2,PMHCHAD3:
                                   PMHCHAD4,PMHCHAD5,PMHCHAD6,PMHCHPCD,PMHCHEML:
                                   PMHCDFAC,PMHCDLAC,PMHCYACC,PMHCATYP,PMHCHHCP:
                                   PMHCOSLV,PMHCHCST,PMHCHCSD,PMHCFAXN,PMHCHFXN:
                                   PMHCMOBN,PMHCCRDC,PMHCWAHC,PMHCMRBN,PMHCNHSN:
                                   PMHCUDF1,PMHCUDF2,PMHCUDF3,PMHCUDF4,PMHCUDF5:
                                   PMHCUYN1,PMHCUYN2,PMHCUYN3,PMHCUYN4,PMHCUYN5:
                                   PMHCINSC,PMHCIPLN,PMHCIDTF,PMHCIDTT,PMHCMPGN:
                                   PMHCAPCI,PMHCREGT,PMHCRGDF,PMHCRGDT,PMHCPRDF:
                                   PMHCPRDT,PMHCTSDF,PMHCTFDT,PMHCVISD,PMHCPRFC:
                                   PMHCPRFN,PMHCABNN,PMHCUPDF,PMHCPRMK,PMHCSTTS:
                                   PMHCDLMI,PMHCDLMA,PMHCCDTE,PMHCCTIM,PMHCWEBC:
                                   PMHCLUPD,PMHCLUPT,PMHCWEBU,PMHCSLGP,PMHCHOSS:
                                   PMHCPTYP,PMHCEXML,PMHCDEAC,PMHCCPER,PMHCAHC1:
                                   PMHCAHC2,PMHCAHC3,PMHCLDOC,PMHCSDAT,PMHCEDAT:
                                   PMHCNHTA,PMHCWWCN,PMHCWWCE,PMHCWWCS,PMHCSMD1:
                                   PMHCSMD2,PMHCSPAR                            
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLPMHCP1  MOVE      ZERO,OVRCD                                                  
          READLKS   PMSHCPA1;PMHCHCPC,PMHCHCPT,PMHCTITL,PMHCGNAM,PMHCSNAM:      
                             PMHCINIT,PMHCGNDR,PMHCDTOB,PMHCSPC1,PMHCSPD1:      
                             PMHCSPC2,PMHCSPD2,PMHCSPC3,PMHCSPD3,PMHCSPC4:      
                             PMHCSPD4,PMHCSPC5,PMHCSPD5,PMHCRCPT,PMHCADR1:      
                             PMHCADR2,PMHCADR3,PMHCADR4,PMHCADR5,PMHCADR6:      
                             PMHCPOST,PMHCSTAT,PMHCSEML,PMHCSTEL,PMHCPAGR:      
                             PMHCPAGN,PMHCAHP1,PMHCAHP2,PMHCAHP3,PMHCAHP4:      
                             PMHCAHP5,PMHCPRV1,PMHCPRV2,PMHCPRV3,PMHCPRV4:      
                             PMHCPRV5,PMHCHTEL,PMHCHAD1,PMHCHAD2,PMHCHAD3:      
                             PMHCHAD4,PMHCHAD5,PMHCHAD6,PMHCHPCD,PMHCHEML:      
                             PMHCDFAC,PMHCDLAC,PMHCYACC,PMHCATYP,PMHCHHCP:      
                             PMHCOSLV,PMHCHCST,PMHCHCSD,PMHCFAXN,PMHCHFXN:      
                             PMHCMOBN,PMHCCRDC,PMHCWAHC,PMHCMRBN,PMHCNHSN:      
                             PMHCUDF1,PMHCUDF2,PMHCUDF3,PMHCUDF4,PMHCUDF5:      
                             PMHCUYN1,PMHCUYN2,PMHCUYN3,PMHCUYN4,PMHCUYN5:      
                             PMHCINSC,PMHCIPLN,PMHCIDTF,PMHCIDTT,PMHCMPGN:      
                             PMHCAPCI,PMHCREGT,PMHCRGDF,PMHCRGDT,PMHCPRDF:      
                             PMHCPRDT,PMHCTSDF,PMHCTFDT,PMHCVISD,PMHCPRFC:      
                             PMHCPRFN,PMHCABNN,PMHCUPDF,PMHCPRMK,PMHCSTTS:      
                             PMHCDLMI,PMHCDLMA,PMHCCDTE,PMHCCTIM,PMHCWEBC:      
                             PMHCLUPD,PMHCLUPT,PMHCWEBU,PMHCSLGP,PMHCHOSS:      
                             PMHCPTYP,PMHCEXML,PMHCDEAC,PMHCCPER,PMHCAHC1:      
                             PMHCAHC2,PMHCAHC3,PMHCLDOC,PMHCSDAT,PMHCEDAT:      
                             PMHCNHTA,PMHCWWCN,PMHCWWCE,PMHCWWCS,PMHCSMD1:      
                             PMHCSMD2,PMHCSPAR                                  
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLPMHCP1  MOVE      ZERO,OVRCD                                                  
          READLKP   PMSHCPA1;PMHCHCPC,PMHCHCPT,PMHCTITL,PMHCGNAM,PMHCSNAM:      
                             PMHCINIT,PMHCGNDR,PMHCDTOB,PMHCSPC1,PMHCSPD1:      
                             PMHCSPC2,PMHCSPD2,PMHCSPC3,PMHCSPD3,PMHCSPC4:      
                             PMHCSPD4,PMHCSPC5,PMHCSPD5,PMHCRCPT,PMHCADR1:      
                             PMHCADR2,PMHCADR3,PMHCADR4,PMHCADR5,PMHCADR6:      
                             PMHCPOST,PMHCSTAT,PMHCSEML,PMHCSTEL,PMHCPAGR:      
                             PMHCPAGN,PMHCAHP1,PMHCAHP2,PMHCAHP3,PMHCAHP4:      
                             PMHCAHP5,PMHCPRV1,PMHCPRV2,PMHCPRV3,PMHCPRV4:      
                             PMHCPRV5,PMHCHTEL,PMHCHAD1,PMHCHAD2,PMHCHAD3:      
                             PMHCHAD4,PMHCHAD5,PMHCHAD6,PMHCHPCD,PMHCHEML:      
                             PMHCDFAC,PMHCDLAC,PMHCYACC,PMHCATYP,PMHCHHCP:      
                             PMHCOSLV,PMHCHCST,PMHCHCSD,PMHCFAXN,PMHCHFXN:      
                             PMHCMOBN,PMHCCRDC,PMHCWAHC,PMHCMRBN,PMHCNHSN:      
                             PMHCUDF1,PMHCUDF2,PMHCUDF3,PMHCUDF4,PMHCUDF5:      
                             PMHCUYN1,PMHCUYN2,PMHCUYN3,PMHCUYN4,PMHCUYN5:      
                             PMHCINSC,PMHCIPLN,PMHCIDTF,PMHCIDTT,PMHCMPGN:      
                             PMHCAPCI,PMHCREGT,PMHCRGDF,PMHCRGDT,PMHCPRDF:      
                             PMHCPRDT,PMHCTSDF,PMHCTFDT,PMHCVISD,PMHCPRFC:      
                             PMHCPRFN,PMHCABNN,PMHCUPDF,PMHCPRMK,PMHCSTTS:      
                             PMHCDLMI,PMHCDLMA,PMHCCDTE,PMHCCTIM,PMHCWEBC:      
                             PMHCLUPD,PMHCLUPT,PMHCWEBU,PMHCSLGP,PMHCHOSS:      
                             PMHCPTYP,PMHCEXML,PMHCDEAC,PMHCCPER,PMHCAHC1:      
                             PMHCAHC2,PMHCAHC3,PMHCLDOC,PMHCSDAT,PMHCEDAT:      
                             PMHCNHTA,PMHCWWCN,PMHCWWCE,PMHCWWCS,PMHCSMD1:      
                             PMHCSMD2,PMHCSPAR                                  
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUPMHCP1  RESET     KEY10                                                       
          UNLOCK    PMSHCPA1                                                    
          RETURN
.
RSPMHCP2  RESET     KEY80                                                       
          READ      PMSHCPA2,KEY80;;                                            
          RETURN
.
RAPMHCP2  RESET     KEY80                                                       
          MOVE      ZERO,OVRCD
          READ      PMSHCPA2,KEY80;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPMHCP2  RESET     KEY80                                                       
          MOVE      ZERO,OVRCD
          READ      PMSHCPA2,KEY80;PMHCHCPC,PMHCHCPT,PMHCTITL,PMHCGNAM,PMHCSNAM:
                                   PMHCINIT,PMHCGNDR,PMHCDTOB,PMHCSPC1,PMHCSPD1:
                                   PMHCSPC2,PMHCSPD2,PMHCSPC3,PMHCSPD3,PMHCSPC4:
                                   PMHCSPD4,PMHCSPC5,PMHCSPD5,PMHCRCPT,PMHCADR1:
                                   PMHCADR2,PMHCADR3,PMHCADR4,PMHCADR5,PMHCADR6:
                                   PMHCPOST,PMHCSTAT,PMHCSEML,PMHCSTEL,PMHCPAGR:
                                   PMHCPAGN,PMHCAHP1,PMHCAHP2,PMHCAHP3,PMHCAHP4:
                                   PMHCAHP5,PMHCPRV1,PMHCPRV2,PMHCPRV3,PMHCPRV4:
                                   PMHCPRV5,PMHCHTEL,PMHCHAD1,PMHCHAD2,PMHCHAD3:
                                   PMHCHAD4,PMHCHAD5,PMHCHAD6,PMHCHPCD,PMHCHEML:
                                   PMHCDFAC,PMHCDLAC,PMHCYACC,PMHCATYP,PMHCHHCP:
                                   PMHCOSLV,PMHCHCST,PMHCHCSD,PMHCFAXN,PMHCHFXN:
                                   PMHCMOBN,PMHCCRDC,PMHCWAHC,PMHCMRBN,PMHCNHSN:
                                   PMHCUDF1,PMHCUDF2,PMHCUDF3,PMHCUDF4,PMHCUDF5:
                                   PMHCUYN1,PMHCUYN2,PMHCUYN3,PMHCUYN4,PMHCUYN5:
                                   PMHCINSC,PMHCIPLN,PMHCIDTF,PMHCIDTT,PMHCMPGN:
                                   PMHCAPCI,PMHCREGT,PMHCRGDF,PMHCRGDT,PMHCPRDF:
                                   PMHCPRDT,PMHCTSDF,PMHCTFDT,PMHCVISD,PMHCPRFC:
                                   PMHCPRFN,PMHCABNN,PMHCUPDF,PMHCPRMK,PMHCSTTS:
                                   PMHCDLMI,PMHCDLMA,PMHCCDTE,PMHCCTIM,PMHCWEBC:
                                   PMHCLUPD,PMHCLUPT,PMHCWEBU,PMHCSLGP,PMHCHOSS:
                                   PMHCPTYP,PMHCEXML,PMHCDEAC,PMHCCPER,PMHCAHC1:
                                   PMHCAHC2,PMHCAHC3,PMHCLDOC,PMHCSDAT,PMHCEDAT:
                                   PMHCNHTA,PMHCWWCN,PMHCWWCE,PMHCWWCS,PMHCSMD1:
                                   PMHCSMD2,PMHCSPAR                            
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPMHCP2  MOVE      ZERO,OVRCD                                                  
          READKS    PMSHCPA2;PMHCHCPC,PMHCHCPT,PMHCTITL,PMHCGNAM,PMHCSNAM:      
                             PMHCINIT,PMHCGNDR,PMHCDTOB,PMHCSPC1,PMHCSPD1:      
                             PMHCSPC2,PMHCSPD2,PMHCSPC3,PMHCSPD3,PMHCSPC4:      
                             PMHCSPD4,PMHCSPC5,PMHCSPD5,PMHCRCPT,PMHCADR1:      
                             PMHCADR2,PMHCADR3,PMHCADR4,PMHCADR5,PMHCADR6:      
                             PMHCPOST,PMHCSTAT,PMHCSEML,PMHCSTEL,PMHCPAGR:      
                             PMHCPAGN,PMHCAHP1,PMHCAHP2,PMHCAHP3,PMHCAHP4:      
                             PMHCAHP5,PMHCPRV1,PMHCPRV2,PMHCPRV3,PMHCPRV4:      
                             PMHCPRV5,PMHCHTEL,PMHCHAD1,PMHCHAD2,PMHCHAD3:      
                             PMHCHAD4,PMHCHAD5,PMHCHAD6,PMHCHPCD,PMHCHEML:      
                             PMHCDFAC,PMHCDLAC,PMHCYACC,PMHCATYP,PMHCHHCP:      
                             PMHCOSLV,PMHCHCST,PMHCHCSD,PMHCFAXN,PMHCHFXN:      
                             PMHCMOBN,PMHCCRDC,PMHCWAHC,PMHCMRBN,PMHCNHSN:      
                             PMHCUDF1,PMHCUDF2,PMHCUDF3,PMHCUDF4,PMHCUDF5:      
                             PMHCUYN1,PMHCUYN2,PMHCUYN3,PMHCUYN4,PMHCUYN5:      
                             PMHCINSC,PMHCIPLN,PMHCIDTF,PMHCIDTT,PMHCMPGN:      
                             PMHCAPCI,PMHCREGT,PMHCRGDF,PMHCRGDT,PMHCPRDF:      
                             PMHCPRDT,PMHCTSDF,PMHCTFDT,PMHCVISD,PMHCPRFC:      
                             PMHCPRFN,PMHCABNN,PMHCUPDF,PMHCPRMK,PMHCSTTS:      
                             PMHCDLMI,PMHCDLMA,PMHCCDTE,PMHCCTIM,PMHCWEBC:      
                             PMHCLUPD,PMHCLUPT,PMHCWEBU,PMHCSLGP,PMHCHOSS:      
                             PMHCPTYP,PMHCEXML,PMHCDEAC,PMHCCPER,PMHCAHC1:      
                             PMHCAHC2,PMHCAHC3,PMHCLDOC,PMHCSDAT,PMHCEDAT:      
                             PMHCNHTA,PMHCWWCN,PMHCWWCE,PMHCWWCS,PMHCSMD1:      
                             PMHCSMD2,PMHCSPAR                                  
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPMHCP2  MOVE      ZERO,OVRCD                                                  
          READKP    PMSHCPA2;PMHCHCPC,PMHCHCPT,PMHCTITL,PMHCGNAM,PMHCSNAM:      
                             PMHCINIT,PMHCGNDR,PMHCDTOB,PMHCSPC1,PMHCSPD1:      
                             PMHCSPC2,PMHCSPD2,PMHCSPC3,PMHCSPD3,PMHCSPC4:      
                             PMHCSPD4,PMHCSPC5,PMHCSPD5,PMHCRCPT,PMHCADR1:      
                             PMHCADR2,PMHCADR3,PMHCADR4,PMHCADR5,PMHCADR6:      
                             PMHCPOST,PMHCSTAT,PMHCSEML,PMHCSTEL,PMHCPAGR:      
                             PMHCPAGN,PMHCAHP1,PMHCAHP2,PMHCAHP3,PMHCAHP4:      
                             PMHCAHP5,PMHCPRV1,PMHCPRV2,PMHCPRV3,PMHCPRV4:      
                             PMHCPRV5,PMHCHTEL,PMHCHAD1,PMHCHAD2,PMHCHAD3:      
                             PMHCHAD4,PMHCHAD5,PMHCHAD6,PMHCHPCD,PMHCHEML:      
                             PMHCDFAC,PMHCDLAC,PMHCYACC,PMHCATYP,PMHCHHCP:      
                             PMHCOSLV,PMHCHCST,PMHCHCSD,PMHCFAXN,PMHCHFXN:      
                             PMHCMOBN,PMHCCRDC,PMHCWAHC,PMHCMRBN,PMHCNHSN:      
                             PMHCUDF1,PMHCUDF2,PMHCUDF3,PMHCUDF4,PMHCUDF5:      
                             PMHCUYN1,PMHCUYN2,PMHCUYN3,PMHCUYN4,PMHCUYN5:      
                             PMHCINSC,PMHCIPLN,PMHCIDTF,PMHCIDTT,PMHCMPGN:      
                             PMHCAPCI,PMHCREGT,PMHCRGDF,PMHCRGDT,PMHCPRDF:      
                             PMHCPRDT,PMHCTSDF,PMHCTFDT,PMHCVISD,PMHCPRFC:      
                             PMHCPRFN,PMHCABNN,PMHCUPDF,PMHCPRMK,PMHCSTTS:      
                             PMHCDLMI,PMHCDLMA,PMHCCDTE,PMHCCTIM,PMHCWEBC:      
                             PMHCLUPD,PMHCLUPT,PMHCWEBU,PMHCSLGP,PMHCHOSS:      
                             PMHCPTYP,PMHCEXML,PMHCDEAC,PMHCCPER,PMHCAHC1:      
                             PMHCAHC2,PMHCAHC3,PMHCLDOC,PMHCSDAT,PMHCEDAT:      
                             PMHCNHTA,PMHCWWCN,PMHCWWCE,PMHCWWCS,PMHCSMD1:      
                             PMHCSMD2,PMHCSPAR                                  
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPMHCP2  MOVE      ZERO,OVRCD                                                  
          UPDATE    PMSHCPA2;PMHCHCPC,PMHCHCPT,PMHCTITL,PMHCGNAM,PMHCSNAM:      
                             PMHCINIT,PMHCGNDR,PMHCDTOB,PMHCSPC1,PMHCSPD1:      
                             PMHCSPC2,PMHCSPD2,PMHCSPC3,PMHCSPD3,PMHCSPC4:      
                             PMHCSPD4,PMHCSPC5,PMHCSPD5,PMHCRCPT,PMHCADR1:      
                             PMHCADR2,PMHCADR3,PMHCADR4,PMHCADR5,PMHCADR6:      
                             PMHCPOST,PMHCSTAT,PMHCSEML,PMHCSTEL,PMHCPAGR:      
                             PMHCPAGN,PMHCAHP1,PMHCAHP2,PMHCAHP3,PMHCAHP4:      
                             PMHCAHP5,PMHCPRV1,PMHCPRV2,PMHCPRV3,PMHCPRV4:      
                             PMHCPRV5,PMHCHTEL,PMHCHAD1,PMHCHAD2,PMHCHAD3:      
                             PMHCHAD4,PMHCHAD5,PMHCHAD6,PMHCHPCD,PMHCHEML:      
                             PMHCDFAC,PMHCDLAC,PMHCYACC,PMHCATYP,PMHCHHCP:      
                             PMHCOSLV,PMHCHCST,PMHCHCSD,PMHCFAXN,PMHCHFXN:      
                             PMHCMOBN,PMHCCRDC,PMHCWAHC,PMHCMRBN,PMHCNHSN:      
                             PMHCUDF1,PMHCUDF2,PMHCUDF3,PMHCUDF4,PMHCUDF5:      
                             PMHCUYN1,PMHCUYN2,PMHCUYN3,PMHCUYN4,PMHCUYN5:      
                             PMHCINSC,PMHCIPLN,PMHCIDTF,PMHCIDTT,PMHCMPGN:      
                             PMHCAPCI,PMHCREGT,PMHCRGDF,PMHCRGDT,PMHCPRDF:      
                             PMHCPRDT,PMHCTSDF,PMHCTFDT,PMHCVISD,PMHCPRFC:      
                             PMHCPRFN,PMHCABNN,PMHCUPDF,PMHCPRMK,PMHCSTTS:      
                             PMHCDLMI,PMHCDLMA,PMHCCDTE,PMHCCTIM,PMHCWEBC:      
                             PMHCLUPD,PMHCLUPT,PMHCWEBU,PMHCSLGP,PMHCHOSS:      
                             PMHCPTYP,PMHCEXML,PMHCDEAC,PMHCCPER,PMHCAHC1:      
                             PMHCAHC2,PMHCAHC3,PMHCLDOC,PMHCSDAT,PMHCEDAT:      
                             PMHCNHTA,PMHCWWCN,PMHCWWCE,PMHCWWCS,PMHCSMD1:      
                             PMHCSMD2,PMHCSPAR                                  
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRPMHCP2  RESET     KEY80                                                       
          WRITE     PMSHCPA2,KEY80;PMHCHCPC,PMHCHCPT,PMHCTITL,PMHCGNAM,PMHCSNAM:
                                   PMHCINIT,PMHCGNDR,PMHCDTOB,PMHCSPC1,PMHCSPD1:
                                   PMHCSPC2,PMHCSPD2,PMHCSPC3,PMHCSPD3,PMHCSPC4:
                                   PMHCSPD4,PMHCSPC5,PMHCSPD5,PMHCRCPT,PMHCADR1:
                                   PMHCADR2,PMHCADR3,PMHCADR4,PMHCADR5,PMHCADR6:
                                   PMHCPOST,PMHCSTAT,PMHCSEML,PMHCSTEL,PMHCPAGR:
                                   PMHCPAGN,PMHCAHP1,PMHCAHP2,PMHCAHP3,PMHCAHP4:
                                   PMHCAHP5,PMHCPRV1,PMHCPRV2,PMHCPRV3,PMHCPRV4:
                                   PMHCPRV5,PMHCHTEL,PMHCHAD1,PMHCHAD2,PMHCHAD3:
                                   PMHCHAD4,PMHCHAD5,PMHCHAD6,PMHCHPCD,PMHCHEML:
                                   PMHCDFAC,PMHCDLAC,PMHCYACC,PMHCATYP,PMHCHHCP:
                                   PMHCOSLV,PMHCHCST,PMHCHCSD,PMHCFAXN,PMHCHFXN:
                                   PMHCMOBN,PMHCCRDC,PMHCWAHC,PMHCMRBN,PMHCNHSN:
                                   PMHCUDF1,PMHCUDF2,PMHCUDF3,PMHCUDF4,PMHCUDF5:
                                   PMHCUYN1,PMHCUYN2,PMHCUYN3,PMHCUYN4,PMHCUYN5:
                                   PMHCINSC,PMHCIPLN,PMHCIDTF,PMHCIDTT,PMHCMPGN:
                                   PMHCAPCI,PMHCREGT,PMHCRGDF,PMHCRGDT,PMHCPRDF:
                                   PMHCPRDT,PMHCTSDF,PMHCTFDT,PMHCVISD,PMHCPRFC:
                                   PMHCPRFN,PMHCABNN,PMHCUPDF,PMHCPRMK,PMHCSTTS:
                                   PMHCDLMI,PMHCDLMA,PMHCCDTE,PMHCCTIM,PMHCWEBC:
                                   PMHCLUPD,PMHCLUPT,PMHCWEBU,PMHCSLGP,PMHCHOSS:
                                   PMHCPTYP,PMHCEXML,PMHCDEAC,PMHCCPER,PMHCAHC1:
                                   PMHCAHC2,PMHCAHC3,PMHCLDOC,PMHCSDAT,PMHCEDAT:
                                   PMHCNHTA,PMHCWWCN,PMHCWWCE,PMHCWWCS,PMHCSMD1:
                                   PMHCSMD2,PMHCSPAR                            
          RETURN
.
DEPMHCP2  RESET     KEY80                                                       
          DELETE    PMSHCPA2,KEY80                                              
          RETURN
.
RLPMHCP2  RESET     KEY80                                                       
          MOVE      ZERO,OVRCD
          READL     PMSHCPA2,KEY80;PMHCHCPC,PMHCHCPT,PMHCTITL,PMHCGNAM,PMHCSNAM:
                                   PMHCINIT,PMHCGNDR,PMHCDTOB,PMHCSPC1,PMHCSPD1:
                                   PMHCSPC2,PMHCSPD2,PMHCSPC3,PMHCSPD3,PMHCSPC4:
                                   PMHCSPD4,PMHCSPC5,PMHCSPD5,PMHCRCPT,PMHCADR1:
                                   PMHCADR2,PMHCADR3,PMHCADR4,PMHCADR5,PMHCADR6:
                                   PMHCPOST,PMHCSTAT,PMHCSEML,PMHCSTEL,PMHCPAGR:
                                   PMHCPAGN,PMHCAHP1,PMHCAHP2,PMHCAHP3,PMHCAHP4:
                                   PMHCAHP5,PMHCPRV1,PMHCPRV2,PMHCPRV3,PMHCPRV4:
                                   PMHCPRV5,PMHCHTEL,PMHCHAD1,PMHCHAD2,PMHCHAD3:
                                   PMHCHAD4,PMHCHAD5,PMHCHAD6,PMHCHPCD,PMHCHEML:
                                   PMHCDFAC,PMHCDLAC,PMHCYACC,PMHCATYP,PMHCHHCP:
                                   PMHCOSLV,PMHCHCST,PMHCHCSD,PMHCFAXN,PMHCHFXN:
                                   PMHCMOBN,PMHCCRDC,PMHCWAHC,PMHCMRBN,PMHCNHSN:
                                   PMHCUDF1,PMHCUDF2,PMHCUDF3,PMHCUDF4,PMHCUDF5:
                                   PMHCUYN1,PMHCUYN2,PMHCUYN3,PMHCUYN4,PMHCUYN5:
                                   PMHCINSC,PMHCIPLN,PMHCIDTF,PMHCIDTT,PMHCMPGN:
                                   PMHCAPCI,PMHCREGT,PMHCRGDF,PMHCRGDT,PMHCPRDF:
                                   PMHCPRDT,PMHCTSDF,PMHCTFDT,PMHCVISD,PMHCPRFC:
                                   PMHCPRFN,PMHCABNN,PMHCUPDF,PMHCPRMK,PMHCSTTS:
                                   PMHCDLMI,PMHCDLMA,PMHCCDTE,PMHCCTIM,PMHCWEBC:
                                   PMHCLUPD,PMHCLUPT,PMHCWEBU,PMHCSLGP,PMHCHOSS:
                                   PMHCPTYP,PMHCEXML,PMHCDEAC,PMHCCPER,PMHCAHC1:
                                   PMHCAHC2,PMHCAHC3,PMHCLDOC,PMHCSDAT,PMHCEDAT:
                                   PMHCNHTA,PMHCWWCN,PMHCWWCE,PMHCWWCS,PMHCSMD1:
                                   PMHCSMD2,PMHCSPAR                            
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLPMHCP2  MOVE      ZERO,OVRCD                                                  
          READLKS   PMSHCPA2;PMHCHCPC,PMHCHCPT,PMHCTITL,PMHCGNAM,PMHCSNAM:      
                             PMHCINIT,PMHCGNDR,PMHCDTOB,PMHCSPC1,PMHCSPD1:      
                             PMHCSPC2,PMHCSPD2,PMHCSPC3,PMHCSPD3,PMHCSPC4:      
                             PMHCSPD4,PMHCSPC5,PMHCSPD5,PMHCRCPT,PMHCADR1:      
                             PMHCADR2,PMHCADR3,PMHCADR4,PMHCADR5,PMHCADR6:      
                             PMHCPOST,PMHCSTAT,PMHCSEML,PMHCSTEL,PMHCPAGR:      
                             PMHCPAGN,PMHCAHP1,PMHCAHP2,PMHCAHP3,PMHCAHP4:      
                             PMHCAHP5,PMHCPRV1,PMHCPRV2,PMHCPRV3,PMHCPRV4:      
                             PMHCPRV5,PMHCHTEL,PMHCHAD1,PMHCHAD2,PMHCHAD3:      
                             PMHCHAD4,PMHCHAD5,PMHCHAD6,PMHCHPCD,PMHCHEML:      
                             PMHCDFAC,PMHCDLAC,PMHCYACC,PMHCATYP,PMHCHHCP:      
                             PMHCOSLV,PMHCHCST,PMHCHCSD,PMHCFAXN,PMHCHFXN:      
                             PMHCMOBN,PMHCCRDC,PMHCWAHC,PMHCMRBN,PMHCNHSN:      
                             PMHCUDF1,PMHCUDF2,PMHCUDF3,PMHCUDF4,PMHCUDF5:      
                             PMHCUYN1,PMHCUYN2,PMHCUYN3,PMHCUYN4,PMHCUYN5:      
                             PMHCINSC,PMHCIPLN,PMHCIDTF,PMHCIDTT,PMHCMPGN:      
                             PMHCAPCI,PMHCREGT,PMHCRGDF,PMHCRGDT,PMHCPRDF:      
                             PMHCPRDT,PMHCTSDF,PMHCTFDT,PMHCVISD,PMHCPRFC:      
                             PMHCPRFN,PMHCABNN,PMHCUPDF,PMHCPRMK,PMHCSTTS:      
                             PMHCDLMI,PMHCDLMA,PMHCCDTE,PMHCCTIM,PMHCWEBC:      
                             PMHCLUPD,PMHCLUPT,PMHCWEBU,PMHCSLGP,PMHCHOSS:      
                             PMHCPTYP,PMHCEXML,PMHCDEAC,PMHCCPER,PMHCAHC1:      
                             PMHCAHC2,PMHCAHC3,PMHCLDOC,PMHCSDAT,PMHCEDAT:      
                             PMHCNHTA,PMHCWWCN,PMHCWWCE,PMHCWWCS,PMHCSMD1:      
                             PMHCSMD2,PMHCSPAR                                  
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLPMHCP2  MOVE      ZERO,OVRCD                                                  
          READLKP   PMSHCPA2;PMHCHCPC,PMHCHCPT,PMHCTITL,PMHCGNAM,PMHCSNAM:      
                             PMHCINIT,PMHCGNDR,PMHCDTOB,PMHCSPC1,PMHCSPD1:      
                             PMHCSPC2,PMHCSPD2,PMHCSPC3,PMHCSPD3,PMHCSPC4:      
                             PMHCSPD4,PMHCSPC5,PMHCSPD5,PMHCRCPT,PMHCADR1:      
                             PMHCADR2,PMHCADR3,PMHCADR4,PMHCADR5,PMHCADR6:      
                             PMHCPOST,PMHCSTAT,PMHCSEML,PMHCSTEL,PMHCPAGR:      
                             PMHCPAGN,PMHCAHP1,PMHCAHP2,PMHCAHP3,PMHCAHP4:      
                             PMHCAHP5,PMHCPRV1,PMHCPRV2,PMHCPRV3,PMHCPRV4:      
                             PMHCPRV5,PMHCHTEL,PMHCHAD1,PMHCHAD2,PMHCHAD3:      
                             PMHCHAD4,PMHCHAD5,PMHCHAD6,PMHCHPCD,PMHCHEML:      
                             PMHCDFAC,PMHCDLAC,PMHCYACC,PMHCATYP,PMHCHHCP:      
                             PMHCOSLV,PMHCHCST,PMHCHCSD,PMHCFAXN,PMHCHFXN:      
                             PMHCMOBN,PMHCCRDC,PMHCWAHC,PMHCMRBN,PMHCNHSN:      
                             PMHCUDF1,PMHCUDF2,PMHCUDF3,PMHCUDF4,PMHCUDF5:      
                             PMHCUYN1,PMHCUYN2,PMHCUYN3,PMHCUYN4,PMHCUYN5:      
                             PMHCINSC,PMHCIPLN,PMHCIDTF,PMHCIDTT,PMHCMPGN:      
                             PMHCAPCI,PMHCREGT,PMHCRGDF,PMHCRGDT,PMHCPRDF:      
                             PMHCPRDT,PMHCTSDF,PMHCTFDT,PMHCVISD,PMHCPRFC:      
                             PMHCPRFN,PMHCABNN,PMHCUPDF,PMHCPRMK,PMHCSTTS:      
                             PMHCDLMI,PMHCDLMA,PMHCCDTE,PMHCCTIM,PMHCWEBC:      
                             PMHCLUPD,PMHCLUPT,PMHCWEBU,PMHCSLGP,PMHCHOSS:      
                             PMHCPTYP,PMHCEXML,PMHCDEAC,PMHCCPER,PMHCAHC1:      
                             PMHCAHC2,PMHCAHC3,PMHCLDOC,PMHCSDAT,PMHCEDAT:      
                             PMHCNHTA,PMHCWWCN,PMHCWWCE,PMHCWWCS,PMHCSMD1:      
                             PMHCSMD2,PMHCSPAR                                  
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUPMHCP2  RESET     KEY80                                                       
          UNLOCK    PMSHCPA2                                                    
          RETURN
.
RSPMHCP3  RESET     KEY20                                                       
          READ      PMSHCPA3,KEY20;;                                            
          RETURN
.
RAPMHCP3  RESET     KEY20                                                       
          MOVE      ZERO,OVRCD
          READ      PMSHCPA3,KEY20;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPMHCP3  RESET     KEY20                                                       
          MOVE      ZERO,OVRCD
          READ      PMSHCPA3,KEY20;PMHCHCPC,PMHCHCPT,PMHCTITL,PMHCGNAM,PMHCSNAM:
                                   PMHCINIT,PMHCGNDR,PMHCDTOB,PMHCSPC1,PMHCSPD1:
                                   PMHCSPC2,PMHCSPD2,PMHCSPC3,PMHCSPD3,PMHCSPC4:
                                   PMHCSPD4,PMHCSPC5,PMHCSPD5,PMHCRCPT,PMHCADR1:
                                   PMHCADR2,PMHCADR3,PMHCADR4,PMHCADR5,PMHCADR6:
                                   PMHCPOST,PMHCSTAT,PMHCSEML,PMHCSTEL,PMHCPAGR:
                                   PMHCPAGN,PMHCAHP1,PMHCAHP2,PMHCAHP3,PMHCAHP4:
                                   PMHCAHP5,PMHCPRV1,PMHCPRV2,PMHCPRV3,PMHCPRV4:
                                   PMHCPRV5,PMHCHTEL,PMHCHAD1,PMHCHAD2,PMHCHAD3:
                                   PMHCHAD4,PMHCHAD5,PMHCHAD6,PMHCHPCD,PMHCHEML:
                                   PMHCDFAC,PMHCDLAC,PMHCYACC,PMHCATYP,PMHCHHCP:
                                   PMHCOSLV,PMHCHCST,PMHCHCSD,PMHCFAXN,PMHCHFXN:
                                   PMHCMOBN,PMHCCRDC,PMHCWAHC,PMHCMRBN,PMHCNHSN:
                                   PMHCUDF1,PMHCUDF2,PMHCUDF3,PMHCUDF4,PMHCUDF5:
                                   PMHCUYN1,PMHCUYN2,PMHCUYN3,PMHCUYN4,PMHCUYN5:
                                   PMHCINSC,PMHCIPLN,PMHCIDTF,PMHCIDTT,PMHCMPGN:
                                   PMHCAPCI,PMHCREGT,PMHCRGDF,PMHCRGDT,PMHCPRDF:
                                   PMHCPRDT,PMHCTSDF,PMHCTFDT,PMHCVISD,PMHCPRFC:
                                   PMHCPRFN,PMHCABNN,PMHCUPDF,PMHCPRMK,PMHCSTTS:
                                   PMHCDLMI,PMHCDLMA,PMHCCDTE,PMHCCTIM,PMHCWEBC:
                                   PMHCLUPD,PMHCLUPT,PMHCWEBU,PMHCSLGP,PMHCHOSS:
                                   PMHCPTYP,PMHCEXML,PMHCDEAC,PMHCCPER,PMHCAHC1:
                                   PMHCAHC2,PMHCAHC3,PMHCLDOC,PMHCSDAT,PMHCEDAT:
                                   PMHCNHTA,PMHCWWCN,PMHCWWCE,PMHCWWCS,PMHCSMD1:
                                   PMHCSMD2,PMHCSPAR                            
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPMHCP3  MOVE      ZERO,OVRCD                                                  
          READKS    PMSHCPA3;PMHCHCPC,PMHCHCPT,PMHCTITL,PMHCGNAM,PMHCSNAM:      
                             PMHCINIT,PMHCGNDR,PMHCDTOB,PMHCSPC1,PMHCSPD1:      
                             PMHCSPC2,PMHCSPD2,PMHCSPC3,PMHCSPD3,PMHCSPC4:      
                             PMHCSPD4,PMHCSPC5,PMHCSPD5,PMHCRCPT,PMHCADR1:      
                             PMHCADR2,PMHCADR3,PMHCADR4,PMHCADR5,PMHCADR6:      
                             PMHCPOST,PMHCSTAT,PMHCSEML,PMHCSTEL,PMHCPAGR:      
                             PMHCPAGN,PMHCAHP1,PMHCAHP2,PMHCAHP3,PMHCAHP4:      
                             PMHCAHP5,PMHCPRV1,PMHCPRV2,PMHCPRV3,PMHCPRV4:      
                             PMHCPRV5,PMHCHTEL,PMHCHAD1,PMHCHAD2,PMHCHAD3:      
                             PMHCHAD4,PMHCHAD5,PMHCHAD6,PMHCHPCD,PMHCHEML:      
                             PMHCDFAC,PMHCDLAC,PMHCYACC,PMHCATYP,PMHCHHCP:      
                             PMHCOSLV,PMHCHCST,PMHCHCSD,PMHCFAXN,PMHCHFXN:      
                             PMHCMOBN,PMHCCRDC,PMHCWAHC,PMHCMRBN,PMHCNHSN:      
                             PMHCUDF1,PMHCUDF2,PMHCUDF3,PMHCUDF4,PMHCUDF5:      
                             PMHCUYN1,PMHCUYN2,PMHCUYN3,PMHCUYN4,PMHCUYN5:      
                             PMHCINSC,PMHCIPLN,PMHCIDTF,PMHCIDTT,PMHCMPGN:      
                             PMHCAPCI,PMHCREGT,PMHCRGDF,PMHCRGDT,PMHCPRDF:      
                             PMHCPRDT,PMHCTSDF,PMHCTFDT,PMHCVISD,PMHCPRFC:      
                             PMHCPRFN,PMHCABNN,PMHCUPDF,PMHCPRMK,PMHCSTTS:      
                             PMHCDLMI,PMHCDLMA,PMHCCDTE,PMHCCTIM,PMHCWEBC:      
                             PMHCLUPD,PMHCLUPT,PMHCWEBU,PMHCSLGP,PMHCHOSS:      
                             PMHCPTYP,PMHCEXML,PMHCDEAC,PMHCCPER,PMHCAHC1:      
                             PMHCAHC2,PMHCAHC3,PMHCLDOC,PMHCSDAT,PMHCEDAT:      
                             PMHCNHTA,PMHCWWCN,PMHCWWCE,PMHCWWCS,PMHCSMD1:      
                             PMHCSMD2,PMHCSPAR                                  
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPMHCP3  MOVE      ZERO,OVRCD                                                  
          READKP    PMSHCPA3;PMHCHCPC,PMHCHCPT,PMHCTITL,PMHCGNAM,PMHCSNAM:      
                             PMHCINIT,PMHCGNDR,PMHCDTOB,PMHCSPC1,PMHCSPD1:      
                             PMHCSPC2,PMHCSPD2,PMHCSPC3,PMHCSPD3,PMHCSPC4:      
                             PMHCSPD4,PMHCSPC5,PMHCSPD5,PMHCRCPT,PMHCADR1:      
                             PMHCADR2,PMHCADR3,PMHCADR4,PMHCADR5,PMHCADR6:      
                             PMHCPOST,PMHCSTAT,PMHCSEML,PMHCSTEL,PMHCPAGR:      
                             PMHCPAGN,PMHCAHP1,PMHCAHP2,PMHCAHP3,PMHCAHP4:      
                             PMHCAHP5,PMHCPRV1,PMHCPRV2,PMHCPRV3,PMHCPRV4:      
                             PMHCPRV5,PMHCHTEL,PMHCHAD1,PMHCHAD2,PMHCHAD3:      
                             PMHCHAD4,PMHCHAD5,PMHCHAD6,PMHCHPCD,PMHCHEML:      
                             PMHCDFAC,PMHCDLAC,PMHCYACC,PMHCATYP,PMHCHHCP:      
                             PMHCOSLV,PMHCHCST,PMHCHCSD,PMHCFAXN,PMHCHFXN:      
                             PMHCMOBN,PMHCCRDC,PMHCWAHC,PMHCMRBN,PMHCNHSN:      
                             PMHCUDF1,PMHCUDF2,PMHCUDF3,PMHCUDF4,PMHCUDF5:      
                             PMHCUYN1,PMHCUYN2,PMHCUYN3,PMHCUYN4,PMHCUYN5:      
                             PMHCINSC,PMHCIPLN,PMHCIDTF,PMHCIDTT,PMHCMPGN:      
                             PMHCAPCI,PMHCREGT,PMHCRGDF,PMHCRGDT,PMHCPRDF:      
                             PMHCPRDT,PMHCTSDF,PMHCTFDT,PMHCVISD,PMHCPRFC:      
                             PMHCPRFN,PMHCABNN,PMHCUPDF,PMHCPRMK,PMHCSTTS:      
                             PMHCDLMI,PMHCDLMA,PMHCCDTE,PMHCCTIM,PMHCWEBC:      
                             PMHCLUPD,PMHCLUPT,PMHCWEBU,PMHCSLGP,PMHCHOSS:      
                             PMHCPTYP,PMHCEXML,PMHCDEAC,PMHCCPER,PMHCAHC1:      
                             PMHCAHC2,PMHCAHC3,PMHCLDOC,PMHCSDAT,PMHCEDAT:      
                             PMHCNHTA,PMHCWWCN,PMHCWWCE,PMHCWWCS,PMHCSMD1:      
                             PMHCSMD2,PMHCSPAR                                  
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPMHCP3  MOVE      ZERO,OVRCD                                                  
          UPDATE    PMSHCPA3;PMHCHCPC,PMHCHCPT,PMHCTITL,PMHCGNAM,PMHCSNAM:      
                             PMHCINIT,PMHCGNDR,PMHCDTOB,PMHCSPC1,PMHCSPD1:      
                             PMHCSPC2,PMHCSPD2,PMHCSPC3,PMHCSPD3,PMHCSPC4:      
                             PMHCSPD4,PMHCSPC5,PMHCSPD5,PMHCRCPT,PMHCADR1:      
                             PMHCADR2,PMHCADR3,PMHCADR4,PMHCADR5,PMHCADR6:      
                             PMHCPOST,PMHCSTAT,PMHCSEML,PMHCSTEL,PMHCPAGR:      
                             PMHCPAGN,PMHCAHP1,PMHCAHP2,PMHCAHP3,PMHCAHP4:      
                             PMHCAHP5,PMHCPRV1,PMHCPRV2,PMHCPRV3,PMHCPRV4:      
                             PMHCPRV5,PMHCHTEL,PMHCHAD1,PMHCHAD2,PMHCHAD3:      
                             PMHCHAD4,PMHCHAD5,PMHCHAD6,PMHCHPCD,PMHCHEML:      
                             PMHCDFAC,PMHCDLAC,PMHCYACC,PMHCATYP,PMHCHHCP:      
                             PMHCOSLV,PMHCHCST,PMHCHCSD,PMHCFAXN,PMHCHFXN:      
                             PMHCMOBN,PMHCCRDC,PMHCWAHC,PMHCMRBN,PMHCNHSN:      
                             PMHCUDF1,PMHCUDF2,PMHCUDF3,PMHCUDF4,PMHCUDF5:      
                             PMHCUYN1,PMHCUYN2,PMHCUYN3,PMHCUYN4,PMHCUYN5:      
                             PMHCINSC,PMHCIPLN,PMHCIDTF,PMHCIDTT,PMHCMPGN:      
                             PMHCAPCI,PMHCREGT,PMHCRGDF,PMHCRGDT,PMHCPRDF:      
                             PMHCPRDT,PMHCTSDF,PMHCTFDT,PMHCVISD,PMHCPRFC:      
                             PMHCPRFN,PMHCABNN,PMHCUPDF,PMHCPRMK,PMHCSTTS:      
                             PMHCDLMI,PMHCDLMA,PMHCCDTE,PMHCCTIM,PMHCWEBC:      
                             PMHCLUPD,PMHCLUPT,PMHCWEBU,PMHCSLGP,PMHCHOSS:      
                             PMHCPTYP,PMHCEXML,PMHCDEAC,PMHCCPER,PMHCAHC1:      
                             PMHCAHC2,PMHCAHC3,PMHCLDOC,PMHCSDAT,PMHCEDAT:      
                             PMHCNHTA,PMHCWWCN,PMHCWWCE,PMHCWWCS,PMHCSMD1:      
                             PMHCSMD2,PMHCSPAR                                  
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRPMHCP3  RESET     KEY20                                                       
          WRITE     PMSHCPA3,KEY20;PMHCHCPC,PMHCHCPT,PMHCTITL,PMHCGNAM,PMHCSNAM:
                                   PMHCINIT,PMHCGNDR,PMHCDTOB,PMHCSPC1,PMHCSPD1:
                                   PMHCSPC2,PMHCSPD2,PMHCSPC3,PMHCSPD3,PMHCSPC4:
                                   PMHCSPD4,PMHCSPC5,PMHCSPD5,PMHCRCPT,PMHCADR1:
                                   PMHCADR2,PMHCADR3,PMHCADR4,PMHCADR5,PMHCADR6:
                                   PMHCPOST,PMHCSTAT,PMHCSEML,PMHCSTEL,PMHCPAGR:
                                   PMHCPAGN,PMHCAHP1,PMHCAHP2,PMHCAHP3,PMHCAHP4:
                                   PMHCAHP5,PMHCPRV1,PMHCPRV2,PMHCPRV3,PMHCPRV4:
                                   PMHCPRV5,PMHCHTEL,PMHCHAD1,PMHCHAD2,PMHCHAD3:
                                   PMHCHAD4,PMHCHAD5,PMHCHAD6,PMHCHPCD,PMHCHEML:
                                   PMHCDFAC,PMHCDLAC,PMHCYACC,PMHCATYP,PMHCHHCP:
                                   PMHCOSLV,PMHCHCST,PMHCHCSD,PMHCFAXN,PMHCHFXN:
                                   PMHCMOBN,PMHCCRDC,PMHCWAHC,PMHCMRBN,PMHCNHSN:
                                   PMHCUDF1,PMHCUDF2,PMHCUDF3,PMHCUDF4,PMHCUDF5:
                                   PMHCUYN1,PMHCUYN2,PMHCUYN3,PMHCUYN4,PMHCUYN5:
                                   PMHCINSC,PMHCIPLN,PMHCIDTF,PMHCIDTT,PMHCMPGN:
                                   PMHCAPCI,PMHCREGT,PMHCRGDF,PMHCRGDT,PMHCPRDF:
                                   PMHCPRDT,PMHCTSDF,PMHCTFDT,PMHCVISD,PMHCPRFC:
                                   PMHCPRFN,PMHCABNN,PMHCUPDF,PMHCPRMK,PMHCSTTS:
                                   PMHCDLMI,PMHCDLMA,PMHCCDTE,PMHCCTIM,PMHCWEBC:
                                   PMHCLUPD,PMHCLUPT,PMHCWEBU,PMHCSLGP,PMHCHOSS:
                                   PMHCPTYP,PMHCEXML,PMHCDEAC,PMHCCPER,PMHCAHC1:
                                   PMHCAHC2,PMHCAHC3,PMHCLDOC,PMHCSDAT,PMHCEDAT:
                                   PMHCNHTA,PMHCWWCN,PMHCWWCE,PMHCWWCS,PMHCSMD1:
                                   PMHCSMD2,PMHCSPAR                            
          RETURN
.
DEPMHCP3  RESET     KEY20                                                       
          DELETE    PMSHCPA3,KEY20                                              
          RETURN
.
RLPMHCP3  RESET     KEY20                                                       
          MOVE      ZERO,OVRCD
          READL     PMSHCPA3,KEY20;PMHCHCPC,PMHCHCPT,PMHCTITL,PMHCGNAM,PMHCSNAM:
                                   PMHCINIT,PMHCGNDR,PMHCDTOB,PMHCSPC1,PMHCSPD1:
                                   PMHCSPC2,PMHCSPD2,PMHCSPC3,PMHCSPD3,PMHCSPC4:
                                   PMHCSPD4,PMHCSPC5,PMHCSPD5,PMHCRCPT,PMHCADR1:
                                   PMHCADR2,PMHCADR3,PMHCADR4,PMHCADR5,PMHCADR6:
                                   PMHCPOST,PMHCSTAT,PMHCSEML,PMHCSTEL,PMHCPAGR:
                                   PMHCPAGN,PMHCAHP1,PMHCAHP2,PMHCAHP3,PMHCAHP4:
                                   PMHCAHP5,PMHCPRV1,PMHCPRV2,PMHCPRV3,PMHCPRV4:
                                   PMHCPRV5,PMHCHTEL,PMHCHAD1,PMHCHAD2,PMHCHAD3:
                                   PMHCHAD4,PMHCHAD5,PMHCHAD6,PMHCHPCD,PMHCHEML:
                                   PMHCDFAC,PMHCDLAC,PMHCYACC,PMHCATYP,PMHCHHCP:
                                   PMHCOSLV,PMHCHCST,PMHCHCSD,PMHCFAXN,PMHCHFXN:
                                   PMHCMOBN,PMHCCRDC,PMHCWAHC,PMHCMRBN,PMHCNHSN:
                                   PMHCUDF1,PMHCUDF2,PMHCUDF3,PMHCUDF4,PMHCUDF5:
                                   PMHCUYN1,PMHCUYN2,PMHCUYN3,PMHCUYN4,PMHCUYN5:
                                   PMHCINSC,PMHCIPLN,PMHCIDTF,PMHCIDTT,PMHCMPGN:
                                   PMHCAPCI,PMHCREGT,PMHCRGDF,PMHCRGDT,PMHCPRDF:
                                   PMHCPRDT,PMHCTSDF,PMHCTFDT,PMHCVISD,PMHCPRFC:
                                   PMHCPRFN,PMHCABNN,PMHCUPDF,PMHCPRMK,PMHCSTTS:
                                   PMHCDLMI,PMHCDLMA,PMHCCDTE,PMHCCTIM,PMHCWEBC:
                                   PMHCLUPD,PMHCLUPT,PMHCWEBU,PMHCSLGP,PMHCHOSS:
                                   PMHCPTYP,PMHCEXML,PMHCDEAC,PMHCCPER,PMHCAHC1:
                                   PMHCAHC2,PMHCAHC3,PMHCLDOC,PMHCSDAT,PMHCEDAT:
                                   PMHCNHTA,PMHCWWCN,PMHCWWCE,PMHCWWCS,PMHCSMD1:
                                   PMHCSMD2,PMHCSPAR                            
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLPMHCP3  MOVE      ZERO,OVRCD                                                  
          READLKS   PMSHCPA3;PMHCHCPC,PMHCHCPT,PMHCTITL,PMHCGNAM,PMHCSNAM:      
                             PMHCINIT,PMHCGNDR,PMHCDTOB,PMHCSPC1,PMHCSPD1:      
                             PMHCSPC2,PMHCSPD2,PMHCSPC3,PMHCSPD3,PMHCSPC4:      
                             PMHCSPD4,PMHCSPC5,PMHCSPD5,PMHCRCPT,PMHCADR1:      
                             PMHCADR2,PMHCADR3,PMHCADR4,PMHCADR5,PMHCADR6:      
                             PMHCPOST,PMHCSTAT,PMHCSEML,PMHCSTEL,PMHCPAGR:      
                             PMHCPAGN,PMHCAHP1,PMHCAHP2,PMHCAHP3,PMHCAHP4:      
                             PMHCAHP5,PMHCPRV1,PMHCPRV2,PMHCPRV3,PMHCPRV4:      
                             PMHCPRV5,PMHCHTEL,PMHCHAD1,PMHCHAD2,PMHCHAD3:      
                             PMHCHAD4,PMHCHAD5,PMHCHAD6,PMHCHPCD,PMHCHEML:      
                             PMHCDFAC,PMHCDLAC,PMHCYACC,PMHCATYP,PMHCHHCP:      
                             PMHCOSLV,PMHCHCST,PMHCHCSD,PMHCFAXN,PMHCHFXN:      
                             PMHCMOBN,PMHCCRDC,PMHCWAHC,PMHCMRBN,PMHCNHSN:      
                             PMHCUDF1,PMHCUDF2,PMHCUDF3,PMHCUDF4,PMHCUDF5:      
                             PMHCUYN1,PMHCUYN2,PMHCUYN3,PMHCUYN4,PMHCUYN5:      
                             PMHCINSC,PMHCIPLN,PMHCIDTF,PMHCIDTT,PMHCMPGN:      
                             PMHCAPCI,PMHCREGT,PMHCRGDF,PMHCRGDT,PMHCPRDF:      
                             PMHCPRDT,PMHCTSDF,PMHCTFDT,PMHCVISD,PMHCPRFC:      
                             PMHCPRFN,PMHCABNN,PMHCUPDF,PMHCPRMK,PMHCSTTS:      
                             PMHCDLMI,PMHCDLMA,PMHCCDTE,PMHCCTIM,PMHCWEBC:      
                             PMHCLUPD,PMHCLUPT,PMHCWEBU,PMHCSLGP,PMHCHOSS:      
                             PMHCPTYP,PMHCEXML,PMHCDEAC,PMHCCPER,PMHCAHC1:      
                             PMHCAHC2,PMHCAHC3,PMHCLDOC,PMHCSDAT,PMHCEDAT:      
                             PMHCNHTA,PMHCWWCN,PMHCWWCE,PMHCWWCS,PMHCSMD1:      
                             PMHCSMD2,PMHCSPAR                                  
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLPMHCP3  MOVE      ZERO,OVRCD                                                  
          READLKP   PMSHCPA3;PMHCHCPC,PMHCHCPT,PMHCTITL,PMHCGNAM,PMHCSNAM:      
                             PMHCINIT,PMHCGNDR,PMHCDTOB,PMHCSPC1,PMHCSPD1:      
                             PMHCSPC2,PMHCSPD2,PMHCSPC3,PMHCSPD3,PMHCSPC4:      
                             PMHCSPD4,PMHCSPC5,PMHCSPD5,PMHCRCPT,PMHCADR1:      
                             PMHCADR2,PMHCADR3,PMHCADR4,PMHCADR5,PMHCADR6:      
                             PMHCPOST,PMHCSTAT,PMHCSEML,PMHCSTEL,PMHCPAGR:      
                             PMHCPAGN,PMHCAHP1,PMHCAHP2,PMHCAHP3,PMHCAHP4:      
                             PMHCAHP5,PMHCPRV1,PMHCPRV2,PMHCPRV3,PMHCPRV4:      
                             PMHCPRV5,PMHCHTEL,PMHCHAD1,PMHCHAD2,PMHCHAD3:      
                             PMHCHAD4,PMHCHAD5,PMHCHAD6,PMHCHPCD,PMHCHEML:      
                             PMHCDFAC,PMHCDLAC,PMHCYACC,PMHCATYP,PMHCHHCP:      
                             PMHCOSLV,PMHCHCST,PMHCHCSD,PMHCFAXN,PMHCHFXN:      
                             PMHCMOBN,PMHCCRDC,PMHCWAHC,PMHCMRBN,PMHCNHSN:      
                             PMHCUDF1,PMHCUDF2,PMHCUDF3,PMHCUDF4,PMHCUDF5:      
                             PMHCUYN1,PMHCUYN2,PMHCUYN3,PMHCUYN4,PMHCUYN5:      
                             PMHCINSC,PMHCIPLN,PMHCIDTF,PMHCIDTT,PMHCMPGN:      
                             PMHCAPCI,PMHCREGT,PMHCRGDF,PMHCRGDT,PMHCPRDF:      
                             PMHCPRDT,PMHCTSDF,PMHCTFDT,PMHCVISD,PMHCPRFC:      
                             PMHCPRFN,PMHCABNN,PMHCUPDF,PMHCPRMK,PMHCSTTS:      
                             PMHCDLMI,PMHCDLMA,PMHCCDTE,PMHCCTIM,PMHCWEBC:      
                             PMHCLUPD,PMHCLUPT,PMHCWEBU,PMHCSLGP,PMHCHOSS:      
                             PMHCPTYP,PMHCEXML,PMHCDEAC,PMHCCPER,PMHCAHC1:      
                             PMHCAHC2,PMHCAHC3,PMHCLDOC,PMHCSDAT,PMHCEDAT:      
                             PMHCNHTA,PMHCWWCN,PMHCWWCE,PMHCWWCS,PMHCSMD1:      
                             PMHCSMD2,PMHCSPAR                                  
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUPMHCP3  RESET     KEY20                                                       
          UNLOCK    PMSHCPA3                                                    
          RETURN
.
RSPMHCP4  RESET     KEY16                                                       
          READ      PMSHCPA4,KEY16;;                                            
          RETURN
.
RAPMHCP4  RESET     KEY16                                                       
          MOVE      ZERO,OVRCD
          READ      PMSHCPA4,KEY16;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPMHCP4  RESET     KEY16                                                       
          MOVE      ZERO,OVRCD
          READ      PMSHCPA4,KEY16;PMHCHCPC,PMHCHCPT,PMHCTITL,PMHCGNAM,PMHCSNAM:
                                   PMHCINIT,PMHCGNDR,PMHCDTOB,PMHCSPC1,PMHCSPD1:
                                   PMHCSPC2,PMHCSPD2,PMHCSPC3,PMHCSPD3,PMHCSPC4:
                                   PMHCSPD4,PMHCSPC5,PMHCSPD5,PMHCRCPT,PMHCADR1:
                                   PMHCADR2,PMHCADR3,PMHCADR4,PMHCADR5,PMHCADR6:
                                   PMHCPOST,PMHCSTAT,PMHCSEML,PMHCSTEL,PMHCPAGR:
                                   PMHCPAGN,PMHCAHP1,PMHCAHP2,PMHCAHP3,PMHCAHP4:
                                   PMHCAHP5,PMHCPRV1,PMHCPRV2,PMHCPRV3,PMHCPRV4:
                                   PMHCPRV5,PMHCHTEL,PMHCHAD1,PMHCHAD2,PMHCHAD3:
                                   PMHCHAD4,PMHCHAD5,PMHCHAD6,PMHCHPCD,PMHCHEML:
                                   PMHCDFAC,PMHCDLAC,PMHCYACC,PMHCATYP,PMHCHHCP:
                                   PMHCOSLV,PMHCHCST,PMHCHCSD,PMHCFAXN,PMHCHFXN:
                                   PMHCMOBN,PMHCCRDC,PMHCWAHC,PMHCMRBN,PMHCNHSN:
                                   PMHCUDF1,PMHCUDF2,PMHCUDF3,PMHCUDF4,PMHCUDF5:
                                   PMHCUYN1,PMHCUYN2,PMHCUYN3,PMHCUYN4,PMHCUYN5:
                                   PMHCINSC,PMHCIPLN,PMHCIDTF,PMHCIDTT,PMHCMPGN:
                                   PMHCAPCI,PMHCREGT,PMHCRGDF,PMHCRGDT,PMHCPRDF:
                                   PMHCPRDT,PMHCTSDF,PMHCTFDT,PMHCVISD,PMHCPRFC:
                                   PMHCPRFN,PMHCABNN,PMHCUPDF,PMHCPRMK,PMHCSTTS:
                                   PMHCDLMI,PMHCDLMA,PMHCCDTE,PMHCCTIM,PMHCWEBC:
                                   PMHCLUPD,PMHCLUPT,PMHCWEBU,PMHCSLGP,PMHCHOSS:
                                   PMHCPTYP,PMHCEXML,PMHCDEAC,PMHCCPER,PMHCAHC1:
                                   PMHCAHC2,PMHCAHC3,PMHCLDOC,PMHCSDAT,PMHCEDAT:
                                   PMHCNHTA,PMHCWWCN,PMHCWWCE,PMHCWWCS,PMHCSMD1:
                                   PMHCSMD2,PMHCSPAR                            
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPMHCP4  MOVE      ZERO,OVRCD                                                  
          READKS    PMSHCPA4;PMHCHCPC,PMHCHCPT,PMHCTITL,PMHCGNAM,PMHCSNAM:      
                             PMHCINIT,PMHCGNDR,PMHCDTOB,PMHCSPC1,PMHCSPD1:      
                             PMHCSPC2,PMHCSPD2,PMHCSPC3,PMHCSPD3,PMHCSPC4:      
                             PMHCSPD4,PMHCSPC5,PMHCSPD5,PMHCRCPT,PMHCADR1:      
                             PMHCADR2,PMHCADR3,PMHCADR4,PMHCADR5,PMHCADR6:      
                             PMHCPOST,PMHCSTAT,PMHCSEML,PMHCSTEL,PMHCPAGR:      
                             PMHCPAGN,PMHCAHP1,PMHCAHP2,PMHCAHP3,PMHCAHP4:      
                             PMHCAHP5,PMHCPRV1,PMHCPRV2,PMHCPRV3,PMHCPRV4:      
                             PMHCPRV5,PMHCHTEL,PMHCHAD1,PMHCHAD2,PMHCHAD3:      
                             PMHCHAD4,PMHCHAD5,PMHCHAD6,PMHCHPCD,PMHCHEML:      
                             PMHCDFAC,PMHCDLAC,PMHCYACC,PMHCATYP,PMHCHHCP:      
                             PMHCOSLV,PMHCHCST,PMHCHCSD,PMHCFAXN,PMHCHFXN:      
                             PMHCMOBN,PMHCCRDC,PMHCWAHC,PMHCMRBN,PMHCNHSN:      
                             PMHCUDF1,PMHCUDF2,PMHCUDF3,PMHCUDF4,PMHCUDF5:      
                             PMHCUYN1,PMHCUYN2,PMHCUYN3,PMHCUYN4,PMHCUYN5:      
                             PMHCINSC,PMHCIPLN,PMHCIDTF,PMHCIDTT,PMHCMPGN:      
                             PMHCAPCI,PMHCREGT,PMHCRGDF,PMHCRGDT,PMHCPRDF:      
                             PMHCPRDT,PMHCTSDF,PMHCTFDT,PMHCVISD,PMHCPRFC:      
                             PMHCPRFN,PMHCABNN,PMHCUPDF,PMHCPRMK,PMHCSTTS:      
                             PMHCDLMI,PMHCDLMA,PMHCCDTE,PMHCCTIM,PMHCWEBC:      
                             PMHCLUPD,PMHCLUPT,PMHCWEBU,PMHCSLGP,PMHCHOSS:      
                             PMHCPTYP,PMHCEXML,PMHCDEAC,PMHCCPER,PMHCAHC1:      
                             PMHCAHC2,PMHCAHC3,PMHCLDOC,PMHCSDAT,PMHCEDAT:      
                             PMHCNHTA,PMHCWWCN,PMHCWWCE,PMHCWWCS,PMHCSMD1:      
                             PMHCSMD2,PMHCSPAR                                  
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPMHCP4  MOVE      ZERO,OVRCD                                                  
          READKP    PMSHCPA4;PMHCHCPC,PMHCHCPT,PMHCTITL,PMHCGNAM,PMHCSNAM:      
                             PMHCINIT,PMHCGNDR,PMHCDTOB,PMHCSPC1,PMHCSPD1:      
                             PMHCSPC2,PMHCSPD2,PMHCSPC3,PMHCSPD3,PMHCSPC4:      
                             PMHCSPD4,PMHCSPC5,PMHCSPD5,PMHCRCPT,PMHCADR1:      
                             PMHCADR2,PMHCADR3,PMHCADR4,PMHCADR5,PMHCADR6:      
                             PMHCPOST,PMHCSTAT,PMHCSEML,PMHCSTEL,PMHCPAGR:      
                             PMHCPAGN,PMHCAHP1,PMHCAHP2,PMHCAHP3,PMHCAHP4:      
                             PMHCAHP5,PMHCPRV1,PMHCPRV2,PMHCPRV3,PMHCPRV4:      
                             PMHCPRV5,PMHCHTEL,PMHCHAD1,PMHCHAD2,PMHCHAD3:      
                             PMHCHAD4,PMHCHAD5,PMHCHAD6,PMHCHPCD,PMHCHEML:      
                             PMHCDFAC,PMHCDLAC,PMHCYACC,PMHCATYP,PMHCHHCP:      
                             PMHCOSLV,PMHCHCST,PMHCHCSD,PMHCFAXN,PMHCHFXN:      
                             PMHCMOBN,PMHCCRDC,PMHCWAHC,PMHCMRBN,PMHCNHSN:      
                             PMHCUDF1,PMHCUDF2,PMHCUDF3,PMHCUDF4,PMHCUDF5:      
                             PMHCUYN1,PMHCUYN2,PMHCUYN3,PMHCUYN4,PMHCUYN5:      
                             PMHCINSC,PMHCIPLN,PMHCIDTF,PMHCIDTT,PMHCMPGN:      
                             PMHCAPCI,PMHCREGT,PMHCRGDF,PMHCRGDT,PMHCPRDF:      
                             PMHCPRDT,PMHCTSDF,PMHCTFDT,PMHCVISD,PMHCPRFC:      
                             PMHCPRFN,PMHCABNN,PMHCUPDF,PMHCPRMK,PMHCSTTS:      
                             PMHCDLMI,PMHCDLMA,PMHCCDTE,PMHCCTIM,PMHCWEBC:      
                             PMHCLUPD,PMHCLUPT,PMHCWEBU,PMHCSLGP,PMHCHOSS:      
                             PMHCPTYP,PMHCEXML,PMHCDEAC,PMHCCPER,PMHCAHC1:      
                             PMHCAHC2,PMHCAHC3,PMHCLDOC,PMHCSDAT,PMHCEDAT:      
                             PMHCNHTA,PMHCWWCN,PMHCWWCE,PMHCWWCS,PMHCSMD1:      
                             PMHCSMD2,PMHCSPAR                                  
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPMHCP4  MOVE      ZERO,OVRCD                                                  
          UPDATE    PMSHCPA4;PMHCHCPC,PMHCHCPT,PMHCTITL,PMHCGNAM,PMHCSNAM:      
                             PMHCINIT,PMHCGNDR,PMHCDTOB,PMHCSPC1,PMHCSPD1:      
                             PMHCSPC2,PMHCSPD2,PMHCSPC3,PMHCSPD3,PMHCSPC4:      
                             PMHCSPD4,PMHCSPC5,PMHCSPD5,PMHCRCPT,PMHCADR1:      
                             PMHCADR2,PMHCADR3,PMHCADR4,PMHCADR5,PMHCADR6:      
                             PMHCPOST,PMHCSTAT,PMHCSEML,PMHCSTEL,PMHCPAGR:      
                             PMHCPAGN,PMHCAHP1,PMHCAHP2,PMHCAHP3,PMHCAHP4:      
                             PMHCAHP5,PMHCPRV1,PMHCPRV2,PMHCPRV3,PMHCPRV4:      
                             PMHCPRV5,PMHCHTEL,PMHCHAD1,PMHCHAD2,PMHCHAD3:      
                             PMHCHAD4,PMHCHAD5,PMHCHAD6,PMHCHPCD,PMHCHEML:      
                             PMHCDFAC,PMHCDLAC,PMHCYACC,PMHCATYP,PMHCHHCP:      
                             PMHCOSLV,PMHCHCST,PMHCHCSD,PMHCFAXN,PMHCHFXN:      
                             PMHCMOBN,PMHCCRDC,PMHCWAHC,PMHCMRBN,PMHCNHSN:      
                             PMHCUDF1,PMHCUDF2,PMHCUDF3,PMHCUDF4,PMHCUDF5:      
                             PMHCUYN1,PMHCUYN2,PMHCUYN3,PMHCUYN4,PMHCUYN5:      
                             PMHCINSC,PMHCIPLN,PMHCIDTF,PMHCIDTT,PMHCMPGN:      
                             PMHCAPCI,PMHCREGT,PMHCRGDF,PMHCRGDT,PMHCPRDF:      
                             PMHCPRDT,PMHCTSDF,PMHCTFDT,PMHCVISD,PMHCPRFC:      
                             PMHCPRFN,PMHCABNN,PMHCUPDF,PMHCPRMK,PMHCSTTS:      
                             PMHCDLMI,PMHCDLMA,PMHCCDTE,PMHCCTIM,PMHCWEBC:      
                             PMHCLUPD,PMHCLUPT,PMHCWEBU,PMHCSLGP,PMHCHOSS:      
                             PMHCPTYP,PMHCEXML,PMHCDEAC,PMHCCPER,PMHCAHC1:      
                             PMHCAHC2,PMHCAHC3,PMHCLDOC,PMHCSDAT,PMHCEDAT:      
                             PMHCNHTA,PMHCWWCN,PMHCWWCE,PMHCWWCS,PMHCSMD1:      
                             PMHCSMD2,PMHCSPAR                                  
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRPMHCP4  RESET     KEY16                                                       
          WRITE     PMSHCPA4,KEY16;PMHCHCPC,PMHCHCPT,PMHCTITL,PMHCGNAM,PMHCSNAM:
                                   PMHCINIT,PMHCGNDR,PMHCDTOB,PMHCSPC1,PMHCSPD1:
                                   PMHCSPC2,PMHCSPD2,PMHCSPC3,PMHCSPD3,PMHCSPC4:
                                   PMHCSPD4,PMHCSPC5,PMHCSPD5,PMHCRCPT,PMHCADR1:
                                   PMHCADR2,PMHCADR3,PMHCADR4,PMHCADR5,PMHCADR6:
                                   PMHCPOST,PMHCSTAT,PMHCSEML,PMHCSTEL,PMHCPAGR:
                                   PMHCPAGN,PMHCAHP1,PMHCAHP2,PMHCAHP3,PMHCAHP4:
                                   PMHCAHP5,PMHCPRV1,PMHCPRV2,PMHCPRV3,PMHCPRV4:
                                   PMHCPRV5,PMHCHTEL,PMHCHAD1,PMHCHAD2,PMHCHAD3:
                                   PMHCHAD4,PMHCHAD5,PMHCHAD6,PMHCHPCD,PMHCHEML:
                                   PMHCDFAC,PMHCDLAC,PMHCYACC,PMHCATYP,PMHCHHCP:
                                   PMHCOSLV,PMHCHCST,PMHCHCSD,PMHCFAXN,PMHCHFXN:
                                   PMHCMOBN,PMHCCRDC,PMHCWAHC,PMHCMRBN,PMHCNHSN:
                                   PMHCUDF1,PMHCUDF2,PMHCUDF3,PMHCUDF4,PMHCUDF5:
                                   PMHCUYN1,PMHCUYN2,PMHCUYN3,PMHCUYN4,PMHCUYN5:
                                   PMHCINSC,PMHCIPLN,PMHCIDTF,PMHCIDTT,PMHCMPGN:
                                   PMHCAPCI,PMHCREGT,PMHCRGDF,PMHCRGDT,PMHCPRDF:
                                   PMHCPRDT,PMHCTSDF,PMHCTFDT,PMHCVISD,PMHCPRFC:
                                   PMHCPRFN,PMHCABNN,PMHCUPDF,PMHCPRMK,PMHCSTTS:
                                   PMHCDLMI,PMHCDLMA,PMHCCDTE,PMHCCTIM,PMHCWEBC:
                                   PMHCLUPD,PMHCLUPT,PMHCWEBU,PMHCSLGP,PMHCHOSS:
                                   PMHCPTYP,PMHCEXML,PMHCDEAC,PMHCCPER,PMHCAHC1:
                                   PMHCAHC2,PMHCAHC3,PMHCLDOC,PMHCSDAT,PMHCEDAT:
                                   PMHCNHTA,PMHCWWCN,PMHCWWCE,PMHCWWCS,PMHCSMD1:
                                   PMHCSMD2,PMHCSPAR                            
          RETURN
.
DEPMHCP4  RESET     KEY16                                                       
          DELETE    PMSHCPA4,KEY16                                              
          RETURN
.
RLPMHCP4  RESET     KEY16                                                       
          MOVE      ZERO,OVRCD
          READL     PMSHCPA4,KEY16;PMHCHCPC,PMHCHCPT,PMHCTITL,PMHCGNAM,PMHCSNAM:
                                   PMHCINIT,PMHCGNDR,PMHCDTOB,PMHCSPC1,PMHCSPD1:
                                   PMHCSPC2,PMHCSPD2,PMHCSPC3,PMHCSPD3,PMHCSPC4:
                                   PMHCSPD4,PMHCSPC5,PMHCSPD5,PMHCRCPT,PMHCADR1:
                                   PMHCADR2,PMHCADR3,PMHCADR4,PMHCADR5,PMHCADR6:
                                   PMHCPOST,PMHCSTAT,PMHCSEML,PMHCSTEL,PMHCPAGR:
                                   PMHCPAGN,PMHCAHP1,PMHCAHP2,PMHCAHP3,PMHCAHP4:
                                   PMHCAHP5,PMHCPRV1,PMHCPRV2,PMHCPRV3,PMHCPRV4:
                                   PMHCPRV5,PMHCHTEL,PMHCHAD1,PMHCHAD2,PMHCHAD3:
                                   PMHCHAD4,PMHCHAD5,PMHCHAD6,PMHCHPCD,PMHCHEML:
                                   PMHCDFAC,PMHCDLAC,PMHCYACC,PMHCATYP,PMHCHHCP:
                                   PMHCOSLV,PMHCHCST,PMHCHCSD,PMHCFAXN,PMHCHFXN:
                                   PMHCMOBN,PMHCCRDC,PMHCWAHC,PMHCMRBN,PMHCNHSN:
                                   PMHCUDF1,PMHCUDF2,PMHCUDF3,PMHCUDF4,PMHCUDF5:
                                   PMHCUYN1,PMHCUYN2,PMHCUYN3,PMHCUYN4,PMHCUYN5:
                                   PMHCINSC,PMHCIPLN,PMHCIDTF,PMHCIDTT,PMHCMPGN:
                                   PMHCAPCI,PMHCREGT,PMHCRGDF,PMHCRGDT,PMHCPRDF:
                                   PMHCPRDT,PMHCTSDF,PMHCTFDT,PMHCVISD,PMHCPRFC:
                                   PMHCPRFN,PMHCABNN,PMHCUPDF,PMHCPRMK,PMHCSTTS:
                                   PMHCDLMI,PMHCDLMA,PMHCCDTE,PMHCCTIM,PMHCWEBC:
                                   PMHCLUPD,PMHCLUPT,PMHCWEBU,PMHCSLGP,PMHCHOSS:
                                   PMHCPTYP,PMHCEXML,PMHCDEAC,PMHCCPER,PMHCAHC1:
                                   PMHCAHC2,PMHCAHC3,PMHCLDOC,PMHCSDAT,PMHCEDAT:
                                   PMHCNHTA,PMHCWWCN,PMHCWWCE,PMHCWWCS,PMHCSMD1:
                                   PMHCSMD2,PMHCSPAR                            
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLPMHCP4  MOVE      ZERO,OVRCD                                                  
          READLKS   PMSHCPA4;PMHCHCPC,PMHCHCPT,PMHCTITL,PMHCGNAM,PMHCSNAM:      
                             PMHCINIT,PMHCGNDR,PMHCDTOB,PMHCSPC1,PMHCSPD1:      
                             PMHCSPC2,PMHCSPD2,PMHCSPC3,PMHCSPD3,PMHCSPC4:      
                             PMHCSPD4,PMHCSPC5,PMHCSPD5,PMHCRCPT,PMHCADR1:      
                             PMHCADR2,PMHCADR3,PMHCADR4,PMHCADR5,PMHCADR6:      
                             PMHCPOST,PMHCSTAT,PMHCSEML,PMHCSTEL,PMHCPAGR:      
                             PMHCPAGN,PMHCAHP1,PMHCAHP2,PMHCAHP3,PMHCAHP4:      
                             PMHCAHP5,PMHCPRV1,PMHCPRV2,PMHCPRV3,PMHCPRV4:      
                             PMHCPRV5,PMHCHTEL,PMHCHAD1,PMHCHAD2,PMHCHAD3:      
                             PMHCHAD4,PMHCHAD5,PMHCHAD6,PMHCHPCD,PMHCHEML:      
                             PMHCDFAC,PMHCDLAC,PMHCYACC,PMHCATYP,PMHCHHCP:      
                             PMHCOSLV,PMHCHCST,PMHCHCSD,PMHCFAXN,PMHCHFXN:      
                             PMHCMOBN,PMHCCRDC,PMHCWAHC,PMHCMRBN,PMHCNHSN:      
                             PMHCUDF1,PMHCUDF2,PMHCUDF3,PMHCUDF4,PMHCUDF5:      
                             PMHCUYN1,PMHCUYN2,PMHCUYN3,PMHCUYN4,PMHCUYN5:      
                             PMHCINSC,PMHCIPLN,PMHCIDTF,PMHCIDTT,PMHCMPGN:      
                             PMHCAPCI,PMHCREGT,PMHCRGDF,PMHCRGDT,PMHCPRDF:      
                             PMHCPRDT,PMHCTSDF,PMHCTFDT,PMHCVISD,PMHCPRFC:      
                             PMHCPRFN,PMHCABNN,PMHCUPDF,PMHCPRMK,PMHCSTTS:      
                             PMHCDLMI,PMHCDLMA,PMHCCDTE,PMHCCTIM,PMHCWEBC:      
                             PMHCLUPD,PMHCLUPT,PMHCWEBU,PMHCSLGP,PMHCHOSS:      
                             PMHCPTYP,PMHCEXML,PMHCDEAC,PMHCCPER,PMHCAHC1:      
                             PMHCAHC2,PMHCAHC3,PMHCLDOC,PMHCSDAT,PMHCEDAT:      
                             PMHCNHTA,PMHCWWCN,PMHCWWCE,PMHCWWCS,PMHCSMD1:      
                             PMHCSMD2,PMHCSPAR                                  
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLPMHCP4  MOVE      ZERO,OVRCD                                                  
          READLKP   PMSHCPA4;PMHCHCPC,PMHCHCPT,PMHCTITL,PMHCGNAM,PMHCSNAM:      
                             PMHCINIT,PMHCGNDR,PMHCDTOB,PMHCSPC1,PMHCSPD1:      
                             PMHCSPC2,PMHCSPD2,PMHCSPC3,PMHCSPD3,PMHCSPC4:      
                             PMHCSPD4,PMHCSPC5,PMHCSPD5,PMHCRCPT,PMHCADR1:      
                             PMHCADR2,PMHCADR3,PMHCADR4,PMHCADR5,PMHCADR6:      
                             PMHCPOST,PMHCSTAT,PMHCSEML,PMHCSTEL,PMHCPAGR:      
                             PMHCPAGN,PMHCAHP1,PMHCAHP2,PMHCAHP3,PMHCAHP4:      
                             PMHCAHP5,PMHCPRV1,PMHCPRV2,PMHCPRV3,PMHCPRV4:      
                             PMHCPRV5,PMHCHTEL,PMHCHAD1,PMHCHAD2,PMHCHAD3:      
                             PMHCHAD4,PMHCHAD5,PMHCHAD6,PMHCHPCD,PMHCHEML:      
                             PMHCDFAC,PMHCDLAC,PMHCYACC,PMHCATYP,PMHCHHCP:      
                             PMHCOSLV,PMHCHCST,PMHCHCSD,PMHCFAXN,PMHCHFXN:      
                             PMHCMOBN,PMHCCRDC,PMHCWAHC,PMHCMRBN,PMHCNHSN:      
                             PMHCUDF1,PMHCUDF2,PMHCUDF3,PMHCUDF4,PMHCUDF5:      
                             PMHCUYN1,PMHCUYN2,PMHCUYN3,PMHCUYN4,PMHCUYN5:      
                             PMHCINSC,PMHCIPLN,PMHCIDTF,PMHCIDTT,PMHCMPGN:      
                             PMHCAPCI,PMHCREGT,PMHCRGDF,PMHCRGDT,PMHCPRDF:      
                             PMHCPRDT,PMHCTSDF,PMHCTFDT,PMHCVISD,PMHCPRFC:      
                             PMHCPRFN,PMHCABNN,PMHCUPDF,PMHCPRMK,PMHCSTTS:      
                             PMHCDLMI,PMHCDLMA,PMHCCDTE,PMHCCTIM,PMHCWEBC:      
                             PMHCLUPD,PMHCLUPT,PMHCWEBU,PMHCSLGP,PMHCHOSS:      
                             PMHCPTYP,PMHCEXML,PMHCDEAC,PMHCCPER,PMHCAHC1:      
                             PMHCAHC2,PMHCAHC3,PMHCLDOC,PMHCSDAT,PMHCEDAT:      
                             PMHCNHTA,PMHCWWCN,PMHCWWCE,PMHCWWCS,PMHCSMD1:      
                             PMHCSMD2,PMHCSPAR                                  
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUPMHCP4  RESET     KEY16                                                       
          UNLOCK    PMSHCPA4                                                    
          RETURN
.
RSPMHCP5  RESET     KEY26                                                       
          READ      PMSHCPA5,KEY26;;                                            
          RETURN
.
RAPMHCP5  RESET     KEY26                                                       
          MOVE      ZERO,OVRCD
          READ      PMSHCPA5,KEY26;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPMHCP5  RESET     KEY26                                                       
          MOVE      ZERO,OVRCD
          READ      PMSHCPA5,KEY26;PMHCHCPC,PMHCHCPT,PMHCTITL,PMHCGNAM,PMHCSNAM:
                                   PMHCINIT,PMHCGNDR,PMHCDTOB,PMHCSPC1,PMHCSPD1:
                                   PMHCSPC2,PMHCSPD2,PMHCSPC3,PMHCSPD3,PMHCSPC4:
                                   PMHCSPD4,PMHCSPC5,PMHCSPD5,PMHCRCPT,PMHCADR1:
                                   PMHCADR2,PMHCADR3,PMHCADR4,PMHCADR5,PMHCADR6:
                                   PMHCPOST,PMHCSTAT,PMHCSEML,PMHCSTEL,PMHCPAGR:
                                   PMHCPAGN,PMHCAHP1,PMHCAHP2,PMHCAHP3,PMHCAHP4:
                                   PMHCAHP5,PMHCPRV1,PMHCPRV2,PMHCPRV3,PMHCPRV4:
                                   PMHCPRV5,PMHCHTEL,PMHCHAD1,PMHCHAD2,PMHCHAD3:
                                   PMHCHAD4,PMHCHAD5,PMHCHAD6,PMHCHPCD,PMHCHEML:
                                   PMHCDFAC,PMHCDLAC,PMHCYACC,PMHCATYP,PMHCHHCP:
                                   PMHCOSLV,PMHCHCST,PMHCHCSD,PMHCFAXN,PMHCHFXN:
                                   PMHCMOBN,PMHCCRDC,PMHCWAHC,PMHCMRBN,PMHCNHSN:
                                   PMHCUDF1,PMHCUDF2,PMHCUDF3,PMHCUDF4,PMHCUDF5:
                                   PMHCUYN1,PMHCUYN2,PMHCUYN3,PMHCUYN4,PMHCUYN5:
                                   PMHCINSC,PMHCIPLN,PMHCIDTF,PMHCIDTT,PMHCMPGN:
                                   PMHCAPCI,PMHCREGT,PMHCRGDF,PMHCRGDT,PMHCPRDF:
                                   PMHCPRDT,PMHCTSDF,PMHCTFDT,PMHCVISD,PMHCPRFC:
                                   PMHCPRFN,PMHCABNN,PMHCUPDF,PMHCPRMK,PMHCSTTS:
                                   PMHCDLMI,PMHCDLMA,PMHCCDTE,PMHCCTIM,PMHCWEBC:
                                   PMHCLUPD,PMHCLUPT,PMHCWEBU,PMHCSLGP,PMHCHOSS:
                                   PMHCPTYP,PMHCEXML,PMHCDEAC,PMHCCPER,PMHCAHC1:
                                   PMHCAHC2,PMHCAHC3,PMHCLDOC,PMHCSDAT,PMHCEDAT:
                                   PMHCNHTA,PMHCWWCN,PMHCWWCE,PMHCWWCS,PMHCSMD1:
                                   PMHCSMD2,PMHCSPAR                            
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPMHCP5  MOVE      ZERO,OVRCD                                                  
          READKS    PMSHCPA5;PMHCHCPC,PMHCHCPT,PMHCTITL,PMHCGNAM,PMHCSNAM:      
                             PMHCINIT,PMHCGNDR,PMHCDTOB,PMHCSPC1,PMHCSPD1:      
                             PMHCSPC2,PMHCSPD2,PMHCSPC3,PMHCSPD3,PMHCSPC4:      
                             PMHCSPD4,PMHCSPC5,PMHCSPD5,PMHCRCPT,PMHCADR1:      
                             PMHCADR2,PMHCADR3,PMHCADR4,PMHCADR5,PMHCADR6:      
                             PMHCPOST,PMHCSTAT,PMHCSEML,PMHCSTEL,PMHCPAGR:      
                             PMHCPAGN,PMHCAHP1,PMHCAHP2,PMHCAHP3,PMHCAHP4:      
                             PMHCAHP5,PMHCPRV1,PMHCPRV2,PMHCPRV3,PMHCPRV4:      
                             PMHCPRV5,PMHCHTEL,PMHCHAD1,PMHCHAD2,PMHCHAD3:      
                             PMHCHAD4,PMHCHAD5,PMHCHAD6,PMHCHPCD,PMHCHEML:      
                             PMHCDFAC,PMHCDLAC,PMHCYACC,PMHCATYP,PMHCHHCP:      
                             PMHCOSLV,PMHCHCST,PMHCHCSD,PMHCFAXN,PMHCHFXN:      
                             PMHCMOBN,PMHCCRDC,PMHCWAHC,PMHCMRBN,PMHCNHSN:      
                             PMHCUDF1,PMHCUDF2,PMHCUDF3,PMHCUDF4,PMHCUDF5:      
                             PMHCUYN1,PMHCUYN2,PMHCUYN3,PMHCUYN4,PMHCUYN5:      
                             PMHCINSC,PMHCIPLN,PMHCIDTF,PMHCIDTT,PMHCMPGN:      
                             PMHCAPCI,PMHCREGT,PMHCRGDF,PMHCRGDT,PMHCPRDF:      
                             PMHCPRDT,PMHCTSDF,PMHCTFDT,PMHCVISD,PMHCPRFC:      
                             PMHCPRFN,PMHCABNN,PMHCUPDF,PMHCPRMK,PMHCSTTS:      
                             PMHCDLMI,PMHCDLMA,PMHCCDTE,PMHCCTIM,PMHCWEBC:      
                             PMHCLUPD,PMHCLUPT,PMHCWEBU,PMHCSLGP,PMHCHOSS:      
                             PMHCPTYP,PMHCEXML,PMHCDEAC,PMHCCPER,PMHCAHC1:      
                             PMHCAHC2,PMHCAHC3,PMHCLDOC,PMHCSDAT,PMHCEDAT:      
                             PMHCNHTA,PMHCWWCN,PMHCWWCE,PMHCWWCS,PMHCSMD1:      
                             PMHCSMD2,PMHCSPAR                                  
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPMHCP5  MOVE      ZERO,OVRCD                                                  
          READKP    PMSHCPA5;PMHCHCPC,PMHCHCPT,PMHCTITL,PMHCGNAM,PMHCSNAM:      
                             PMHCINIT,PMHCGNDR,PMHCDTOB,PMHCSPC1,PMHCSPD1:      
                             PMHCSPC2,PMHCSPD2,PMHCSPC3,PMHCSPD3,PMHCSPC4:      
                             PMHCSPD4,PMHCSPC5,PMHCSPD5,PMHCRCPT,PMHCADR1:      
                             PMHCADR2,PMHCADR3,PMHCADR4,PMHCADR5,PMHCADR6:      
                             PMHCPOST,PMHCSTAT,PMHCSEML,PMHCSTEL,PMHCPAGR:      
                             PMHCPAGN,PMHCAHP1,PMHCAHP2,PMHCAHP3,PMHCAHP4:      
                             PMHCAHP5,PMHCPRV1,PMHCPRV2,PMHCPRV3,PMHCPRV4:      
                             PMHCPRV5,PMHCHTEL,PMHCHAD1,PMHCHAD2,PMHCHAD3:      
                             PMHCHAD4,PMHCHAD5,PMHCHAD6,PMHCHPCD,PMHCHEML:      
                             PMHCDFAC,PMHCDLAC,PMHCYACC,PMHCATYP,PMHCHHCP:      
                             PMHCOSLV,PMHCHCST,PMHCHCSD,PMHCFAXN,PMHCHFXN:      
                             PMHCMOBN,PMHCCRDC,PMHCWAHC,PMHCMRBN,PMHCNHSN:      
                             PMHCUDF1,PMHCUDF2,PMHCUDF3,PMHCUDF4,PMHCUDF5:      
                             PMHCUYN1,PMHCUYN2,PMHCUYN3,PMHCUYN4,PMHCUYN5:      
                             PMHCINSC,PMHCIPLN,PMHCIDTF,PMHCIDTT,PMHCMPGN:      
                             PMHCAPCI,PMHCREGT,PMHCRGDF,PMHCRGDT,PMHCPRDF:      
                             PMHCPRDT,PMHCTSDF,PMHCTFDT,PMHCVISD,PMHCPRFC:      
                             PMHCPRFN,PMHCABNN,PMHCUPDF,PMHCPRMK,PMHCSTTS:      
                             PMHCDLMI,PMHCDLMA,PMHCCDTE,PMHCCTIM,PMHCWEBC:      
                             PMHCLUPD,PMHCLUPT,PMHCWEBU,PMHCSLGP,PMHCHOSS:      
                             PMHCPTYP,PMHCEXML,PMHCDEAC,PMHCCPER,PMHCAHC1:      
                             PMHCAHC2,PMHCAHC3,PMHCLDOC,PMHCSDAT,PMHCEDAT:      
                             PMHCNHTA,PMHCWWCN,PMHCWWCE,PMHCWWCS,PMHCSMD1:      
                             PMHCSMD2,PMHCSPAR                                  
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPMHCP5  MOVE      ZERO,OVRCD                                                  
          UPDATE    PMSHCPA5;PMHCHCPC,PMHCHCPT,PMHCTITL,PMHCGNAM,PMHCSNAM:      
                             PMHCINIT,PMHCGNDR,PMHCDTOB,PMHCSPC1,PMHCSPD1:      
                             PMHCSPC2,PMHCSPD2,PMHCSPC3,PMHCSPD3,PMHCSPC4:      
                             PMHCSPD4,PMHCSPC5,PMHCSPD5,PMHCRCPT,PMHCADR1:      
                             PMHCADR2,PMHCADR3,PMHCADR4,PMHCADR5,PMHCADR6:      
                             PMHCPOST,PMHCSTAT,PMHCSEML,PMHCSTEL,PMHCPAGR:      
                             PMHCPAGN,PMHCAHP1,PMHCAHP2,PMHCAHP3,PMHCAHP4:      
                             PMHCAHP5,PMHCPRV1,PMHCPRV2,PMHCPRV3,PMHCPRV4:      
                             PMHCPRV5,PMHCHTEL,PMHCHAD1,PMHCHAD2,PMHCHAD3:      
                             PMHCHAD4,PMHCHAD5,PMHCHAD6,PMHCHPCD,PMHCHEML:      
                             PMHCDFAC,PMHCDLAC,PMHCYACC,PMHCATYP,PMHCHHCP:      
                             PMHCOSLV,PMHCHCST,PMHCHCSD,PMHCFAXN,PMHCHFXN:      
                             PMHCMOBN,PMHCCRDC,PMHCWAHC,PMHCMRBN,PMHCNHSN:      
                             PMHCUDF1,PMHCUDF2,PMHCUDF3,PMHCUDF4,PMHCUDF5:      
                             PMHCUYN1,PMHCUYN2,PMHCUYN3,PMHCUYN4,PMHCUYN5:      
                             PMHCINSC,PMHCIPLN,PMHCIDTF,PMHCIDTT,PMHCMPGN:      
                             PMHCAPCI,PMHCREGT,PMHCRGDF,PMHCRGDT,PMHCPRDF:      
                             PMHCPRDT,PMHCTSDF,PMHCTFDT,PMHCVISD,PMHCPRFC:      
                             PMHCPRFN,PMHCABNN,PMHCUPDF,PMHCPRMK,PMHCSTTS:      
                             PMHCDLMI,PMHCDLMA,PMHCCDTE,PMHCCTIM,PMHCWEBC:      
                             PMHCLUPD,PMHCLUPT,PMHCWEBU,PMHCSLGP,PMHCHOSS:      
                             PMHCPTYP,PMHCEXML,PMHCDEAC,PMHCCPER,PMHCAHC1:      
                             PMHCAHC2,PMHCAHC3,PMHCLDOC,PMHCSDAT,PMHCEDAT:      
                             PMHCNHTA,PMHCWWCN,PMHCWWCE,PMHCWWCS,PMHCSMD1:      
                             PMHCSMD2,PMHCSPAR                                  
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRPMHCP5  RESET     KEY26                                                       
          WRITE     PMSHCPA5,KEY26;PMHCHCPC,PMHCHCPT,PMHCTITL,PMHCGNAM,PMHCSNAM:
                                   PMHCINIT,PMHCGNDR,PMHCDTOB,PMHCSPC1,PMHCSPD1:
                                   PMHCSPC2,PMHCSPD2,PMHCSPC3,PMHCSPD3,PMHCSPC4:
                                   PMHCSPD4,PMHCSPC5,PMHCSPD5,PMHCRCPT,PMHCADR1:
                                   PMHCADR2,PMHCADR3,PMHCADR4,PMHCADR5,PMHCADR6:
                                   PMHCPOST,PMHCSTAT,PMHCSEML,PMHCSTEL,PMHCPAGR:
                                   PMHCPAGN,PMHCAHP1,PMHCAHP2,PMHCAHP3,PMHCAHP4:
                                   PMHCAHP5,PMHCPRV1,PMHCPRV2,PMHCPRV3,PMHCPRV4:
                                   PMHCPRV5,PMHCHTEL,PMHCHAD1,PMHCHAD2,PMHCHAD3:
                                   PMHCHAD4,PMHCHAD5,PMHCHAD6,PMHCHPCD,PMHCHEML:
                                   PMHCDFAC,PMHCDLAC,PMHCYACC,PMHCATYP,PMHCHHCP:
                                   PMHCOSLV,PMHCHCST,PMHCHCSD,PMHCFAXN,PMHCHFXN:
                                   PMHCMOBN,PMHCCRDC,PMHCWAHC,PMHCMRBN,PMHCNHSN:
                                   PMHCUDF1,PMHCUDF2,PMHCUDF3,PMHCUDF4,PMHCUDF5:
                                   PMHCUYN1,PMHCUYN2,PMHCUYN3,PMHCUYN4,PMHCUYN5:
                                   PMHCINSC,PMHCIPLN,PMHCIDTF,PMHCIDTT,PMHCMPGN:
                                   PMHCAPCI,PMHCREGT,PMHCRGDF,PMHCRGDT,PMHCPRDF:
                                   PMHCPRDT,PMHCTSDF,PMHCTFDT,PMHCVISD,PMHCPRFC:
                                   PMHCPRFN,PMHCABNN,PMHCUPDF,PMHCPRMK,PMHCSTTS:
                                   PMHCDLMI,PMHCDLMA,PMHCCDTE,PMHCCTIM,PMHCWEBC:
                                   PMHCLUPD,PMHCLUPT,PMHCWEBU,PMHCSLGP,PMHCHOSS:
                                   PMHCPTYP,PMHCEXML,PMHCDEAC,PMHCCPER,PMHCAHC1:
                                   PMHCAHC2,PMHCAHC3,PMHCLDOC,PMHCSDAT,PMHCEDAT:
                                   PMHCNHTA,PMHCWWCN,PMHCWWCE,PMHCWWCS,PMHCSMD1:
                                   PMHCSMD2,PMHCSPAR                            
          RETURN
.
DEPMHCP5  RESET     KEY26                                                       
          DELETE    PMSHCPA5,KEY26                                              
          RETURN
.
RLPMHCP5  RESET     KEY26                                                       
          MOVE      ZERO,OVRCD
          READL     PMSHCPA5,KEY26;PMHCHCPC,PMHCHCPT,PMHCTITL,PMHCGNAM,PMHCSNAM:
                                   PMHCINIT,PMHCGNDR,PMHCDTOB,PMHCSPC1,PMHCSPD1:
                                   PMHCSPC2,PMHCSPD2,PMHCSPC3,PMHCSPD3,PMHCSPC4:
                                   PMHCSPD4,PMHCSPC5,PMHCSPD5,PMHCRCPT,PMHCADR1:
                                   PMHCADR2,PMHCADR3,PMHCADR4,PMHCADR5,PMHCADR6:
                                   PMHCPOST,PMHCSTAT,PMHCSEML,PMHCSTEL,PMHCPAGR:
                                   PMHCPAGN,PMHCAHP1,PMHCAHP2,PMHCAHP3,PMHCAHP4:
                                   PMHCAHP5,PMHCPRV1,PMHCPRV2,PMHCPRV3,PMHCPRV4:
                                   PMHCPRV5,PMHCHTEL,PMHCHAD1,PMHCHAD2,PMHCHAD3:
                                   PMHCHAD4,PMHCHAD5,PMHCHAD6,PMHCHPCD,PMHCHEML:
                                   PMHCDFAC,PMHCDLAC,PMHCYACC,PMHCATYP,PMHCHHCP:
                                   PMHCOSLV,PMHCHCST,PMHCHCSD,PMHCFAXN,PMHCHFXN:
                                   PMHCMOBN,PMHCCRDC,PMHCWAHC,PMHCMRBN,PMHCNHSN:
                                   PMHCUDF1,PMHCUDF2,PMHCUDF3,PMHCUDF4,PMHCUDF5:
                                   PMHCUYN1,PMHCUYN2,PMHCUYN3,PMHCUYN4,PMHCUYN5:
                                   PMHCINSC,PMHCIPLN,PMHCIDTF,PMHCIDTT,PMHCMPGN:
                                   PMHCAPCI,PMHCREGT,PMHCRGDF,PMHCRGDT,PMHCPRDF:
                                   PMHCPRDT,PMHCTSDF,PMHCTFDT,PMHCVISD,PMHCPRFC:
                                   PMHCPRFN,PMHCABNN,PMHCUPDF,PMHCPRMK,PMHCSTTS:
                                   PMHCDLMI,PMHCDLMA,PMHCCDTE,PMHCCTIM,PMHCWEBC:
                                   PMHCLUPD,PMHCLUPT,PMHCWEBU,PMHCSLGP,PMHCHOSS:
                                   PMHCPTYP,PMHCEXML,PMHCDEAC,PMHCCPER,PMHCAHC1:
                                   PMHCAHC2,PMHCAHC3,PMHCLDOC,PMHCSDAT,PMHCEDAT:
                                   PMHCNHTA,PMHCWWCN,PMHCWWCE,PMHCWWCS,PMHCSMD1:
                                   PMHCSMD2,PMHCSPAR                            
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLPMHCP5  MOVE      ZERO,OVRCD                                                  
          READLKS   PMSHCPA5;PMHCHCPC,PMHCHCPT,PMHCTITL,PMHCGNAM,PMHCSNAM:      
                             PMHCINIT,PMHCGNDR,PMHCDTOB,PMHCSPC1,PMHCSPD1:      
                             PMHCSPC2,PMHCSPD2,PMHCSPC3,PMHCSPD3,PMHCSPC4:      
                             PMHCSPD4,PMHCSPC5,PMHCSPD5,PMHCRCPT,PMHCADR1:      
                             PMHCADR2,PMHCADR3,PMHCADR4,PMHCADR5,PMHCADR6:      
                             PMHCPOST,PMHCSTAT,PMHCSEML,PMHCSTEL,PMHCPAGR:      
                             PMHCPAGN,PMHCAHP1,PMHCAHP2,PMHCAHP3,PMHCAHP4:      
                             PMHCAHP5,PMHCPRV1,PMHCPRV2,PMHCPRV3,PMHCPRV4:      
                             PMHCPRV5,PMHCHTEL,PMHCHAD1,PMHCHAD2,PMHCHAD3:      
                             PMHCHAD4,PMHCHAD5,PMHCHAD6,PMHCHPCD,PMHCHEML:      
                             PMHCDFAC,PMHCDLAC,PMHCYACC,PMHCATYP,PMHCHHCP:      
                             PMHCOSLV,PMHCHCST,PMHCHCSD,PMHCFAXN,PMHCHFXN:      
                             PMHCMOBN,PMHCCRDC,PMHCWAHC,PMHCMRBN,PMHCNHSN:      
                             PMHCUDF1,PMHCUDF2,PMHCUDF3,PMHCUDF4,PMHCUDF5:      
                             PMHCUYN1,PMHCUYN2,PMHCUYN3,PMHCUYN4,PMHCUYN5:      
                             PMHCINSC,PMHCIPLN,PMHCIDTF,PMHCIDTT,PMHCMPGN:      
                             PMHCAPCI,PMHCREGT,PMHCRGDF,PMHCRGDT,PMHCPRDF:      
                             PMHCPRDT,PMHCTSDF,PMHCTFDT,PMHCVISD,PMHCPRFC:      
                             PMHCPRFN,PMHCABNN,PMHCUPDF,PMHCPRMK,PMHCSTTS:      
                             PMHCDLMI,PMHCDLMA,PMHCCDTE,PMHCCTIM,PMHCWEBC:      
                             PMHCLUPD,PMHCLUPT,PMHCWEBU,PMHCSLGP,PMHCHOSS:      
                             PMHCPTYP,PMHCEXML,PMHCDEAC,PMHCCPER,PMHCAHC1:      
                             PMHCAHC2,PMHCAHC3,PMHCLDOC,PMHCSDAT,PMHCEDAT:      
                             PMHCNHTA,PMHCWWCN,PMHCWWCE,PMHCWWCS,PMHCSMD1:      
                             PMHCSMD2,PMHCSPAR                                  
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLPMHCP5  MOVE      ZERO,OVRCD                                                  
          READLKP   PMSHCPA5;PMHCHCPC,PMHCHCPT,PMHCTITL,PMHCGNAM,PMHCSNAM:      
                             PMHCINIT,PMHCGNDR,PMHCDTOB,PMHCSPC1,PMHCSPD1:      
                             PMHCSPC2,PMHCSPD2,PMHCSPC3,PMHCSPD3,PMHCSPC4:      
                             PMHCSPD4,PMHCSPC5,PMHCSPD5,PMHCRCPT,PMHCADR1:      
                             PMHCADR2,PMHCADR3,PMHCADR4,PMHCADR5,PMHCADR6:      
                             PMHCPOST,PMHCSTAT,PMHCSEML,PMHCSTEL,PMHCPAGR:      
                             PMHCPAGN,PMHCAHP1,PMHCAHP2,PMHCAHP3,PMHCAHP4:      
                             PMHCAHP5,PMHCPRV1,PMHCPRV2,PMHCPRV3,PMHCPRV4:      
                             PMHCPRV5,PMHCHTEL,PMHCHAD1,PMHCHAD2,PMHCHAD3:      
                             PMHCHAD4,PMHCHAD5,PMHCHAD6,PMHCHPCD,PMHCHEML:      
                             PMHCDFAC,PMHCDLAC,PMHCYACC,PMHCATYP,PMHCHHCP:      
                             PMHCOSLV,PMHCHCST,PMHCHCSD,PMHCFAXN,PMHCHFXN:      
                             PMHCMOBN,PMHCCRDC,PMHCWAHC,PMHCMRBN,PMHCNHSN:      
                             PMHCUDF1,PMHCUDF2,PMHCUDF3,PMHCUDF4,PMHCUDF5:      
                             PMHCUYN1,PMHCUYN2,PMHCUYN3,PMHCUYN4,PMHCUYN5:      
                             PMHCINSC,PMHCIPLN,PMHCIDTF,PMHCIDTT,PMHCMPGN:      
                             PMHCAPCI,PMHCREGT,PMHCRGDF,PMHCRGDT,PMHCPRDF:      
                             PMHCPRDT,PMHCTSDF,PMHCTFDT,PMHCVISD,PMHCPRFC:      
                             PMHCPRFN,PMHCABNN,PMHCUPDF,PMHCPRMK,PMHCSTTS:      
                             PMHCDLMI,PMHCDLMA,PMHCCDTE,PMHCCTIM,PMHCWEBC:      
                             PMHCLUPD,PMHCLUPT,PMHCWEBU,PMHCSLGP,PMHCHOSS:      
                             PMHCPTYP,PMHCEXML,PMHCDEAC,PMHCCPER,PMHCAHC1:      
                             PMHCAHC2,PMHCAHC3,PMHCLDOC,PMHCSDAT,PMHCEDAT:      
                             PMHCNHTA,PMHCWWCN,PMHCWWCE,PMHCWWCS,PMHCSMD1:      
                             PMHCSMD2,PMHCSPAR                                  
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUPMHCP5  RESET     KEY26                                                       
          UNLOCK    PMSHCPA5                                                    
          RETURN
.
RSPMHCP6  RESET     KEY26                                                       
          READ      PMSHCPA6,KEY26;;                                            
          RETURN
.
RAPMHCP6  RESET     KEY26                                                       
          MOVE      ZERO,OVRCD
          READ      PMSHCPA6,KEY26;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPMHCP6  RESET     KEY26                                                       
          MOVE      ZERO,OVRCD
          READ      PMSHCPA6,KEY26;PMHCHCPC,PMHCHCPT,PMHCTITL,PMHCGNAM,PMHCSNAM:
                                   PMHCINIT,PMHCGNDR,PMHCDTOB,PMHCSPC1,PMHCSPD1:
                                   PMHCSPC2,PMHCSPD2,PMHCSPC3,PMHCSPD3,PMHCSPC4:
                                   PMHCSPD4,PMHCSPC5,PMHCSPD5,PMHCRCPT,PMHCADR1:
                                   PMHCADR2,PMHCADR3,PMHCADR4,PMHCADR5,PMHCADR6:
                                   PMHCPOST,PMHCSTAT,PMHCSEML,PMHCSTEL,PMHCPAGR:
                                   PMHCPAGN,PMHCAHP1,PMHCAHP2,PMHCAHP3,PMHCAHP4:
                                   PMHCAHP5,PMHCPRV1,PMHCPRV2,PMHCPRV3,PMHCPRV4:
                                   PMHCPRV5,PMHCHTEL,PMHCHAD1,PMHCHAD2,PMHCHAD3:
                                   PMHCHAD4,PMHCHAD5,PMHCHAD6,PMHCHPCD,PMHCHEML:
                                   PMHCDFAC,PMHCDLAC,PMHCYACC,PMHCATYP,PMHCHHCP:
                                   PMHCOSLV,PMHCHCST,PMHCHCSD,PMHCFAXN,PMHCHFXN:
                                   PMHCMOBN,PMHCCRDC,PMHCWAHC,PMHCMRBN,PMHCNHSN:
                                   PMHCUDF1,PMHCUDF2,PMHCUDF3,PMHCUDF4,PMHCUDF5:
                                   PMHCUYN1,PMHCUYN2,PMHCUYN3,PMHCUYN4,PMHCUYN5:
                                   PMHCINSC,PMHCIPLN,PMHCIDTF,PMHCIDTT,PMHCMPGN:
                                   PMHCAPCI,PMHCREGT,PMHCRGDF,PMHCRGDT,PMHCPRDF:
                                   PMHCPRDT,PMHCTSDF,PMHCTFDT,PMHCVISD,PMHCPRFC:
                                   PMHCPRFN,PMHCABNN,PMHCUPDF,PMHCPRMK,PMHCSTTS:
                                   PMHCDLMI,PMHCDLMA,PMHCCDTE,PMHCCTIM,PMHCWEBC:
                                   PMHCLUPD,PMHCLUPT,PMHCWEBU,PMHCSLGP,PMHCHOSS:
                                   PMHCPTYP,PMHCEXML,PMHCDEAC,PMHCCPER,PMHCAHC1:
                                   PMHCAHC2,PMHCAHC3,PMHCLDOC,PMHCSDAT,PMHCEDAT:
                                   PMHCNHTA,PMHCWWCN,PMHCWWCE,PMHCWWCS,PMHCSMD1:
                                   PMHCSMD2,PMHCSPAR                            
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPMHCP6  MOVE      ZERO,OVRCD                                                  
          READKS    PMSHCPA6;PMHCHCPC,PMHCHCPT,PMHCTITL,PMHCGNAM,PMHCSNAM:      
                             PMHCINIT,PMHCGNDR,PMHCDTOB,PMHCSPC1,PMHCSPD1:      
                             PMHCSPC2,PMHCSPD2,PMHCSPC3,PMHCSPD3,PMHCSPC4:      
                             PMHCSPD4,PMHCSPC5,PMHCSPD5,PMHCRCPT,PMHCADR1:      
                             PMHCADR2,PMHCADR3,PMHCADR4,PMHCADR5,PMHCADR6:      
                             PMHCPOST,PMHCSTAT,PMHCSEML,PMHCSTEL,PMHCPAGR:      
                             PMHCPAGN,PMHCAHP1,PMHCAHP2,PMHCAHP3,PMHCAHP4:      
                             PMHCAHP5,PMHCPRV1,PMHCPRV2,PMHCPRV3,PMHCPRV4:      
                             PMHCPRV5,PMHCHTEL,PMHCHAD1,PMHCHAD2,PMHCHAD3:      
                             PMHCHAD4,PMHCHAD5,PMHCHAD6,PMHCHPCD,PMHCHEML:      
                             PMHCDFAC,PMHCDLAC,PMHCYACC,PMHCATYP,PMHCHHCP:      
                             PMHCOSLV,PMHCHCST,PMHCHCSD,PMHCFAXN,PMHCHFXN:      
                             PMHCMOBN,PMHCCRDC,PMHCWAHC,PMHCMRBN,PMHCNHSN:      
                             PMHCUDF1,PMHCUDF2,PMHCUDF3,PMHCUDF4,PMHCUDF5:      
                             PMHCUYN1,PMHCUYN2,PMHCUYN3,PMHCUYN4,PMHCUYN5:      
                             PMHCINSC,PMHCIPLN,PMHCIDTF,PMHCIDTT,PMHCMPGN:      
                             PMHCAPCI,PMHCREGT,PMHCRGDF,PMHCRGDT,PMHCPRDF:      
                             PMHCPRDT,PMHCTSDF,PMHCTFDT,PMHCVISD,PMHCPRFC:      
                             PMHCPRFN,PMHCABNN,PMHCUPDF,PMHCPRMK,PMHCSTTS:      
                             PMHCDLMI,PMHCDLMA,PMHCCDTE,PMHCCTIM,PMHCWEBC:      
                             PMHCLUPD,PMHCLUPT,PMHCWEBU,PMHCSLGP,PMHCHOSS:      
                             PMHCPTYP,PMHCEXML,PMHCDEAC,PMHCCPER,PMHCAHC1:      
                             PMHCAHC2,PMHCAHC3,PMHCLDOC,PMHCSDAT,PMHCEDAT:      
                             PMHCNHTA,PMHCWWCN,PMHCWWCE,PMHCWWCS,PMHCSMD1:      
                             PMHCSMD2,PMHCSPAR                                  
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPMHCP6  MOVE      ZERO,OVRCD                                                  
          READKP    PMSHCPA6;PMHCHCPC,PMHCHCPT,PMHCTITL,PMHCGNAM,PMHCSNAM:      
                             PMHCINIT,PMHCGNDR,PMHCDTOB,PMHCSPC1,PMHCSPD1:      
                             PMHCSPC2,PMHCSPD2,PMHCSPC3,PMHCSPD3,PMHCSPC4:      
                             PMHCSPD4,PMHCSPC5,PMHCSPD5,PMHCRCPT,PMHCADR1:      
                             PMHCADR2,PMHCADR3,PMHCADR4,PMHCADR5,PMHCADR6:      
                             PMHCPOST,PMHCSTAT,PMHCSEML,PMHCSTEL,PMHCPAGR:      
                             PMHCPAGN,PMHCAHP1,PMHCAHP2,PMHCAHP3,PMHCAHP4:      
                             PMHCAHP5,PMHCPRV1,PMHCPRV2,PMHCPRV3,PMHCPRV4:      
                             PMHCPRV5,PMHCHTEL,PMHCHAD1,PMHCHAD2,PMHCHAD3:      
                             PMHCHAD4,PMHCHAD5,PMHCHAD6,PMHCHPCD,PMHCHEML:      
                             PMHCDFAC,PMHCDLAC,PMHCYACC,PMHCATYP,PMHCHHCP:      
                             PMHCOSLV,PMHCHCST,PMHCHCSD,PMHCFAXN,PMHCHFXN:      
                             PMHCMOBN,PMHCCRDC,PMHCWAHC,PMHCMRBN,PMHCNHSN:      
                             PMHCUDF1,PMHCUDF2,PMHCUDF3,PMHCUDF4,PMHCUDF5:      
                             PMHCUYN1,PMHCUYN2,PMHCUYN3,PMHCUYN4,PMHCUYN5:      
                             PMHCINSC,PMHCIPLN,PMHCIDTF,PMHCIDTT,PMHCMPGN:      
                             PMHCAPCI,PMHCREGT,PMHCRGDF,PMHCRGDT,PMHCPRDF:      
                             PMHCPRDT,PMHCTSDF,PMHCTFDT,PMHCVISD,PMHCPRFC:      
                             PMHCPRFN,PMHCABNN,PMHCUPDF,PMHCPRMK,PMHCSTTS:      
                             PMHCDLMI,PMHCDLMA,PMHCCDTE,PMHCCTIM,PMHCWEBC:      
                             PMHCLUPD,PMHCLUPT,PMHCWEBU,PMHCSLGP,PMHCHOSS:      
                             PMHCPTYP,PMHCEXML,PMHCDEAC,PMHCCPER,PMHCAHC1:      
                             PMHCAHC2,PMHCAHC3,PMHCLDOC,PMHCSDAT,PMHCEDAT:      
                             PMHCNHTA,PMHCWWCN,PMHCWWCE,PMHCWWCS,PMHCSMD1:      
                             PMHCSMD2,PMHCSPAR                                  
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPMHCP6  MOVE      ZERO,OVRCD                                                  
          UPDATE    PMSHCPA6;PMHCHCPC,PMHCHCPT,PMHCTITL,PMHCGNAM,PMHCSNAM:      
                             PMHCINIT,PMHCGNDR,PMHCDTOB,PMHCSPC1,PMHCSPD1:      
                             PMHCSPC2,PMHCSPD2,PMHCSPC3,PMHCSPD3,PMHCSPC4:      
                             PMHCSPD4,PMHCSPC5,PMHCSPD5,PMHCRCPT,PMHCADR1:      
                             PMHCADR2,PMHCADR3,PMHCADR4,PMHCADR5,PMHCADR6:      
                             PMHCPOST,PMHCSTAT,PMHCSEML,PMHCSTEL,PMHCPAGR:      
                             PMHCPAGN,PMHCAHP1,PMHCAHP2,PMHCAHP3,PMHCAHP4:      
                             PMHCAHP5,PMHCPRV1,PMHCPRV2,PMHCPRV3,PMHCPRV4:      
                             PMHCPRV5,PMHCHTEL,PMHCHAD1,PMHCHAD2,PMHCHAD3:      
                             PMHCHAD4,PMHCHAD5,PMHCHAD6,PMHCHPCD,PMHCHEML:      
                             PMHCDFAC,PMHCDLAC,PMHCYACC,PMHCATYP,PMHCHHCP:      
                             PMHCOSLV,PMHCHCST,PMHCHCSD,PMHCFAXN,PMHCHFXN:      
                             PMHCMOBN,PMHCCRDC,PMHCWAHC,PMHCMRBN,PMHCNHSN:      
                             PMHCUDF1,PMHCUDF2,PMHCUDF3,PMHCUDF4,PMHCUDF5:      
                             PMHCUYN1,PMHCUYN2,PMHCUYN3,PMHCUYN4,PMHCUYN5:      
                             PMHCINSC,PMHCIPLN,PMHCIDTF,PMHCIDTT,PMHCMPGN:      
                             PMHCAPCI,PMHCREGT,PMHCRGDF,PMHCRGDT,PMHCPRDF:      
                             PMHCPRDT,PMHCTSDF,PMHCTFDT,PMHCVISD,PMHCPRFC:      
                             PMHCPRFN,PMHCABNN,PMHCUPDF,PMHCPRMK,PMHCSTTS:      
                             PMHCDLMI,PMHCDLMA,PMHCCDTE,PMHCCTIM,PMHCWEBC:      
                             PMHCLUPD,PMHCLUPT,PMHCWEBU,PMHCSLGP,PMHCHOSS:      
                             PMHCPTYP,PMHCEXML,PMHCDEAC,PMHCCPER,PMHCAHC1:      
                             PMHCAHC2,PMHCAHC3,PMHCLDOC,PMHCSDAT,PMHCEDAT:      
                             PMHCNHTA,PMHCWWCN,PMHCWWCE,PMHCWWCS,PMHCSMD1:      
                             PMHCSMD2,PMHCSPAR                                  
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRPMHCP6  RESET     KEY26                                                       
          WRITE     PMSHCPA6,KEY26;PMHCHCPC,PMHCHCPT,PMHCTITL,PMHCGNAM,PMHCSNAM:
                                   PMHCINIT,PMHCGNDR,PMHCDTOB,PMHCSPC1,PMHCSPD1:
                                   PMHCSPC2,PMHCSPD2,PMHCSPC3,PMHCSPD3,PMHCSPC4:
                                   PMHCSPD4,PMHCSPC5,PMHCSPD5,PMHCRCPT,PMHCADR1:
                                   PMHCADR2,PMHCADR3,PMHCADR4,PMHCADR5,PMHCADR6:
                                   PMHCPOST,PMHCSTAT,PMHCSEML,PMHCSTEL,PMHCPAGR:
                                   PMHCPAGN,PMHCAHP1,PMHCAHP2,PMHCAHP3,PMHCAHP4:
                                   PMHCAHP5,PMHCPRV1,PMHCPRV2,PMHCPRV3,PMHCPRV4:
                                   PMHCPRV5,PMHCHTEL,PMHCHAD1,PMHCHAD2,PMHCHAD3:
                                   PMHCHAD4,PMHCHAD5,PMHCHAD6,PMHCHPCD,PMHCHEML:
                                   PMHCDFAC,PMHCDLAC,PMHCYACC,PMHCATYP,PMHCHHCP:
                                   PMHCOSLV,PMHCHCST,PMHCHCSD,PMHCFAXN,PMHCHFXN:
                                   PMHCMOBN,PMHCCRDC,PMHCWAHC,PMHCMRBN,PMHCNHSN:
                                   PMHCUDF1,PMHCUDF2,PMHCUDF3,PMHCUDF4,PMHCUDF5:
                                   PMHCUYN1,PMHCUYN2,PMHCUYN3,PMHCUYN4,PMHCUYN5:
                                   PMHCINSC,PMHCIPLN,PMHCIDTF,PMHCIDTT,PMHCMPGN:
                                   PMHCAPCI,PMHCREGT,PMHCRGDF,PMHCRGDT,PMHCPRDF:
                                   PMHCPRDT,PMHCTSDF,PMHCTFDT,PMHCVISD,PMHCPRFC:
                                   PMHCPRFN,PMHCABNN,PMHCUPDF,PMHCPRMK,PMHCSTTS:
                                   PMHCDLMI,PMHCDLMA,PMHCCDTE,PMHCCTIM,PMHCWEBC:
                                   PMHCLUPD,PMHCLUPT,PMHCWEBU,PMHCSLGP,PMHCHOSS:
                                   PMHCPTYP,PMHCEXML,PMHCDEAC,PMHCCPER,PMHCAHC1:
                                   PMHCAHC2,PMHCAHC3,PMHCLDOC,PMHCSDAT,PMHCEDAT:
                                   PMHCNHTA,PMHCWWCN,PMHCWWCE,PMHCWWCS,PMHCSMD1:
                                   PMHCSMD2,PMHCSPAR                            
          RETURN
.
DEPMHCP6  RESET     KEY26                                                       
          DELETE    PMSHCPA6,KEY26                                              
          RETURN
.
RLPMHCP6  RESET     KEY26                                                       
          MOVE      ZERO,OVRCD
          READL     PMSHCPA6,KEY26;PMHCHCPC,PMHCHCPT,PMHCTITL,PMHCGNAM,PMHCSNAM:
                                   PMHCINIT,PMHCGNDR,PMHCDTOB,PMHCSPC1,PMHCSPD1:
                                   PMHCSPC2,PMHCSPD2,PMHCSPC3,PMHCSPD3,PMHCSPC4:
                                   PMHCSPD4,PMHCSPC5,PMHCSPD5,PMHCRCPT,PMHCADR1:
                                   PMHCADR2,PMHCADR3,PMHCADR4,PMHCADR5,PMHCADR6:
                                   PMHCPOST,PMHCSTAT,PMHCSEML,PMHCSTEL,PMHCPAGR:
                                   PMHCPAGN,PMHCAHP1,PMHCAHP2,PMHCAHP3,PMHCAHP4:
                                   PMHCAHP5,PMHCPRV1,PMHCPRV2,PMHCPRV3,PMHCPRV4:
                                   PMHCPRV5,PMHCHTEL,PMHCHAD1,PMHCHAD2,PMHCHAD3:
                                   PMHCHAD4,PMHCHAD5,PMHCHAD6,PMHCHPCD,PMHCHEML:
                                   PMHCDFAC,PMHCDLAC,PMHCYACC,PMHCATYP,PMHCHHCP:
                                   PMHCOSLV,PMHCHCST,PMHCHCSD,PMHCFAXN,PMHCHFXN:
                                   PMHCMOBN,PMHCCRDC,PMHCWAHC,PMHCMRBN,PMHCNHSN:
                                   PMHCUDF1,PMHCUDF2,PMHCUDF3,PMHCUDF4,PMHCUDF5:
                                   PMHCUYN1,PMHCUYN2,PMHCUYN3,PMHCUYN4,PMHCUYN5:
                                   PMHCINSC,PMHCIPLN,PMHCIDTF,PMHCIDTT,PMHCMPGN:
                                   PMHCAPCI,PMHCREGT,PMHCRGDF,PMHCRGDT,PMHCPRDF:
                                   PMHCPRDT,PMHCTSDF,PMHCTFDT,PMHCVISD,PMHCPRFC:
                                   PMHCPRFN,PMHCABNN,PMHCUPDF,PMHCPRMK,PMHCSTTS:
                                   PMHCDLMI,PMHCDLMA,PMHCCDTE,PMHCCTIM,PMHCWEBC:
                                   PMHCLUPD,PMHCLUPT,PMHCWEBU,PMHCSLGP,PMHCHOSS:
                                   PMHCPTYP,PMHCEXML,PMHCDEAC,PMHCCPER,PMHCAHC1:
                                   PMHCAHC2,PMHCAHC3,PMHCLDOC,PMHCSDAT,PMHCEDAT:
                                   PMHCNHTA,PMHCWWCN,PMHCWWCE,PMHCWWCS,PMHCSMD1:
                                   PMHCSMD2,PMHCSPAR                            
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLPMHCP6  MOVE      ZERO,OVRCD                                                  
          READLKS   PMSHCPA6;PMHCHCPC,PMHCHCPT,PMHCTITL,PMHCGNAM,PMHCSNAM:      
                             PMHCINIT,PMHCGNDR,PMHCDTOB,PMHCSPC1,PMHCSPD1:      
                             PMHCSPC2,PMHCSPD2,PMHCSPC3,PMHCSPD3,PMHCSPC4:      
                             PMHCSPD4,PMHCSPC5,PMHCSPD5,PMHCRCPT,PMHCADR1:      
                             PMHCADR2,PMHCADR3,PMHCADR4,PMHCADR5,PMHCADR6:      
                             PMHCPOST,PMHCSTAT,PMHCSEML,PMHCSTEL,PMHCPAGR:      
                             PMHCPAGN,PMHCAHP1,PMHCAHP2,PMHCAHP3,PMHCAHP4:      
                             PMHCAHP5,PMHCPRV1,PMHCPRV2,PMHCPRV3,PMHCPRV4:      
                             PMHCPRV5,PMHCHTEL,PMHCHAD1,PMHCHAD2,PMHCHAD3:      
                             PMHCHAD4,PMHCHAD5,PMHCHAD6,PMHCHPCD,PMHCHEML:      
                             PMHCDFAC,PMHCDLAC,PMHCYACC,PMHCATYP,PMHCHHCP:      
                             PMHCOSLV,PMHCHCST,PMHCHCSD,PMHCFAXN,PMHCHFXN:      
                             PMHCMOBN,PMHCCRDC,PMHCWAHC,PMHCMRBN,PMHCNHSN:      
                             PMHCUDF1,PMHCUDF2,PMHCUDF3,PMHCUDF4,PMHCUDF5:      
                             PMHCUYN1,PMHCUYN2,PMHCUYN3,PMHCUYN4,PMHCUYN5:      
                             PMHCINSC,PMHCIPLN,PMHCIDTF,PMHCIDTT,PMHCMPGN:      
                             PMHCAPCI,PMHCREGT,PMHCRGDF,PMHCRGDT,PMHCPRDF:      
                             PMHCPRDT,PMHCTSDF,PMHCTFDT,PMHCVISD,PMHCPRFC:      
                             PMHCPRFN,PMHCABNN,PMHCUPDF,PMHCPRMK,PMHCSTTS:      
                             PMHCDLMI,PMHCDLMA,PMHCCDTE,PMHCCTIM,PMHCWEBC:      
                             PMHCLUPD,PMHCLUPT,PMHCWEBU,PMHCSLGP,PMHCHOSS:      
                             PMHCPTYP,PMHCEXML,PMHCDEAC,PMHCCPER,PMHCAHC1:      
                             PMHCAHC2,PMHCAHC3,PMHCLDOC,PMHCSDAT,PMHCEDAT:      
                             PMHCNHTA,PMHCWWCN,PMHCWWCE,PMHCWWCS,PMHCSMD1:      
                             PMHCSMD2,PMHCSPAR                                  
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLPMHCP6  MOVE      ZERO,OVRCD                                                  
          READLKP   PMSHCPA6;PMHCHCPC,PMHCHCPT,PMHCTITL,PMHCGNAM,PMHCSNAM:      
                             PMHCINIT,PMHCGNDR,PMHCDTOB,PMHCSPC1,PMHCSPD1:      
                             PMHCSPC2,PMHCSPD2,PMHCSPC3,PMHCSPD3,PMHCSPC4:      
                             PMHCSPD4,PMHCSPC5,PMHCSPD5,PMHCRCPT,PMHCADR1:      
                             PMHCADR2,PMHCADR3,PMHCADR4,PMHCADR5,PMHCADR6:      
                             PMHCPOST,PMHCSTAT,PMHCSEML,PMHCSTEL,PMHCPAGR:      
                             PMHCPAGN,PMHCAHP1,PMHCAHP2,PMHCAHP3,PMHCAHP4:      
                             PMHCAHP5,PMHCPRV1,PMHCPRV2,PMHCPRV3,PMHCPRV4:      
                             PMHCPRV5,PMHCHTEL,PMHCHAD1,PMHCHAD2,PMHCHAD3:      
                             PMHCHAD4,PMHCHAD5,PMHCHAD6,PMHCHPCD,PMHCHEML:      
                             PMHCDFAC,PMHCDLAC,PMHCYACC,PMHCATYP,PMHCHHCP:      
                             PMHCOSLV,PMHCHCST,PMHCHCSD,PMHCFAXN,PMHCHFXN:      
                             PMHCMOBN,PMHCCRDC,PMHCWAHC,PMHCMRBN,PMHCNHSN:      
                             PMHCUDF1,PMHCUDF2,PMHCUDF3,PMHCUDF4,PMHCUDF5:      
                             PMHCUYN1,PMHCUYN2,PMHCUYN3,PMHCUYN4,PMHCUYN5:      
                             PMHCINSC,PMHCIPLN,PMHCIDTF,PMHCIDTT,PMHCMPGN:      
                             PMHCAPCI,PMHCREGT,PMHCRGDF,PMHCRGDT,PMHCPRDF:      
                             PMHCPRDT,PMHCTSDF,PMHCTFDT,PMHCVISD,PMHCPRFC:      
                             PMHCPRFN,PMHCABNN,PMHCUPDF,PMHCPRMK,PMHCSTTS:      
                             PMHCDLMI,PMHCDLMA,PMHCCDTE,PMHCCTIM,PMHCWEBC:      
                             PMHCLUPD,PMHCLUPT,PMHCWEBU,PMHCSLGP,PMHCHOSS:      
                             PMHCPTYP,PMHCEXML,PMHCDEAC,PMHCCPER,PMHCAHC1:      
                             PMHCAHC2,PMHCAHC3,PMHCLDOC,PMHCSDAT,PMHCEDAT:      
                             PMHCNHTA,PMHCWWCN,PMHCWWCE,PMHCWWCS,PMHCSMD1:      
                             PMHCSMD2,PMHCSPAR                                  
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUPMHCP6  RESET     KEY26                                                       
          UNLOCK    PMSHCPA6                                                    
          RETURN
.
RSPMHCP7  RESET     KEY30                                                       
          READ      PMSHCPA7,KEY30;;                                            
          RETURN
.
RAPMHCP7  RESET     KEY30                                                       
          MOVE      ZERO,OVRCD
          READ      PMSHCPA7,KEY30;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPMHCP7  RESET     KEY30                                                       
          MOVE      ZERO,OVRCD
          READ      PMSHCPA7,KEY30;PMHCHCPC,PMHCHCPT,PMHCTITL,PMHCGNAM,PMHCSNAM:
                                   PMHCINIT,PMHCGNDR,PMHCDTOB,PMHCSPC1,PMHCSPD1:
                                   PMHCSPC2,PMHCSPD2,PMHCSPC3,PMHCSPD3,PMHCSPC4:
                                   PMHCSPD4,PMHCSPC5,PMHCSPD5,PMHCRCPT,PMHCADR1:
                                   PMHCADR2,PMHCADR3,PMHCADR4,PMHCADR5,PMHCADR6:
                                   PMHCPOST,PMHCSTAT,PMHCSEML,PMHCSTEL,PMHCPAGR:
                                   PMHCPAGN,PMHCAHP1,PMHCAHP2,PMHCAHP3,PMHCAHP4:
                                   PMHCAHP5,PMHCPRV1,PMHCPRV2,PMHCPRV3,PMHCPRV4:
                                   PMHCPRV5,PMHCHTEL,PMHCHAD1,PMHCHAD2,PMHCHAD3:
                                   PMHCHAD4,PMHCHAD5,PMHCHAD6,PMHCHPCD,PMHCHEML:
                                   PMHCDFAC,PMHCDLAC,PMHCYACC,PMHCATYP,PMHCHHCP:
                                   PMHCOSLV,PMHCHCST,PMHCHCSD,PMHCFAXN,PMHCHFXN:
                                   PMHCMOBN,PMHCCRDC,PMHCWAHC,PMHCMRBN,PMHCNHSN:
                                   PMHCUDF1,PMHCUDF2,PMHCUDF3,PMHCUDF4,PMHCUDF5:
                                   PMHCUYN1,PMHCUYN2,PMHCUYN3,PMHCUYN4,PMHCUYN5:
                                   PMHCINSC,PMHCIPLN,PMHCIDTF,PMHCIDTT,PMHCMPGN:
                                   PMHCAPCI,PMHCREGT,PMHCRGDF,PMHCRGDT,PMHCPRDF:
                                   PMHCPRDT,PMHCTSDF,PMHCTFDT,PMHCVISD,PMHCPRFC:
                                   PMHCPRFN,PMHCABNN,PMHCUPDF,PMHCPRMK,PMHCSTTS:
                                   PMHCDLMI,PMHCDLMA,PMHCCDTE,PMHCCTIM,PMHCWEBC:
                                   PMHCLUPD,PMHCLUPT,PMHCWEBU,PMHCSLGP,PMHCHOSS:
                                   PMHCPTYP,PMHCEXML,PMHCDEAC,PMHCCPER,PMHCAHC1:
                                   PMHCAHC2,PMHCAHC3,PMHCLDOC,PMHCSDAT,PMHCEDAT:
                                   PMHCNHTA,PMHCWWCN,PMHCWWCE,PMHCWWCS,PMHCSMD1:
                                   PMHCSMD2,PMHCSPAR                            
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPMHCP7  MOVE      ZERO,OVRCD                                                  
          READKS    PMSHCPA7;PMHCHCPC,PMHCHCPT,PMHCTITL,PMHCGNAM,PMHCSNAM:      
                             PMHCINIT,PMHCGNDR,PMHCDTOB,PMHCSPC1,PMHCSPD1:      
                             PMHCSPC2,PMHCSPD2,PMHCSPC3,PMHCSPD3,PMHCSPC4:      
                             PMHCSPD4,PMHCSPC5,PMHCSPD5,PMHCRCPT,PMHCADR1:      
                             PMHCADR2,PMHCADR3,PMHCADR4,PMHCADR5,PMHCADR6:      
                             PMHCPOST,PMHCSTAT,PMHCSEML,PMHCSTEL,PMHCPAGR:      
                             PMHCPAGN,PMHCAHP1,PMHCAHP2,PMHCAHP3,PMHCAHP4:      
                             PMHCAHP5,PMHCPRV1,PMHCPRV2,PMHCPRV3,PMHCPRV4:      
                             PMHCPRV5,PMHCHTEL,PMHCHAD1,PMHCHAD2,PMHCHAD3:      
                             PMHCHAD4,PMHCHAD5,PMHCHAD6,PMHCHPCD,PMHCHEML:      
                             PMHCDFAC,PMHCDLAC,PMHCYACC,PMHCATYP,PMHCHHCP:      
                             PMHCOSLV,PMHCHCST,PMHCHCSD,PMHCFAXN,PMHCHFXN:      
                             PMHCMOBN,PMHCCRDC,PMHCWAHC,PMHCMRBN,PMHCNHSN:      
                             PMHCUDF1,PMHCUDF2,PMHCUDF3,PMHCUDF4,PMHCUDF5:      
                             PMHCUYN1,PMHCUYN2,PMHCUYN3,PMHCUYN4,PMHCUYN5:      
                             PMHCINSC,PMHCIPLN,PMHCIDTF,PMHCIDTT,PMHCMPGN:      
                             PMHCAPCI,PMHCREGT,PMHCRGDF,PMHCRGDT,PMHCPRDF:      
                             PMHCPRDT,PMHCTSDF,PMHCTFDT,PMHCVISD,PMHCPRFC:      
                             PMHCPRFN,PMHCABNN,PMHCUPDF,PMHCPRMK,PMHCSTTS:      
                             PMHCDLMI,PMHCDLMA,PMHCCDTE,PMHCCTIM,PMHCWEBC:      
                             PMHCLUPD,PMHCLUPT,PMHCWEBU,PMHCSLGP,PMHCHOSS:      
                             PMHCPTYP,PMHCEXML,PMHCDEAC,PMHCCPER,PMHCAHC1:      
                             PMHCAHC2,PMHCAHC3,PMHCLDOC,PMHCSDAT,PMHCEDAT:      
                             PMHCNHTA,PMHCWWCN,PMHCWWCE,PMHCWWCS,PMHCSMD1:      
                             PMHCSMD2,PMHCSPAR                                  
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPMHCP7  MOVE      ZERO,OVRCD                                                  
          READKP    PMSHCPA7;PMHCHCPC,PMHCHCPT,PMHCTITL,PMHCGNAM,PMHCSNAM:      
                             PMHCINIT,PMHCGNDR,PMHCDTOB,PMHCSPC1,PMHCSPD1:      
                             PMHCSPC2,PMHCSPD2,PMHCSPC3,PMHCSPD3,PMHCSPC4:      
                             PMHCSPD4,PMHCSPC5,PMHCSPD5,PMHCRCPT,PMHCADR1:      
                             PMHCADR2,PMHCADR3,PMHCADR4,PMHCADR5,PMHCADR6:      
                             PMHCPOST,PMHCSTAT,PMHCSEML,PMHCSTEL,PMHCPAGR:      
                             PMHCPAGN,PMHCAHP1,PMHCAHP2,PMHCAHP3,PMHCAHP4:      
                             PMHCAHP5,PMHCPRV1,PMHCPRV2,PMHCPRV3,PMHCPRV4:      
                             PMHCPRV5,PMHCHTEL,PMHCHAD1,PMHCHAD2,PMHCHAD3:      
                             PMHCHAD4,PMHCHAD5,PMHCHAD6,PMHCHPCD,PMHCHEML:      
                             PMHCDFAC,PMHCDLAC,PMHCYACC,PMHCATYP,PMHCHHCP:      
                             PMHCOSLV,PMHCHCST,PMHCHCSD,PMHCFAXN,PMHCHFXN:      
                             PMHCMOBN,PMHCCRDC,PMHCWAHC,PMHCMRBN,PMHCNHSN:      
                             PMHCUDF1,PMHCUDF2,PMHCUDF3,PMHCUDF4,PMHCUDF5:      
                             PMHCUYN1,PMHCUYN2,PMHCUYN3,PMHCUYN4,PMHCUYN5:      
                             PMHCINSC,PMHCIPLN,PMHCIDTF,PMHCIDTT,PMHCMPGN:      
                             PMHCAPCI,PMHCREGT,PMHCRGDF,PMHCRGDT,PMHCPRDF:      
                             PMHCPRDT,PMHCTSDF,PMHCTFDT,PMHCVISD,PMHCPRFC:      
                             PMHCPRFN,PMHCABNN,PMHCUPDF,PMHCPRMK,PMHCSTTS:      
                             PMHCDLMI,PMHCDLMA,PMHCCDTE,PMHCCTIM,PMHCWEBC:      
                             PMHCLUPD,PMHCLUPT,PMHCWEBU,PMHCSLGP,PMHCHOSS:      
                             PMHCPTYP,PMHCEXML,PMHCDEAC,PMHCCPER,PMHCAHC1:      
                             PMHCAHC2,PMHCAHC3,PMHCLDOC,PMHCSDAT,PMHCEDAT:      
                             PMHCNHTA,PMHCWWCN,PMHCWWCE,PMHCWWCS,PMHCSMD1:      
                             PMHCSMD2,PMHCSPAR                                  
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPMHCP7  MOVE      ZERO,OVRCD                                                  
          UPDATE    PMSHCPA7;PMHCHCPC,PMHCHCPT,PMHCTITL,PMHCGNAM,PMHCSNAM:      
                             PMHCINIT,PMHCGNDR,PMHCDTOB,PMHCSPC1,PMHCSPD1:      
                             PMHCSPC2,PMHCSPD2,PMHCSPC3,PMHCSPD3,PMHCSPC4:      
                             PMHCSPD4,PMHCSPC5,PMHCSPD5,PMHCRCPT,PMHCADR1:      
                             PMHCADR2,PMHCADR3,PMHCADR4,PMHCADR5,PMHCADR6:      
                             PMHCPOST,PMHCSTAT,PMHCSEML,PMHCSTEL,PMHCPAGR:      
                             PMHCPAGN,PMHCAHP1,PMHCAHP2,PMHCAHP3,PMHCAHP4:      
                             PMHCAHP5,PMHCPRV1,PMHCPRV2,PMHCPRV3,PMHCPRV4:      
                             PMHCPRV5,PMHCHTEL,PMHCHAD1,PMHCHAD2,PMHCHAD3:      
                             PMHCHAD4,PMHCHAD5,PMHCHAD6,PMHCHPCD,PMHCHEML:      
                             PMHCDFAC,PMHCDLAC,PMHCYACC,PMHCATYP,PMHCHHCP:      
                             PMHCOSLV,PMHCHCST,PMHCHCSD,PMHCFAXN,PMHCHFXN:      
                             PMHCMOBN,PMHCCRDC,PMHCWAHC,PMHCMRBN,PMHCNHSN:      
                             PMHCUDF1,PMHCUDF2,PMHCUDF3,PMHCUDF4,PMHCUDF5:      
                             PMHCUYN1,PMHCUYN2,PMHCUYN3,PMHCUYN4,PMHCUYN5:      
                             PMHCINSC,PMHCIPLN,PMHCIDTF,PMHCIDTT,PMHCMPGN:      
                             PMHCAPCI,PMHCREGT,PMHCRGDF,PMHCRGDT,PMHCPRDF:      
                             PMHCPRDT,PMHCTSDF,PMHCTFDT,PMHCVISD,PMHCPRFC:      
                             PMHCPRFN,PMHCABNN,PMHCUPDF,PMHCPRMK,PMHCSTTS:      
                             PMHCDLMI,PMHCDLMA,PMHCCDTE,PMHCCTIM,PMHCWEBC:      
                             PMHCLUPD,PMHCLUPT,PMHCWEBU,PMHCSLGP,PMHCHOSS:      
                             PMHCPTYP,PMHCEXML,PMHCDEAC,PMHCCPER,PMHCAHC1:      
                             PMHCAHC2,PMHCAHC3,PMHCLDOC,PMHCSDAT,PMHCEDAT:      
                             PMHCNHTA,PMHCWWCN,PMHCWWCE,PMHCWWCS,PMHCSMD1:      
                             PMHCSMD2,PMHCSPAR                                  
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRPMHCP7  RESET     KEY30                                                       
          WRITE     PMSHCPA7,KEY30;PMHCHCPC,PMHCHCPT,PMHCTITL,PMHCGNAM,PMHCSNAM:
                                   PMHCINIT,PMHCGNDR,PMHCDTOB,PMHCSPC1,PMHCSPD1:
                                   PMHCSPC2,PMHCSPD2,PMHCSPC3,PMHCSPD3,PMHCSPC4:
                                   PMHCSPD4,PMHCSPC5,PMHCSPD5,PMHCRCPT,PMHCADR1:
                                   PMHCADR2,PMHCADR3,PMHCADR4,PMHCADR5,PMHCADR6:
                                   PMHCPOST,PMHCSTAT,PMHCSEML,PMHCSTEL,PMHCPAGR:
                                   PMHCPAGN,PMHCAHP1,PMHCAHP2,PMHCAHP3,PMHCAHP4:
                                   PMHCAHP5,PMHCPRV1,PMHCPRV2,PMHCPRV3,PMHCPRV4:
                                   PMHCPRV5,PMHCHTEL,PMHCHAD1,PMHCHAD2,PMHCHAD3:
                                   PMHCHAD4,PMHCHAD5,PMHCHAD6,PMHCHPCD,PMHCHEML:
                                   PMHCDFAC,PMHCDLAC,PMHCYACC,PMHCATYP,PMHCHHCP:
                                   PMHCOSLV,PMHCHCST,PMHCHCSD,PMHCFAXN,PMHCHFXN:
                                   PMHCMOBN,PMHCCRDC,PMHCWAHC,PMHCMRBN,PMHCNHSN:
                                   PMHCUDF1,PMHCUDF2,PMHCUDF3,PMHCUDF4,PMHCUDF5:
                                   PMHCUYN1,PMHCUYN2,PMHCUYN3,PMHCUYN4,PMHCUYN5:
                                   PMHCINSC,PMHCIPLN,PMHCIDTF,PMHCIDTT,PMHCMPGN:
                                   PMHCAPCI,PMHCREGT,PMHCRGDF,PMHCRGDT,PMHCPRDF:
                                   PMHCPRDT,PMHCTSDF,PMHCTFDT,PMHCVISD,PMHCPRFC:
                                   PMHCPRFN,PMHCABNN,PMHCUPDF,PMHCPRMK,PMHCSTTS:
                                   PMHCDLMI,PMHCDLMA,PMHCCDTE,PMHCCTIM,PMHCWEBC:
                                   PMHCLUPD,PMHCLUPT,PMHCWEBU,PMHCSLGP,PMHCHOSS:
                                   PMHCPTYP,PMHCEXML,PMHCDEAC,PMHCCPER,PMHCAHC1:
                                   PMHCAHC2,PMHCAHC3,PMHCLDOC,PMHCSDAT,PMHCEDAT:
                                   PMHCNHTA,PMHCWWCN,PMHCWWCE,PMHCWWCS,PMHCSMD1:
                                   PMHCSMD2,PMHCSPAR                            
          RETURN
.
DEPMHCP7  RESET     KEY30                                                       
          DELETE    PMSHCPA7,KEY30                                              
          RETURN
.
RLPMHCP7  RESET     KEY30                                                       
          MOVE      ZERO,OVRCD
          READL     PMSHCPA7,KEY30;PMHCHCPC,PMHCHCPT,PMHCTITL,PMHCGNAM,PMHCSNAM:
                                   PMHCINIT,PMHCGNDR,PMHCDTOB,PMHCSPC1,PMHCSPD1:
                                   PMHCSPC2,PMHCSPD2,PMHCSPC3,PMHCSPD3,PMHCSPC4:
                                   PMHCSPD4,PMHCSPC5,PMHCSPD5,PMHCRCPT,PMHCADR1:
                                   PMHCADR2,PMHCADR3,PMHCADR4,PMHCADR5,PMHCADR6:
                                   PMHCPOST,PMHCSTAT,PMHCSEML,PMHCSTEL,PMHCPAGR:
                                   PMHCPAGN,PMHCAHP1,PMHCAHP2,PMHCAHP3,PMHCAHP4:
                                   PMHCAHP5,PMHCPRV1,PMHCPRV2,PMHCPRV3,PMHCPRV4:
                                   PMHCPRV5,PMHCHTEL,PMHCHAD1,PMHCHAD2,PMHCHAD3:
                                   PMHCHAD4,PMHCHAD5,PMHCHAD6,PMHCHPCD,PMHCHEML:
                                   PMHCDFAC,PMHCDLAC,PMHCYACC,PMHCATYP,PMHCHHCP:
                                   PMHCOSLV,PMHCHCST,PMHCHCSD,PMHCFAXN,PMHCHFXN:
                                   PMHCMOBN,PMHCCRDC,PMHCWAHC,PMHCMRBN,PMHCNHSN:
                                   PMHCUDF1,PMHCUDF2,PMHCUDF3,PMHCUDF4,PMHCUDF5:
                                   PMHCUYN1,PMHCUYN2,PMHCUYN3,PMHCUYN4,PMHCUYN5:
                                   PMHCINSC,PMHCIPLN,PMHCIDTF,PMHCIDTT,PMHCMPGN:
                                   PMHCAPCI,PMHCREGT,PMHCRGDF,PMHCRGDT,PMHCPRDF:
                                   PMHCPRDT,PMHCTSDF,PMHCTFDT,PMHCVISD,PMHCPRFC:
                                   PMHCPRFN,PMHCABNN,PMHCUPDF,PMHCPRMK,PMHCSTTS:
                                   PMHCDLMI,PMHCDLMA,PMHCCDTE,PMHCCTIM,PMHCWEBC:
                                   PMHCLUPD,PMHCLUPT,PMHCWEBU,PMHCSLGP,PMHCHOSS:
                                   PMHCPTYP,PMHCEXML,PMHCDEAC,PMHCCPER,PMHCAHC1:
                                   PMHCAHC2,PMHCAHC3,PMHCLDOC,PMHCSDAT,PMHCEDAT:
                                   PMHCNHTA,PMHCWWCN,PMHCWWCE,PMHCWWCS,PMHCSMD1:
                                   PMHCSMD2,PMHCSPAR                            
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLPMHCP7  MOVE      ZERO,OVRCD                                                  
          READLKS   PMSHCPA7;PMHCHCPC,PMHCHCPT,PMHCTITL,PMHCGNAM,PMHCSNAM:      
                             PMHCINIT,PMHCGNDR,PMHCDTOB,PMHCSPC1,PMHCSPD1:      
                             PMHCSPC2,PMHCSPD2,PMHCSPC3,PMHCSPD3,PMHCSPC4:      
                             PMHCSPD4,PMHCSPC5,PMHCSPD5,PMHCRCPT,PMHCADR1:      
                             PMHCADR2,PMHCADR3,PMHCADR4,PMHCADR5,PMHCADR6:      
                             PMHCPOST,PMHCSTAT,PMHCSEML,PMHCSTEL,PMHCPAGR:      
                             PMHCPAGN,PMHCAHP1,PMHCAHP2,PMHCAHP3,PMHCAHP4:      
                             PMHCAHP5,PMHCPRV1,PMHCPRV2,PMHCPRV3,PMHCPRV4:      
                             PMHCPRV5,PMHCHTEL,PMHCHAD1,PMHCHAD2,PMHCHAD3:      
                             PMHCHAD4,PMHCHAD5,PMHCHAD6,PMHCHPCD,PMHCHEML:      
                             PMHCDFAC,PMHCDLAC,PMHCYACC,PMHCATYP,PMHCHHCP:      
                             PMHCOSLV,PMHCHCST,PMHCHCSD,PMHCFAXN,PMHCHFXN:      
                             PMHCMOBN,PMHCCRDC,PMHCWAHC,PMHCMRBN,PMHCNHSN:      
                             PMHCUDF1,PMHCUDF2,PMHCUDF3,PMHCUDF4,PMHCUDF5:      
                             PMHCUYN1,PMHCUYN2,PMHCUYN3,PMHCUYN4,PMHCUYN5:      
                             PMHCINSC,PMHCIPLN,PMHCIDTF,PMHCIDTT,PMHCMPGN:      
                             PMHCAPCI,PMHCREGT,PMHCRGDF,PMHCRGDT,PMHCPRDF:      
                             PMHCPRDT,PMHCTSDF,PMHCTFDT,PMHCVISD,PMHCPRFC:      
                             PMHCPRFN,PMHCABNN,PMHCUPDF,PMHCPRMK,PMHCSTTS:      
                             PMHCDLMI,PMHCDLMA,PMHCCDTE,PMHCCTIM,PMHCWEBC:      
                             PMHCLUPD,PMHCLUPT,PMHCWEBU,PMHCSLGP,PMHCHOSS:      
                             PMHCPTYP,PMHCEXML,PMHCDEAC,PMHCCPER,PMHCAHC1:      
                             PMHCAHC2,PMHCAHC3,PMHCLDOC,PMHCSDAT,PMHCEDAT:      
                             PMHCNHTA,PMHCWWCN,PMHCWWCE,PMHCWWCS,PMHCSMD1:      
                             PMHCSMD2,PMHCSPAR                                  
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLPMHCP7  MOVE      ZERO,OVRCD                                                  
          READLKP   PMSHCPA7;PMHCHCPC,PMHCHCPT,PMHCTITL,PMHCGNAM,PMHCSNAM:      
                             PMHCINIT,PMHCGNDR,PMHCDTOB,PMHCSPC1,PMHCSPD1:      
                             PMHCSPC2,PMHCSPD2,PMHCSPC3,PMHCSPD3,PMHCSPC4:      
                             PMHCSPD4,PMHCSPC5,PMHCSPD5,PMHCRCPT,PMHCADR1:      
                             PMHCADR2,PMHCADR3,PMHCADR4,PMHCADR5,PMHCADR6:      
                             PMHCPOST,PMHCSTAT,PMHCSEML,PMHCSTEL,PMHCPAGR:      
                             PMHCPAGN,PMHCAHP1,PMHCAHP2,PMHCAHP3,PMHCAHP4:      
                             PMHCAHP5,PMHCPRV1,PMHCPRV2,PMHCPRV3,PMHCPRV4:      
                             PMHCPRV5,PMHCHTEL,PMHCHAD1,PMHCHAD2,PMHCHAD3:      
                             PMHCHAD4,PMHCHAD5,PMHCHAD6,PMHCHPCD,PMHCHEML:      
                             PMHCDFAC,PMHCDLAC,PMHCYACC,PMHCATYP,PMHCHHCP:      
                             PMHCOSLV,PMHCHCST,PMHCHCSD,PMHCFAXN,PMHCHFXN:      
                             PMHCMOBN,PMHCCRDC,PMHCWAHC,PMHCMRBN,PMHCNHSN:      
                             PMHCUDF1,PMHCUDF2,PMHCUDF3,PMHCUDF4,PMHCUDF5:      
                             PMHCUYN1,PMHCUYN2,PMHCUYN3,PMHCUYN4,PMHCUYN5:      
                             PMHCINSC,PMHCIPLN,PMHCIDTF,PMHCIDTT,PMHCMPGN:      
                             PMHCAPCI,PMHCREGT,PMHCRGDF,PMHCRGDT,PMHCPRDF:      
                             PMHCPRDT,PMHCTSDF,PMHCTFDT,PMHCVISD,PMHCPRFC:      
                             PMHCPRFN,PMHCABNN,PMHCUPDF,PMHCPRMK,PMHCSTTS:      
                             PMHCDLMI,PMHCDLMA,PMHCCDTE,PMHCCTIM,PMHCWEBC:      
                             PMHCLUPD,PMHCLUPT,PMHCWEBU,PMHCSLGP,PMHCHOSS:      
                             PMHCPTYP,PMHCEXML,PMHCDEAC,PMHCCPER,PMHCAHC1:      
                             PMHCAHC2,PMHCAHC3,PMHCLDOC,PMHCSDAT,PMHCEDAT:      
                             PMHCNHTA,PMHCWWCN,PMHCWWCE,PMHCWWCS,PMHCSMD1:      
                             PMHCSMD2,PMHCSPAR                                  
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUPMHCP7  RESET     KEY30                                                       
          UNLOCK    PMSHCPA7                                                    
          RETURN
.
