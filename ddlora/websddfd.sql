create table websddaf
(
  wbswhosp    varchar2(3) default ' ' not null,
  dwbswflg    varchar2(2) default ' ' not null,
  wbswmodl    varchar2(1) default ' ' not null,
  wbswuniq    varchar2(8) default ' ' not null,
  wbswinvn    varchar2(8) default ' ' not null,
  wbswbatn    varchar2(8) default ' ' not null,
  wbswurno    varchar2(8) default ' ' not null,
  wbswtrid    varchar2(24) default ' ' not null,
  wbswmsid    varchar2(36) default ' ' not null,
  wbsweror    varchar2(4) default ' ' not null,
  wbswtext    varchar2(500) default ' ' not null,
  wbswresc    varchar2(3) default ' ' not null,
  wbswspar    varchar2(100) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint websdda1 primary key( 
wbswhosp,
dwbswflg,
wbswmodl,
wbswuniq,
wbswinvn,
wbswbatn)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index websdda2 on websddaf
(
wbswinvn,
wbswbatn,
wbswmodl
)
  tablespace pas_indx; 
create unique index websdda3 on websddaf
(
wbswbatn,
wbswuniq,
wbswinvn
)
  tablespace pas_indx; 
create unique index websdda4 on websddaf
(
wbswuniq,
wbswinvn,
wbswbatn
)
  tablespace pas_indx; 
create unique index websdda5 on websddaf
(
wbswhosp,
wbswurno,
wbswuniq,
wbswinvn,
wbswbatn
)
  tablespace pas_indx; 
create unique index websdda6 on websddaf
(
wbswtrid,
wbswinvn,
wbswbatn
)
  tablespace pas_indx; 
create unique index websdda7 on websddaf
(
wbswmsid,
wbswinvn,
wbswbatn,
wbswmodl
)
  tablespace pas_indx; 
create unique index websdda8 on websddaf
(
dwbswflg,
wbswhosp,
wbswmodl,
wbswuniq,
wbswinvn,
wbswbatn
)
  tablespace pas_indx; 
