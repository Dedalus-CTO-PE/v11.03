.
. ***********************************************************************
. * Include Name : PATCALAG.INC                                         *
. *                                                                     *
. * Function     : Data variable definitions for CALCAGE routine        *
. *                                                                     *
. * Modifications: 30/08/90 Graeme Williams                             *
. *                         Include written                             *
. *                07/01/91 Graeme Williams                             *
. *                         Increased PSAGEDAY to a FORM 5              *
. *                         Increased PSAGEMNT to a FORM 4              *
. *                17/05/94 Ian Rutt                                    *
. *                         Added PSAGEWKS                              *
. *                         (These new fields used for age conversion   *
. *                          and are only used if parameter PTCNDATE is1* 
. *                                                                     *
. ***********************************************************************
.
AGEDATE   DIM       8
BRTHLYR   FORM      1
PSAGEDAY  FORM      5
PSAGEMNT  FORM      4
PSAGEYRS  FORM      3
SAVAGEYR  FORM      3
PSAGEWKS  FORM      5.2
.
CYRSFDTE  DIM       8
CYRSTDTE  DIM       8
CYRSYEAR  FORM      3
