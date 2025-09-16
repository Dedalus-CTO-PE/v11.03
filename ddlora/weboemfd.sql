create table weboemaf
(
  wboevisn    varchar2(8) default ' ' not null,
  wboecntr    varchar2(3) default ' ' not null,
  wboestat    varchar2(2) default ' ' not null,
  wboeurno    varchar2(8) default ' ' not null,
  wboearid    varchar2(20) default ' ' not null,
  wboetrid    varchar2(24) default ' ' not null,
  wboerqdt    varchar2(8) default ' ' not null,
  wboeetyp    varchar2(2) default ' ' not null,
  wboeerrc    varchar2(4) default ' ' not null,
  wboeerrd    varchar2(500) default ' ' not null,
  wboecdte    varchar2(8) default ' ' not null,
  wboectim    varchar2(8) default ' ' not null,
  wboeudte    varchar2(8) default ' ' not null,
  wboeutim    varchar2(8) default ' ' not null,
  wboehosp    varchar2(3) default ' ' not null,
  wboeeleg    varchar2(8) default ' ' not null,
  wboemsid    varchar2(36) default ' ' not null,
  wboespar    varchar2(101) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint weboema1 primary key( 
wboevisn,
wboecntr)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index weboema2 on weboemaf
(
wboestat,
wboehosp,
wboevisn,
wboecntr
)
  tablespace pas_indx; 
create unique index weboema3 on weboemaf
(
wboetrid,
wboevisn,
wboecntr
)
  tablespace pas_indx; 
create unique index weboema4 on weboemaf
(
wboemsid,
wboevisn,
wboecntr
)
  tablespace pas_indx; 
create unique index weboema5 on weboemaf
(
wboeeleg,
wboevisn,
wboecntr
)
  tablespace pas_indx; 
create unique index weboema6 on weboemaf
(
wboehosp,
wboevisn,
wboecntr
)
  tablespace pas_indx; 
