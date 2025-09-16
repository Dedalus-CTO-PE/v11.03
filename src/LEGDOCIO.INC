RSLGDOC1  RESET     KEY6
          READ      LEGDOCT1,KEY6;;
          RETURN
.
RALGDOC1  RESET     KEY6
          MOVE      ZERO,OVRCD
          READ      LEGDOCT1,KEY6;ANS
          GOTO      OVERCOND IF OVER
          RETURN
.
RDLGDOC1  RESET     KEY6
          MOVE      ZERO,OVRCD
          READ      LEGDOCT1,KEY6;LDCODE,LDTITL,LDGNAME,LDSNAME:
                                  LDRTYPE,LDRNAME,LDSADD1,LDSADD2,LDSADD3:
                                  LDSADD4,LDSPOST,LPDOSEML,LDTELES,LDTELEP:
                                  LDPAGER,LDASSOC1,LDASSOC2,LDASSOC3,LDASSOC4:
                                  LDASSOC5,LDPROV,LDTELEH,LDHADD1,LDHADD2:
                                  LDHADD3,LDHADD4,LDHPOST,LPDOHEML,LDAFIRST:
                                  LDALAST,LDAYEARS,LDACCRED,LDRTYPE2,LDRTYPE3:
                                  LDRTYPE4,LDRTYPE5,LDFSPARE,LDBIRTH,LDHCSCOD:
                                  LDALEVEL,LDRSTAT,LPDOFAXN,LPDOHFAX,LPDOMOBL:
                                  LPDOGLCC,LPDOWHDP,LPDOMREG,LPDONHSN,LLUPDDTE:
                                  LLUPDTME,LPDOUDF1,LPDOUDF2,LPDOUDF3,LPDOUDF4:
                                  LPDOUDF5,LPDOINSC,LPDOINSN,LPDOINSF,LPDOINST:
                                  LPDOREGN,LPDOREGF,LPDOREGT,LPDOVISA,LPDOCOMT:
                                  LPDOPREF,LPDOABNN,LPDODINA,LPDODACT,LPDODACO:
                                  LPDOPRO2,LPDOPRO3,LPDOPRO4,LPDOPRO5,LDASPARE
          GOTO      OVERCOND IF OVER
          MOVE      LDSNAME,LSDSNAME
          RETURN
.
RKLGDOC1  MOVE      ZERO,OVRCD
          READKS    LEGDOCT1;LDCODE,LDTITL,LDGNAME,LDSNAME:
                                  LDRTYPE,LDRNAME,LDSADD1,LDSADD2,LDSADD3:
                                  LDSADD4,LDSPOST,LPDOSEML,LDTELES,LDTELEP:
                                  LDPAGER,LDASSOC1,LDASSOC2,LDASSOC3,LDASSOC4:
                                  LDASSOC5,LDPROV,LDTELEH,LDHADD1,LDHADD2:
                                  LDHADD3,LDHADD4,LDHPOST,LPDOHEML,LDAFIRST:
                                  LDALAST,LDAYEARS,LDACCRED,LDRTYPE2,LDRTYPE3:
                                  LDRTYPE4,LDRTYPE5,LDFSPARE,LDBIRTH,LDHCSCOD:
                                  LDALEVEL,LDRSTAT,LPDOFAXN,LPDOHFAX,LPDOMOBL:
                                  LPDOGLCC,LPDOWHDP,LPDOMREG,LPDONHSN,LLUPDDTE:
                                  LLUPDTME,LPDOUDF1,LPDOUDF2,LPDOUDF3,LPDOUDF4:
                                  LPDOUDF5,LPDOINSC,LPDOINSN,LPDOINSF,LPDOINST:
                                  LPDOREGN,LPDOREGF,LPDOREGT,LPDOVISA,LPDOCOMT:
                                  LPDOPREF,LPDOABNN,LPDODINA,LPDODACT,LPDODACO:
                                  LPDOPRO2,LPDOPRO3,LPDOPRO4,LPDOPRO5,LDASPARE
          GOTO      OVERCOND IF OVER
          MOVE      LDSNAME,LSDSNAME
          RETURN
.
RPLGDOC1  MOVE      ZERO,OVRCD
          READKP    LEGDOCT1;LDCODE,LDTITL,LDGNAME,LDSNAME:
                                  LDRTYPE,LDRNAME,LDSADD1,LDSADD2,LDSADD3:
                                  LDSADD4,LDSPOST,LPDOSEML,LDTELES,LDTELEP:
                                  LDPAGER,LDASSOC1,LDASSOC2,LDASSOC3,LDASSOC4:
                                  LDASSOC5,LDPROV,LDTELEH,LDHADD1,LDHADD2:
                                  LDHADD3,LDHADD4,LDHPOST,LPDOHEML,LDAFIRST:
                                  LDALAST,LDAYEARS,LDACCRED,LDRTYPE2,LDRTYPE3:
                                  LDRTYPE4,LDRTYPE5,LDFSPARE,LDBIRTH,LDHCSCOD:
                                  LDALEVEL,LDRSTAT,LPDOFAXN,LPDOHFAX,LPDOMOBL:
                                  LPDOGLCC,LPDOWHDP,LPDOMREG,LPDONHSN,LLUPDDTE:
                                  LLUPDTME,LPDOUDF1,LPDOUDF2,LPDOUDF3,LPDOUDF4:
                                  LPDOUDF5,LPDOINSC,LPDOINSN,LPDOINSF,LPDOINST:
                                  LPDOREGN,LPDOREGF,LPDOREGT,LPDOVISA,LPDOCOMT:
                                  LPDOPREF,LPDOABNN,LPDODINA,LPDODACT,LPDODACO:
                                  LPDOPRO2,LPDOPRO3,LPDOPRO4,LPDOPRO5,LDASPARE
          GOTO      OVERCOND IF OVER
          MOVE      LDSNAME,LSDSNAME
          RETURN
.
RSLGDOC2  RESET     KEY26
          READ      LEGDOCT2,KEY26;;
          RETURN
.
RALGDOC2  RESET     KEY26
          MOVE      ZERO,OVRCD
          READ      LEGDOCT2,KEY26;ANS
          GOTO      OVERCOND IF OVER
          RETURN
.
RDLGDOC2  RESET     KEY26
          MOVE      ZERO,OVRCD
          READ      LEGDOCT2,KEY26;LDCODE,LDTITL,LDGNAME,LDSNAME:
                                  LDRTYPE,LDRNAME,LDSADD1,LDSADD2,LDSADD3:
                                  LDSADD4,LDSPOST,LPDOSEML,LDTELES,LDTELEP:
                                  LDPAGER,LDASSOC1,LDASSOC2,LDASSOC3,LDASSOC4:
                                  LDASSOC5,LDPROV,LDTELEH,LDHADD1,LDHADD2:
                                  LDHADD3,LDHADD4,LDHPOST,LPDOHEML,LDAFIRST:
                                  LDALAST,LDAYEARS,LDACCRED,LDRTYPE2,LDRTYPE3:
                                  LDRTYPE4,LDRTYPE5,LDFSPARE,LDBIRTH,LDHCSCOD:
                                  LDALEVEL,LDRSTAT,LPDOFAXN,LPDOHFAX,LPDOMOBL:
                                  LPDOGLCC,LPDOWHDP,LPDOMREG,LPDONHSN,LLUPDDTE:
                                  LLUPDTME,LPDOUDF1,LPDOUDF2,LPDOUDF3,LPDOUDF4:
                                  LPDOUDF5,LPDOINSC,LPDOINSN,LPDOINSF,LPDOINST:
                                  LPDOREGN,LPDOREGF,LPDOREGT,LPDOVISA,LPDOCOMT:
                                  LPDOPREF,LPDOABNN,LPDODINA,LPDODACT,LPDODACO:
                                  LPDOPRO2,LPDOPRO3,LPDOPRO4,LPDOPRO5,LDASPARE
          GOTO      OVERCOND IF OVER
          RETURN
.
RKLGDOC2  MOVE      ZERO,OVRCD
          READKS    LEGDOCT2;LDCODE,LDTITL,LDGNAME,LDSNAME:
                                  LDRTYPE,LDRNAME,LDSADD1,LDSADD2,LDSADD3:
                                  LDSADD4,LDSPOST,LPDOSEML,LDTELES,LDTELEP:
                                  LDPAGER,LDASSOC1,LDASSOC2,LDASSOC3,LDASSOC4:
                                  LDASSOC5,LDPROV,LDTELEH,LDHADD1,LDHADD2:
                                  LDHADD3,LDHADD4,LDHPOST,LPDOHEML,LDAFIRST:
                                  LDALAST,LDAYEARS,LDACCRED,LDRTYPE2,LDRTYPE3:
                                  LDRTYPE4,LDRTYPE5,LDFSPARE,LDBIRTH,LDHCSCOD:
                                  LDALEVEL,LDRSTAT,LPDOFAXN,LPDOHFAX,LPDOMOBL:
                                  LPDOGLCC,LPDOWHDP,LPDOMREG,LPDONHSN,LLUPDDTE:
                                  LLUPDTME,LPDOUDF1,LPDOUDF2,LPDOUDF3,LPDOUDF4:
                                  LPDOUDF5,LPDOINSC,LPDOINSN,LPDOINSF,LPDOINST:
                                  LPDOREGN,LPDOREGF,LPDOREGT,LPDOVISA,LPDOCOMT:
                                  LPDOPREF,LPDOABNN,LPDODINA,LPDODACT,LPDODACO:
                                  LPDOPRO2,LPDOPRO3,LPDOPRO4,LPDOPRO5,LDASPARE
          GOTO      OVERCOND IF OVER
          RETURN
.
RPLGDOC2  MOVE      ZERO,OVRCD
          READKP    LEGDOCT2;LDCODE,LDTITL,LDGNAME,LDSNAME:
                                  LDRTYPE,LDRNAME,LDSADD1,LDSADD2,LDSADD3:
                                  LDSADD4,LDSPOST,LPDOSEML,LDTELES,LDTELEP:
                                  LDPAGER,LDASSOC1,LDASSOC2,LDASSOC3,LDASSOC4:
                                  LDASSOC5,LDPROV,LDTELEH,LDHADD1,LDHADD2:
                                  LDHADD3,LDHADD4,LDHPOST,LPDOHEML,LDAFIRST:
                                  LDALAST,LDAYEARS,LDACCRED,LDRTYPE2,LDRTYPE3:
                                  LDRTYPE4,LDRTYPE5,LDFSPARE,LDBIRTH,LDHCSCOD:
                                  LDALEVEL,LDRSTAT,LPDOFAXN,LPDOHFAX,LPDOMOBL:
                                  LPDOGLCC,LPDOWHDP,LPDOMREG,LPDONHSN,LLUPDDTE:
                                  LLUPDTME,LPDOUDF1,LPDOUDF2,LPDOUDF3,LPDOUDF4:
                                  LPDOUDF5,LPDOINSC,LPDOINSN,LPDOINSF,LPDOINST:
                                  LPDOREGN,LPDOREGF,LPDOREGT,LPDOVISA,LPDOCOMT:
                                  LPDOPREF,LPDOABNN,LPDODINA,LPDODACT,LPDODACO:
                                  LPDOPRO2,LPDOPRO3,LPDOPRO4,LPDOPRO5,LDASPARE
          GOTO      OVERCOND IF OVER
          RETURN
.
RSLGDOC3  RESET     KEY29
          READ      LEGDOCT3,KEY29;;
          RETURN
.
RALGDOC3  RESET     KEY29
          MOVE      ZERO,OVRCD
          READ      LEGDOCT3,KEY29;ANS
          GOTO      OVERCOND IF OVER
          RETURN
.
RDLGDOC3  RESET     KEY29
          MOVE      ZERO,OVRCD
          READ      LEGDOCT3,KEY29;LDCODE,LDTITL,LDGNAME,LDSNAME:
                                  LDRTYPE,LDRNAME,LDSADD1,LDSADD2,LDSADD3:
                                  LDSADD4,LDSPOST,LPDOSEML,LDTELES,LDTELEP:
                                  LDPAGER,LDASSOC1,LDASSOC2,LDASSOC3,LDASSOC4:
                                  LDASSOC5,LDPROV,LDTELEH,LDHADD1,LDHADD2:
                                  LDHADD3,LDHADD4,LDHPOST,LPDOHEML,LDAFIRST:
                                  LDALAST,LDAYEARS,LDACCRED,LDRTYPE2,LDRTYPE3:
                                  LDRTYPE4,LDRTYPE5,LDFSPARE,LDBIRTH,LDHCSCOD:
                                  LDALEVEL,LDRSTAT,LPDOFAXN,LPDOHFAX,LPDOMOBL:
                                  LPDOGLCC,LPDOWHDP,LPDOMREG,LPDONHSN,LLUPDDTE:
                                  LLUPDTME,LPDOUDF1,LPDOUDF2,LPDOUDF3,LPDOUDF4:
                                  LPDOUDF5,LPDOINSC,LPDOINSN,LPDOINSF,LPDOINST:
                                  LPDOREGN,LPDOREGF,LPDOREGT,LPDOVISA,LPDOCOMT:
                                  LPDOPREF,LPDOABNN,LPDODINA,LPDODACT,LPDODACO:
                                  LPDOPRO2,LPDOPRO3,LPDOPRO4,LPDOPRO5,LDASPARE
          GOTO      OVERCOND IF OVER
          RETURN
.
RKLGDOC3  MOVE      ZERO,OVRCD
          READKS    LEGDOCT3;LDCODE,LDTITL,LDGNAME,LDSNAME:
                                  LDRTYPE,LDRNAME,LDSADD1,LDSADD2,LDSADD3:
                                  LDSADD4,LDSPOST,LPDOSEML,LDTELES,LDTELEP:
                                  LDPAGER,LDASSOC1,LDASSOC2,LDASSOC3,LDASSOC4:
                                  LDASSOC5,LDPROV,LDTELEH,LDHADD1,LDHADD2:
                                  LDHADD3,LDHADD4,LDHPOST,LPDOHEML,LDAFIRST:
                                  LDALAST,LDAYEARS,LDACCRED,LDRTYPE2,LDRTYPE3:
                                  LDRTYPE4,LDRTYPE5,LDFSPARE,LDBIRTH,LDHCSCOD:
                                  LDALEVEL,LDRSTAT,LPDOFAXN,LPDOHFAX,LPDOMOBL:
                                  LPDOGLCC,LPDOWHDP,LPDOMREG,LPDONHSN,LLUPDDTE:
                                  LLUPDTME,LPDOUDF1,LPDOUDF2,LPDOUDF3,LPDOUDF4:
                                  LPDOUDF5,LPDOINSC,LPDOINSN,LPDOINSF,LPDOINST:
                                  LPDOREGN,LPDOREGF,LPDOREGT,LPDOVISA,LPDOCOMT:
                                  LPDOPREF,LPDOABNN,LPDODINA,LPDODACT,LPDODACO:
                                  LPDOPRO2,LPDOPRO3,LPDOPRO4,LPDOPRO5,LDASPARE
          GOTO      OVERCOND IF OVER
          RETURN
.
RPLGDOC3  MOVE      ZERO,OVRCD
          READKP    LEGDOCT3;LDCODE,LDTITL,LDGNAME,LDSNAME:
                                  LDRTYPE,LDRNAME,LDSADD1,LDSADD2,LDSADD3:
                                  LDSADD4,LDSPOST,LPDOSEML,LDTELES,LDTELEP:
                                  LDPAGER,LDASSOC1,LDASSOC2,LDASSOC3,LDASSOC4:
                                  LDASSOC5,LDPROV,LDTELEH,LDHADD1,LDHADD2:
                                  LDHADD3,LDHADD4,LDHPOST,LPDOHEML,LDAFIRST:
                                  LDALAST,LDAYEARS,LDACCRED,LDRTYPE2,LDRTYPE3:
                                  LDRTYPE4,LDRTYPE5,LDFSPARE,LDBIRTH,LDHCSCOD:
                                  LDALEVEL,LDRSTAT,LPDOFAXN,LPDOHFAX,LPDOMOBL:
                                  LPDOGLCC,LPDOWHDP,LPDOMREG,LPDONHSN,LLUPDDTE:
                                  LLUPDTME,LPDOUDF1,LPDOUDF2,LPDOUDF3,LPDOUDF4:
                                  LPDOUDF5,LPDOINSC,LPDOINSN,LPDOINSF,LPDOINST:
                                  LPDOREGN,LPDOREGF,LPDOREGT,LPDOVISA,LPDOCOMT:
                                  LPDOPREF,LPDOABNN,LPDODINA,LPDODACT,LPDODACO:
                                  LPDOPRO2,LPDOPRO3,LPDOPRO4,LPDOPRO5,LDASPARE
          GOTO      OVERCOND IF OVER
          RETURN
.
