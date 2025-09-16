create table webimcaf
(
  wbimhosp    varchar2(3) default ' ' not null,
  dwbimflg    varchar2(2) default ' ' not null,
  wbimhfnd    varchar2(6) default ' ' not null,
  wbimuniq    varchar2(8) default ' ' not null,
  wbiminvn    varchar2(8) default ' ' not null,
  wbimbatn    varchar2(8) default ' ' not null,
  wbimurno    varchar2(8) default ' ' not null,
  wbimpbat    varchar2(8) default ' ' not null,
  wbimnbat    varchar2(8) default ' ' not null,
  wbimtrid    varchar2(24) default ' ' not null,
  wbimeetp    varchar2(1) default ' ' not null,
  wbimamtc    number(14,2) default 0 not null,
  wbimamfp    number(14,2) default 0 not null,
  wbimammp    number(14,2) default 0 not null,
  wbimpdat    varchar2(8) default ' ' not null,
  wbimstat    varchar2(2) default ' ' not null,
  wbimftid    varchar2(24) default ' ' not null,
  wbimprac    varchar2(10) default ' ' not null,
  wbimmsid    varchar2(36) default ' ' not null,
  wbimctyp    varchar2(2) default ' ' not null,
  wbimspar    varchar2(100) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint webimca1 primary key( 
wbimhosp,
dwbimflg,
wbimhfnd,
wbimuniq,
wbiminvn,
wbimbatn)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index webimca2 on webimcaf
(
wbiminvn,
wbimbatn
)
  tablespace pas_indx; 
create unique index webimca3 on webimcaf
(
wbimbatn,
wbimuniq,
wbiminvn
)
  tablespace pas_indx; 
create unique index webimca4 on webimcaf
(
wbimuniq,
wbiminvn,
wbimbatn
)
  tablespace pas_indx; 
create unique index webimca5 on webimcaf
(
wbimhosp,
wbimurno,
wbimuniq,
wbiminvn,
wbimbatn
)
  tablespace pas_indx; 
create unique index webimca6 on webimcaf
(
wbimtrid,
wbiminvn,
wbimbatn
)
  tablespace pas_indx; 
create unique index webimca7 on webimcaf
(
wbimprac,
wbimhosp,
dwbimflg,
wbimhfnd,
wbimuniq,
wbiminvn,
wbimbatn
)
  tablespace pas_indx; 
create unique index webimca8 on webimcaf
(
dwbimflg,
wbimhfnd,
wbimuniq,
wbiminvn,
wbimbatn,
wbimhosp
)
  tablespace pas_indx; 
