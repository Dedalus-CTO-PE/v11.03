create table webbbaaf
(
  wbbainvn    varchar2(8) default ' ' not null,
  wbbadate    varchar2(8) default ' ' not null,
  wbbatime    varchar2(8) default ' ' not null,
  wbbabatn    varchar2(8) default ' ' not null,
  wbbastat    number(2,0) default 0 not null,
  wbbatype    varchar2(2) default ' ' not null,
  wbbaoper    varchar2(10) default ' ' not null,
  wbbatrid    varchar2(24) default ' ' not null,
  wbbaeror    varchar2(4) default ' ' not null,
  wbbaerot    varchar2(100) default ' ' not null,
  wbbamodl    varchar2(1) default ' ' not null,
  wbbamsid    varchar2(36) default ' ' not null,
  wbbaspar    varchar2(50) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint webbbaa1 primary key( 
wbbainvn,
wbbadate,
wbbatime,
wbbatype,
wbbamodl)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index webbbaa2 on webbbaaf
(
wbbadate,
wbbatime,
wbbatype,
wbbainvn,
wbbamodl
)
  tablespace pas_indx; 
create unique index webbbaa3 on webbbaaf
(
wbbainvn,
wbbabatn,
wbbadate,
wbbatime,
wbbatype,
wbbamodl
)
  tablespace pas_indx; 
create unique index webbbaa4 on webbbaaf
(
wbbatrid,
wbbainvn,
wbbadate,
wbbatime,
wbbatype,
wbbamodl
)
  tablespace pas_indx; 
create unique index webbbaa5 on webbbaaf
(
wbbamsid,
wbbainvn,
wbbadate,
wbbatime,
wbbatype,
wbbamodl
)
  tablespace pas_indx; 
