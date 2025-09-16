create table webmncaf
(
wbmcmenu    varchar2(8),
wbmcmgrp    varchar2(3),
wbmcmitm    varchar2(3),
wbmcdesc    varchar2(35),
wbmcimag    varchar2(40),
wbmctarg    varchar2(1),
wbmcltyp    varchar2(1),
wbmclmen    varchar2(8),
wbmclser    varchar2(8),
wbmclopt    varchar2(2),
wbmclbsr    varchar2(3),
wbmclrid    varchar2(8),
wbmcuopt    varchar2(127),
wbmcsurl    varchar2(127),
wbmcmaxc    varchar2(50),
wbmcmaxl    varchar2(50),
wbmcptsy    varchar2(1),
wbmcptst    varchar2(1),
wbmcspar    varchar2(80),
lf          varchar2(1),
constraint webmnca1 primary key( 
wbmcmenu,
wbmcmgrp,
wbmcmitm)
)
tablespace iba01ad 
initrans 2 
storage ( 
  initial 16k 
) 
enable primary key using index 
  tablespace iba01ax 
  initrans 3 
  storage ( 
    initial 16k 
  ); 
create public synonym webmncaf for webmncaf;
