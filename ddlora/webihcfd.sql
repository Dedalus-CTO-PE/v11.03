create table webihcaf
(
  dwbicflg    varchar2(2) default ' ' not null,
  wbichfnd    varchar2(6) default ' ' not null,
  wbicadmn    varchar2(8) default ' ' not null,
  wbicinvn    varchar2(8) default ' ' not null,
  wbicbatn    varchar2(8) default ' ' not null,
  wbicurno    varchar2(8) default ' ' not null,
  wbicpbat    varchar2(8) default ' ' not null,
  wbicnbat    varchar2(8) default ' ' not null,
  wbicccfl    varchar2(1) default ' ' not null,
  wbictrid    varchar2(24) default ' ' not null,
  dwbiceet    varchar2(1) default ' ' not null,
  wbicamtc    number(14,2) default 0 not null,
  wbicamtp    number(14,2) default 0 not null,
  wbicpdat    varchar2(8) default ' ' not null,
  wbicstat    varchar2(2) default ' ' not null,
  wbicftid    varchar2(24) default ' ' not null,
  wbichosp    varchar2(3) default ' ' not null,
  wbicpcti    varchar2(24) default ' ' not null,
  wbicctyp    varchar2(2) default ' ' not null,
  wbicmsid    varchar2(36) default ' ' not null,
  wbicspar    varchar2(100) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint webihca1 primary key( 
wbichosp,
dwbicflg,
wbichfnd,
wbicadmn,
wbicinvn,
wbicbatn)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index webihca2 on webihcaf
(
wbicinvn,
wbicbatn
)
  tablespace pas_indx; 
create unique index webihca3 on webihcaf
(
wbicbatn,
wbicadmn,
wbicinvn
)
  tablespace pas_indx; 
create unique index webihca4 on webihcaf
(
wbicadmn,
wbicinvn,
wbicbatn
)
  tablespace pas_indx; 
create unique index webihca5 on webihcaf
(
wbichosp,
wbicurno,
wbicadmn,
wbicinvn,
wbicbatn
)
  tablespace pas_indx; 
create unique index webihca6 on webihcaf
(
wbictrid,
wbicinvn,
wbicbatn
)
  tablespace pas_indx; 
create unique index webihca7 on webihcaf
(
wbicmsid,
wbicinvn,
wbicbatn
)
  tablespace pas_indx; 
create unique index webihca8 on webihcaf
(
dwbicflg,
wbichfnd,
wbicadmn,
wbicinvn,
wbicbatn,
wbichosp
)
  tablespace pas_indx; 
