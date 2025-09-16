create table webmneaf
(
wbmeusid    varchar2(10),
wbmeserv    varchar2(8),
wbmeoptn    varchar2(2),
wbmebser    varchar2(3),
wbmemenu    varchar2(8),
wbmemgrp    varchar2(3),
wbmemitm    varchar2(3),
wbmespar    varchar2(80),
lf          varchar2(1),
constraint webmnea1 primary key( 
wbmeusid,
wbmeserv,
wbmeoptn,
wbmebser)
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
create public synonym webmneaf for webmneaf;
create unique index webmnea2 on webmneaf
(
wbmemenu,
wbmemgrp,
wbmemitm,
wbmeusid
)
  tablespace iba01ax 
initrans 3 
storage ( 
  initial 16k 
); 
