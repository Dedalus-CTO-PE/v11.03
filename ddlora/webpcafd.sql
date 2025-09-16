create table webpcaaf
(
  wbphinvn    varchar2(8) default ' ' not null,
  wbphdate    varchar2(8) default ' ' not null,
  wbphtime    varchar2(8) default ' ' not null,
  wbphbatn    varchar2(8) default ' ' not null,
  wbphstat    number(2,0) default 0 not null,
  wbphtype    varchar2(2) default ' ' not null,
  wbphoper    varchar2(10) default ' ' not null,
  wbphtrid    varchar2(24) default ' ' not null,
  wbpheror    varchar2(4) default ' ' not null,
  wbpherot    varchar2(100) default ' ' not null,
  wbphmodl    varchar2(1) default ' ' not null,
  wbphmsid    varchar2(36) default ' ' not null,
  wbphspar    varchar2(100) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint webpcaa1 primary key( 
wbphinvn,
wbphdate,
wbphtime,
wbphtype,
wbphmodl)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index webpcaa2 on webpcaaf
(
wbphdate,
wbphtime,
wbphtype,
wbphinvn,
wbphmodl
)
  tablespace pas_indx; 
create unique index webpcaa3 on webpcaaf
(
wbphinvn,
wbphbatn,
wbphdate,
wbphtime,
wbphtype,
wbphmodl
)
  tablespace pas_indx; 
create unique index webpcaa4 on webpcaaf
(
wbphtrid,
wbphinvn,
wbphdate,
wbphtime,
wbphtype,
wbphmodl
)
  tablespace pas_indx; 
create unique index webpcaa5 on webpcaaf
(
wbphmsid,
wbphinvn,
wbphdate,
wbphtime,
wbphtype,
wbphmodl
)
  tablespace pas_indx; 
