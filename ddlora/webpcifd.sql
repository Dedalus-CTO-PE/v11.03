create table webpciaf
(
  wbpihosp    varchar2(3) default ' ' not null,
  dwbpiflg    varchar2(2) default ' ' not null,
  wbpimodl    varchar2(1) default ' ' not null,
  wbpiuniq    varchar2(8) default ' ' not null,
  wbpiinvn    varchar2(8) default ' ' not null,
  wbpibatn    varchar2(8) default ' ' not null,
  wbpiurno    varchar2(8) default ' ' not null,
  wbpipbat    varchar2(8) default ' ' not null,
  wbpinbat    varchar2(8) default ' ' not null,
  wbpitrid    varchar2(24) default ' ' not null,
  wbpiamtc    number(14,2) default 0 not null,
  wbpistat    varchar2(2) default ' ' not null,
  wbpimsid    varchar2(36) default ' ' not null,
  wbpictyp    varchar2(1) default ' ' not null,
  wbpieror    varchar2(4) default ' ' not null,
  wbpiresn    varchar2(500) default ' ' not null,
  wbpispar    varchar2(100) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint webpcia1 primary key( 
wbpihosp,
dwbpiflg,
wbpimodl,
wbpiuniq,
wbpiinvn,
wbpibatn)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index webpcia2 on webpciaf
(
wbpiinvn,
wbpibatn,
wbpimodl
)
  tablespace pas_indx; 
create unique index webpcia3 on webpciaf
(
wbpibatn,
wbpiuniq,
wbpiinvn
)
  tablespace pas_indx; 
create unique index webpcia4 on webpciaf
(
wbpiuniq,
wbpiinvn,
wbpibatn
)
  tablespace pas_indx; 
create unique index webpcia5 on webpciaf
(
wbpihosp,
wbpiurno,
wbpiuniq,
wbpiinvn,
wbpibatn
)
  tablespace pas_indx; 
create unique index webpcia6 on webpciaf
(
wbpitrid,
wbpiinvn,
wbpibatn
)
  tablespace pas_indx; 
create unique index webpcia7 on webpciaf
(
wbpimsid,
wbpiinvn,
wbpibatn,
wbpimodl
)
  tablespace pas_indx; 
create unique index webpcia8 on webpciaf
(
dwbpiflg,
wbpihosp,
wbpimodl,
wbpiuniq,
wbpiinvn,
wbpibatn
)
  tablespace pas_indx; 
