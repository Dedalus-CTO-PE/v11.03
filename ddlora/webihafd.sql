create table webihaaf
(
  wbiiinvn    varchar2(8) default ' ' not null,
  wbiidate    varchar2(8) default ' ' not null,
  wbiitime    varchar2(8) default ' ' not null,
  wbiibatn    varchar2(8) default ' ' not null,
  wbiistat    number(2,0) default 0 not null,
  wbiitype    varchar2(2) default ' ' not null,
  wbiioper    varchar2(10) default ' ' not null,
  wbiitrid    varchar2(24) default ' ' not null,
  wbiieror    varchar2(4) default ' ' not null,
  wbiierot    varchar2(100) default ' ' not null,
  wbiimsid    varchar2(36) default ' ' not null,
  wbiispar    varchar2(100) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint webihaa1 primary key( 
wbiiinvn,
wbiidate,
wbiitime,
wbiitype)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index webihaa2 on webihaaf
(
wbiidate,
wbiitime,
wbiitype,
wbiiinvn
)
  tablespace pas_indx; 
create unique index webihaa3 on webihaaf
(
wbiiinvn,
wbiibatn,
wbiidate,
wbiitime,
wbiitype
)
  tablespace pas_indx; 
create unique index webihaa4 on webihaaf
(
wbiitrid,
wbiiinvn,
wbiidate,
wbiitime,
wbiitype
)
  tablespace pas_indx; 
create unique index webihaa5 on webihaaf
(
wbiimsid,
wbiiinvn,
wbiidate,
wbiitime,
wbiitype
)
  tablespace pas_indx; 
