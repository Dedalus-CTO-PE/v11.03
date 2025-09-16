create table webmnbaf
(
wbmbmenu    varchar2(8),
wbmbmgrp    varchar2(3),
wbmbdesc    varchar2(35),
wbmbpres    varchar2(1),
wbmbmgrt    varchar2(1),
wbmbspar    varchar2(80),
lf          varchar2(1),
constraint webmnba1 primary key( 
wbmbmenu,
wbmbmgrp)
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
create public synonym webmnbaf for webmnbaf;
