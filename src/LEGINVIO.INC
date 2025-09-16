.*****************************************************************************
.*        LEGINVIO.INC                                                       *
.* Mods:                                                                     *
.*        18/01/2008  Steve Armstrong  CAR 159429                            *
.*                    Added UPLGINV5 for U/R merging                         *
.*****************************************************************************
.
RSLGINV5  RESET     KEY32
          READ      LEGINVR5,KEY32;;
          RETURN
.
RKLGINV5  MOVE      ZERO,OVRCD
          READKS    LEGINVR5;LPINVNO,LPINVDTE,LPINALPH,LDPINVAD:
                                  LDPINVUR,LDPINVSY,LPINVSIT,LPINVCLM,LPINVLOC:
                                  LPTIVAMN,LPTIVPAT,LPTIVHFD,LPTIVOTH,LPTIVJOU:
                                  LPTIVREB,LPINVCAN,LPTIVPCS,LPINVTYP,LPINVBLC:
                                  LPINVCAD,LPTINCMI,LDPTINED,LPINGSTA,LPINGSTJ:
                                  LPTINCMC,LPINPMD1,LPINPMD2,LPTINPMA,LPTINMVD:
                                  LPINVSPA
          GOTO      OVERCOND IF OVER
          MOVE      LDPINVSY,LPINVSYS
          MOVE      LDPINVAD,LQPINVAD
          MOVE      LQPINVAD,LPINVADM
          MOVE      LDPINVUR,LQPINVUR
          MOVE      LQPINVUR,LPINVUR
          MOVE      LDPTINED,LPTINEDS
.         
          MOVE      LPINVDTE,LSPINVDT
          MOVE      LPINVADM,LSPINVAD
          MOVE      LPINVCLM,LSPINVCL
          MOVE      LPINALPH,LSPINALP
.         
          CALL      MINVOLD
          RETURN
.
RPLGINV5  MOVE      ZERO,OVRCD
          READKP    LEGINVR5;LPINVNO,LPINVDTE,LPINALPH,LDPINVAD:
                                  LDPINVUR,LDPINVSY,LPINVSIT,LPINVCLM,LPINVLOC:
                                  LPTIVAMN,LPTIVPAT,LPTIVHFD,LPTIVOTH,LPTIVJOU:
                                  LPTIVREB,LPINVCAN,LPTIVPCS,LPINVTYP,LPINVBLC:
                                  LPINVCAD,LPTINCMI,LDPTINED,LPINGSTA,LPINGSTJ:
                                  LPTINCMC,LPINPMD1,LPINPMD2,LPTINPMA,LPTINMVD:
                                  LPINVSPA
          GOTO      OVERCOND IF OVER
          MOVE      LDPINVSY,LPINVSYS
          MOVE      LDPINVAD,LQPINVAD
          MOVE      LQPINVAD,LPINVADM
          MOVE      LDPINVUR,LQPINVUR
          MOVE      LQPINVUR,LPINVUR
          MOVE      LDPTINED,LPTINEDS
.
          MOVE      LPINVDTE,LSPINVDT
          MOVE      LPINVADM,LSPINVAD
          MOVE      LPINVCLM,LSPINVCL
          MOVE      LPINALPH,LSPINALP
.
          CALL      MINVOLD
          RETURN
.
UPLGINV5  MOVE      LPINVSYS,LDPINVSY
          MOVE      LPTINEDS,LDPTINED
          MOVE      LPINVUR,LDPINVUR
          MOVE      LPINVADM,LDPINVAD
          UPDATE    LEGINVR5;LPINVNO,LPINVDTE,LPINALPH,LDPINVAD:
                                  LDPINVUR,LDPINVSY,LPINVSIT,LPINVCLM,LPINVLOC:
                                  LPTIVAMN,LPTIVPAT,LPTIVHFD,LPTIVOTH,LPTIVJOU:
                                  LPTIVREB,LPINVCAN,LPTIVPCS,LPINVTYP,LPINVBLC:
                                  LPINVCAD,LPTINCMI,LDPTINED,LPINGSTA,LPINGSTJ:
                                  LPTINCMC,LPINPMD1,LPINPMD2,LPTINPMA,LPTINMVD:
                                  LPINVSPA
          RETURN
.
RSLGINV4  RESET     KEY32
          READ      LEGINVR4,KEY32;;
          RETURN
.
RALGINV4  RESET     KEY32
          MOVE      ZERO,OVRCD
          READ      LEGINVR4,KEY32;ANS
          GOTO      OVERCOND IF OVER
          RETURN
.
RDLGINV4  RESET     KEY32
          MOVE      ZERO,OVRCD
          READ      LEGINVR4,KEY32;LPINVNO,LPINVDTE,LPINALPH,LDPINVAD:
                                  LDPINVUR,LDPINVSY,LPINVSIT,LPINVCLM,LPINVLOC:
                                  LPTIVAMN,LPTIVPAT,LPTIVHFD,LPTIVOTH,LPTIVJOU:
                                  LPTIVREB,LPINVCAN,LPTIVPCS,LPINVTYP,LPINVBLC:
                                  LPINVCAD,LPTINCMI,LDPTINED,LPINGSTA,LPINGSTJ:
                                  LPTINCMC,LPINPMD1,LPINPMD2,LPTINPMA,LPTINMVD:
                                  LPINVSPA
          GOTO      OVERCOND IF OVER
          MOVE      LDPINVSY,LPINVSYS
          MOVE      LDPINVAD,LQPINVAD
          MOVE      LQPINVAD,LPINVADM
          MOVE      LDPINVUR,LQPINVUR
          MOVE      LQPINVUR,LPINVUR
          MOVE      LDPTINED,LPTINEDS
.         
          MOVE      LPINVDTE,LSPINVDT
          MOVE      LPINVADM,LSPINVAD
          MOVE      LPINVCLM,LSPINVCL
          MOVE      LPINALPH,LSPINALP
.         
          CALL      MINVOLD
          RETURN
.
RKLGINV4  MOVE      ZERO,OVRCD
          READKS    LEGINVR4;LPINVNO,LPINVDTE,LPINALPH,LDPINVAD:
                                  LDPINVUR,LDPINVSY,LPINVSIT,LPINVCLM,LPINVLOC:
                                  LPTIVAMN,LPTIVPAT,LPTIVHFD,LPTIVOTH,LPTIVJOU:
                                  LPTIVREB,LPINVCAN,LPTIVPCS,LPINVTYP,LPINVBLC:
                                  LPINVCAD,LPTINCMI,LDPTINED,LPINGSTA,LPINGSTJ:
                                  LPTINCMC,LPINPMD1,LPINPMD2,LPTINPMA,LPTINMVD:
                                  LPINVSPA
          GOTO      OVERCOND IF OVER
          MOVE      LDPINVSY,LPINVSYS
          MOVE      LDPINVAD,LQPINVAD
          MOVE      LQPINVAD,LPINVADM
          MOVE      LDPINVUR,LQPINVUR
          MOVE      LQPINVUR,LPINVUR
          MOVE      LDPTINED,LPTINEDS
.         
          MOVE      LPINVDTE,LSPINVDT
          MOVE      LPINVADM,LSPINVAD
          MOVE      LPINVCLM,LSPINVCL
          MOVE      LPINALPH,LSPINALP
.         
          CALL      MINVOLD
          RETURN
.
RPLGINV4  MOVE      ZERO,OVRCD
          READKP    LEGINVR4;LPINVNO,LPINVDTE,LPINALPH,LDPINVAD:
                                  LDPINVUR,LDPINVSY,LPINVSIT,LPINVCLM,LPINVLOC:
                                  LPTIVAMN,LPTIVPAT,LPTIVHFD,LPTIVOTH,LPTIVJOU:
                                  LPTIVREB,LPINVCAN,LPTIVPCS,LPINVTYP,LPINVBLC:
                                  LPINVCAD,LPTINCMI,LDPTINED,LPINGSTA,LPINGSTJ:
                                  LPTINCMC,LPINPMD1,LPINPMD2,LPTINPMA,LPTINMVD:
                                  LPINVSPA
          GOTO      OVERCOND IF OVER
          MOVE      LDPINVSY,LPINVSYS
          MOVE      LDPINVAD,LQPINVAD
          MOVE      LQPINVAD,LPINVADM
          MOVE      LDPINVUR,LQPINVUR
          MOVE      LQPINVUR,LPINVUR
          MOVE      LDPTINED,LPTINEDS
.         
          MOVE      LPINVDTE,LSPINVDT
          MOVE      LPINVADM,LSPINVAD
          MOVE      LPINVCLM,LSPINVCL
          MOVE      LPINALPH,LSPINALP
.         
          CALL      MINVOLD
          RETURN
.
RSLGINV3  RESET     KEY16
          READ      LEGINVR3,KEY16;;
          RETURN
.
RALGINV3  RESET     KEY16
          MOVE      ZERO,OVRCD
          READ      LEGINVR3,KEY16;ANS
          GOTO      OVERCOND IF OVER
          RETURN
.
RDLGINV3  RESET     KEY16
          MOVE      ZERO,OVRCD
          READ      LEGINVR3,KEY16;LPINVNO,LPINVDTE,LPINALPH,LDPINVAD:
                                  LDPINVUR,LDPINVSY,LPINVSIT,LPINVCLM,LPINVLOC:
                                  LPTIVAMN,LPTIVPAT,LPTIVHFD,LPTIVOTH,LPTIVJOU:
                                  LPTIVREB,LPINVCAN,LPTIVPCS,LPINVTYP,LPINVBLC:
                                  LPINVCAD,LPTINCMI,LDPTINED,LPINGSTA,LPINGSTJ:
                                  LPTINCMC,LPINPMD1,LPINPMD2,LPTINPMA,LPTINMVD:
                                  LPINVSPA
          GOTO      OVERCOND IF OVER
          MOVE      LDPINVSY,LPINVSYS
          MOVE      LDPINVAD,LQPINVAD
          MOVE      LQPINVAD,LPINVADM
          MOVE      LDPINVUR,LQPINVUR
          MOVE      LQPINVUR,LPINVUR
          MOVE      LDPTINED,LPTINEDS
.         
          MOVE      LPINVDTE,LSPINVDT
          MOVE      LPINVADM,LSPINVAD
          MOVE      LPINVCLM,LSPINVCL
          MOVE      LPINALPH,LSPINALP
.         
          CALL      MINVOLD
          RETURN
.
RKLGINV3  MOVE      ZERO,OVRCD
          READKS    LEGINVR3;LPINVNO,LPINVDTE,LPINALPH,LDPINVAD:
                                  LDPINVUR,LDPINVSY,LPINVSIT,LPINVCLM,LPINVLOC:
                                  LPTIVAMN,LPTIVPAT,LPTIVHFD,LPTIVOTH,LPTIVJOU:
                                  LPTIVREB,LPINVCAN,LPTIVPCS,LPINVTYP,LPINVBLC:
                                  LPINVCAD,LPTINCMI,LDPTINED,LPINGSTA,LPINGSTJ:
                                  LPTINCMC,LPINPMD1,LPINPMD2,LPTINPMA,LPTINMVD:
                                  LPINVSPA
          GOTO      OVERCOND IF OVER
          MOVE      LDPINVSY,LPINVSYS
          MOVE      LDPINVAD,LQPINVAD
          MOVE      LQPINVAD,LPINVADM
          MOVE      LDPINVUR,LQPINVUR
          MOVE      LQPINVUR,LPINVUR
          MOVE      LDPTINED,LPTINEDS
.         
          MOVE      LPINVDTE,LSPINVDT
          MOVE      LPINVADM,LSPINVAD
          MOVE      LPINVCLM,LSPINVCL
          MOVE      LPINALPH,LSPINALP
.         
          CALL      MINVOLD
          RETURN
.
RPLGINV3  MOVE      ZERO,OVRCD
          READKP    LEGINVR3;LPINVNO,LPINVDTE,LPINALPH,LDPINVAD:
                                  LDPINVUR,LDPINVSY,LPINVSIT,LPINVCLM,LPINVLOC:
                                  LPTIVAMN,LPTIVPAT,LPTIVHFD,LPTIVOTH,LPTIVJOU:
                                  LPTIVREB,LPINVCAN,LPTIVPCS,LPINVTYP,LPINVBLC:
                                  LPINVCAD,LPTINCMI,LDPTINED,LPINGSTA,LPINGSTJ:
                                  LPTINCMC,LPINPMD1,LPINPMD2,LPTINPMA,LPTINMVD:
                                  LPINVSPA
          GOTO      OVERCOND IF OVER
          MOVE      LDPINVSY,LPINVSYS
          MOVE      LDPINVAD,LQPINVAD
          MOVE      LQPINVAD,LPINVADM
          MOVE      LDPINVUR,LQPINVUR
          MOVE      LQPINVUR,LPINVUR
          MOVE      LDPTINED,LPTINEDS
.         
          MOVE      LPINVDTE,LSPINVDT
          MOVE      LPINVADM,LSPINVAD
          MOVE      LPINVCLM,LSPINVCL
          MOVE      LPINALPH,LSPINALP
.         
          CALL      MINVOLD
          RETURN
.
RSLGINV2  RESET     KEY16
          READ      LEGINVR2,KEY16;;
          RETURN
.
RALGINV2  RESET     KEY16
          MOVE      ZERO,OVRCD
          READ      LEGINVR2,KEY16;ANS
          GOTO      OVERCOND IF OVER
          RETURN
.
RDLGINV2  RESET     KEY16
          MOVE      ZERO,OVRCD
          READ      LEGINVR2,KEY16;LPINVNO,LPINVDTE,LPINALPH,LDPINVAD:
                                  LDPINVUR,LDPINVSY,LPINVSIT,LPINVCLM,LPINVLOC:
                                  LPTIVAMN,LPTIVPAT,LPTIVHFD,LPTIVOTH,LPTIVJOU:
                                  LPTIVREB,LPINVCAN,LPTIVPCS,LPINVTYP,LPINVBLC:
                                  LPINVCAD,LPTINCMI,LDPTINED,LPINGSTA,LPINGSTJ:
                                  LPTINCMC,LPINPMD1,LPINPMD2,LPTINPMA,LPTINMVD:
                                  LPINVSPA
          GOTO      OVERCOND IF OVER
          MOVE      LDPINVSY,LPINVSYS
          MOVE      LDPINVAD,LQPINVAD
          MOVE      LQPINVAD,LPINVADM
          MOVE      LDPINVUR,LQPINVUR
          MOVE      LQPINVUR,LPINVUR
          MOVE      LDPTINED,LPTINEDS
.         
          MOVE      LPINVDTE,LSPINVDT
          MOVE      LPINVADM,LSPINVAD
          MOVE      LPINVCLM,LSPINVCL
          MOVE      LPINALPH,LSPINALP
.         
          CALL      MINVOLD
          RETURN
.
RKLGINV2  MOVE      ZERO,OVRCD
          READKS    LEGINVR2;LPINVNO,LPINVDTE,LPINALPH,LDPINVAD:
                                  LDPINVUR,LDPINVSY,LPINVSIT,LPINVCLM,LPINVLOC:
                                  LPTIVAMN,LPTIVPAT,LPTIVHFD,LPTIVOTH,LPTIVJOU:
                                  LPTIVREB,LPINVCAN,LPTIVPCS,LPINVTYP,LPINVBLC:
                                  LPINVCAD,LPTINCMI,LDPTINED,LPINGSTA,LPINGSTJ:
                                  LPTINCMC,LPINPMD1,LPINPMD2,LPTINPMA,LPTINMVD:
                                  LPINVSPA
          GOTO      OVERCOND IF OVER
          MOVE      LDPINVSY,LPINVSYS
          MOVE      LDPINVAD,LQPINVAD
          MOVE      LQPINVAD,LPINVADM
          MOVE      LDPINVUR,LQPINVUR
          MOVE      LQPINVUR,LPINVUR
          MOVE      LDPTINED,LPTINEDS
.         
          MOVE      LPINVDTE,LSPINVDT
          MOVE      LPINVADM,LSPINVAD
          MOVE      LPINVCLM,LSPINVCL
          MOVE      LPINALPH,LSPINALP
.         
          CALL      MINVOLD
          RETURN
.
RPLGINV2  MOVE      ZERO,OVRCD
          READKP    LEGINVR2;LPINVNO,LPINVDTE,LPINALPH,LDPINVAD:
                                  LDPINVUR,LDPINVSY,LPINVSIT,LPINVCLM,LPINVLOC:
                                  LPTIVAMN,LPTIVPAT,LPTIVHFD,LPTIVOTH,LPTIVJOU:
                                  LPTIVREB,LPINVCAN,LPTIVPCS,LPINVTYP,LPINVBLC:
                                  LPINVCAD,LPTINCMI,LDPTINED,LPINGSTA,LPINGSTJ:
                                  LPTINCMC,LPINPMD1,LPINPMD2,LPTINPMA,LPTINMVD:
                                  LPINVSPA
          GOTO      OVERCOND IF OVER
          MOVE      LDPINVSY,LPINVSYS
          MOVE      LDPINVAD,LQPINVAD
          MOVE      LQPINVAD,LPINVADM
          MOVE      LDPINVUR,LQPINVUR
          MOVE      LQPINVUR,LPINVUR
          MOVE      LDPTINED,LPTINEDS
.         
          MOVE      LPINVDTE,LSPINVDT
          MOVE      LPINVADM,LSPINVAD
          MOVE      LPINVCLM,LSPINVCL
          MOVE      LPINALPH,LSPINALP
.         
          CALL      MINVOLD
          RETURN
.
RSLGINV1  RESET     KEY8
          READ      LEGINVR1,KEY8;;
          RETURN
.
RALGINV1  RESET     KEY8
          MOVE      ZERO,OVRCD
          READ      LEGINVR1,KEY8;ANS
          GOTO      OVERCOND IF OVER
          RETURN
.
RDLGINV1  RESET     KEY8
          MOVE      ZERO,OVRCD
          READ      LEGINVR1,KEY8;LPINVNO,LPINVDTE,LPINALPH,LDPINVAD:
                                  LDPINVUR,LDPINVSY,LPINVSIT,LPINVCLM,LPINVLOC:
                                  LPTIVAMN,LPTIVPAT,LPTIVHFD,LPTIVOTH,LPTIVJOU:
                                  LPTIVREB,LPINVCAN,LPTIVPCS,LPINVTYP,LPINVBLC:
                                  LPINVCAD,LPTINCMI,LDPTINED,LPINGSTA,LPINGSTJ:
                                  LPTINCMC,LPINPMD1,LPINPMD2,LPTINPMA,LPTINMVD:
                                  LPINVSPA
          GOTO      OVERCOND IF OVER
          MOVE      LDPINVSY,LPINVSYS
          MOVE      LDPINVAD,LQPINVAD
          MOVE      LQPINVAD,LPINVADM
          MOVE      LDPINVUR,LQPINVUR
          MOVE      LQPINVUR,LPINVUR
          MOVE      LDPTINED,LPTINEDS
.         
          MOVE      LPINVDTE,LSPINVDT
          MOVE      LPINVADM,LSPINVAD
          MOVE      LPINVCLM,LSPINVCL
          MOVE      LPINALPH,LSPINALP
.         
          CALL      MINVOLD
          RETURN
.
RKLGINV1  MOVE      ZERO,OVRCD
          READKS    LEGINVR1;LPINVNO,LPINVDTE,LPINALPH,LDPINVAD:
                                  LDPINVUR,LDPINVSY,LPINVSIT,LPINVCLM,LPINVLOC:
                                  LPTIVAMN,LPTIVPAT,LPTIVHFD,LPTIVOTH,LPTIVJOU:
                                  LPTIVREB,LPINVCAN,LPTIVPCS,LPINVTYP,LPINVBLC:
                                  LPINVCAD,LPTINCMI,LDPTINED,LPINGSTA,LPINGSTJ:
                                  LPTINCMC,LPINPMD1,LPINPMD2,LPTINPMA,LPTINMVD:
                                  LPINVSPA
          GOTO      OVERCOND IF OVER
          MOVE      LDPINVSY,LPINVSYS
          MOVE      LDPINVAD,LQPINVAD
          MOVE      LQPINVAD,LPINVADM
          MOVE      LDPINVUR,LQPINVUR
          MOVE      LQPINVUR,LPINVUR
          MOVE      LDPTINED,LPTINEDS
.         
          MOVE      LPINVDTE,LSPINVDT
          MOVE      LPINVADM,LSPINVAD
          MOVE      LPINVCLM,LSPINVCL
          MOVE      LPINALPH,LSPINALP
.         
          CALL      MINVOLD
          RETURN
.
RPLGINV1  MOVE      ZERO,OVRCD
          READKP    LEGINVR1;LPINVNO,LPINVDTE,LPINALPH,LDPINVAD:
                                  LDPINVUR,LDPINVSY,LPINVSIT,LPINVCLM,LPINVLOC:
                                  LPTIVAMN,LPTIVPAT,LPTIVHFD,LPTIVOTH,LPTIVJOU:
                                  LPTIVREB,LPINVCAN,LPTIVPCS,LPINVTYP,LPINVBLC:
                                  LPINVCAD,LPTINCMI,LDPTINED,LPINGSTA,LPINGSTJ:
                                  LPTINCMC,LPINPMD1,LPINPMD2,LPTINPMA,LPTINMVD:
                                  LPINVSPA
          GOTO      OVERCOND IF OVER
          MOVE      LDPINVSY,LPINVSYS
          MOVE      LDPINVAD,LQPINVAD
          MOVE      LQPINVAD,LPINVADM
          MOVE      LDPINVUR,LQPINVUR
          MOVE      LQPINVUR,LPINVUR
          MOVE      LDPTINED,LPTINEDS
.         
          MOVE      LPINVDTE,LSPINVDT
          MOVE      LPINVADM,LSPINVAD
          MOVE      LPINVCLM,LSPINVCL
          MOVE      LPINALPH,LSPINALP
.         
          CALL      MINVOLD
          RETURN
.
MINVOLD   MOVE      LPTIVAMN,LPINVAMT
          MOVE      LPTIVPAT,LPINVPAT
          MOVE      LPTIVHFD,LPINVHFD
          MOVE      LPTIVOTH,LPINVOTH
          MOVE      LPTIVJOU,LPINVJOU
          MOVE      LPTIVREB,LPINVREB
          MOVE      LPTIVPCS,LPINVPCS
          RETURN
.
