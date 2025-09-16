create table webmncaf
(
wbmcmenu    char(8),
wbmcmgrp    char(3),
wbmcmitm    char(3),
wbmcdesc    char(35),
wbmcimag    char(40),
wbmctarg    char(1),
wbmcltyp    char(1),
wbmclmen    char(8),
wbmclser    char(8),
wbmclopt    char(2),
wbmclbsr    char(3),
wbmclrid    char(8),
wbmcuopt    char(127),
wbmcsurl    char(127),
wbmcmaxc    char(50),
wbmcmaxl    char(50),
wbmcptsy    char(1),
wbmcptst    char(1),
wbmcspar    char(80),
lf          char(1)
);
create unique index webmnca1 on webmncaf
(
wbmcmenu,
wbmcmgrp,
wbmcmitm
);
revoke all on webmncaf from public ; 
grant select on webmncaf to public ; 
