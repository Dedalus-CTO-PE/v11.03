create table webbbsaf
(
  wbbshosp    varchar2(3) default ' ' not null,
  dwbbsflg    varchar2(2) default ' ' not null,
  wbbsmodl    varchar2(1) default ' ' not null,
  wbbsuniq    varchar2(8) default ' ' not null,
  wbbsinvn    varchar2(8) default ' ' not null,
  wbbsbatn    varchar2(8) default ' ' not null,
  wbbsurno    varchar2(8) default ' ' not null,
  wbbspbat    varchar2(8) default ' ' not null,
  wbbsnbat    varchar2(8) default ' ' not null,
  wbbstrid    varchar2(24) default ' ' not null,
  wbbsamtc    number(14,2) default 0 not null,
  wbbsamtp    number(14,2) default 0 not null,
  wbbspdat    varchar2(8) default ' ' not null,
  wbbsstat    varchar2(2) default ' ' not null,
  wbbsclid    varchar2(6) default ' ' not null,
  wbbsrkey    varchar2(24) default ' ' not null,
  wbbsokey    varchar2(36) default ' ' not null,
  wbbsmsid    varchar2(36) default ' ' not null,
  wbbsprov    varchar2(8) default ' ' not null,
  wbbsstyp    varchar2(1) default ' ' not null,
  wbbsspar    varchar2(100) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint webbbsa1 primary key( 
wbbshosp,
dwbbsflg,
wbbsmodl,
wbbsuniq,
wbbsinvn,
wbbsbatn)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index webbbsa2 on webbbsaf
(
wbbsinvn,
wbbsbatn,
wbbsmodl
)
  tablespace pas_indx; 
create unique index webbbsa3 on webbbsaf
(
wbbsbatn,
wbbsuniq,
wbbsinvn
)
  tablespace pas_indx; 
create unique index webbbsa4 on webbbsaf
(
wbbsuniq,
wbbsinvn,
wbbsbatn
)
  tablespace pas_indx; 
create unique index webbbsa5 on webbbsaf
(
wbbshosp,
wbbsurno,
wbbsuniq,
wbbsinvn,
wbbsbatn
)
  tablespace pas_indx; 
create unique index webbbsa6 on webbbsaf
(
wbbstrid,
wbbsinvn,
wbbsbatn
)
  tablespace pas_indx; 
create unique index webbbsa7 on webbbsaf
(
wbbsmsid,
wbbsinvn,
wbbsbatn,
wbbsmodl
)
  tablespace pas_indx; 
create unique index webbbsa8 on webbbsaf
(
dwbbsflg,
wbbshosp,
wbbsmodl,
wbbsuniq,
wbbsinvn,
wbbsbatn
)
  tablespace pas_indx; 
