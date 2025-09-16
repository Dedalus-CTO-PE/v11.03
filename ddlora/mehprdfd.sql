create table mehprdaf
(
  mhpdxdat    varchar2(8) default ' ' not null,
  mhpdxnum    varchar2(3) default ' ' not null,
  mhpdvisn    varchar2(8) default ' ' not null,
  mhpdurno    varchar2(8) default ' ' not null,
  mhpdstat    varchar2(1) default ' ' not null,
  mhpdetyp    varchar2(1) default ' ' not null,
  mhpdecnt    varchar2(3) default ' ' not null,
  mhpdwcnt    varchar2(3) default ' ' not null,
  mhpderid    varchar2(9) default ' ' not null,
  mhpdfver    varchar2(3) default ' ' not null,
  mhpdrfid    varchar2(10) default ' ' not null,
  mhpdsorg    varchar2(8) default ' ' not null,
  mhpdorid    varchar2(8) default ' ' not null,
  mhpdotyp    varchar2(3) default ' ' not null,
  mhpdfdat    varchar2(19) default ' ' not null,
  mhpdtdat    varchar2(19) default ' ' not null,
  mhpddelt    varchar2(9) default ' ' not null,
  mhpdteam    varchar2(6) default ' ' not null,
  mhpdehcu    varchar2(7) default ' ' not null,
  mhpdpsex    varchar2(1) default ' ' not null,
  mhpdpdob    varchar2(10) default ' ' not null,
  mhpdrffr    varchar2(2) default ' ' not null,
  mhpdrfto    varchar2(2) default ' ' not null,
  mhpdecod    varchar2(2) default ' ' not null,
  mhpdrstr    varchar2(19) default ' ' not null,
  mhpdrend    varchar2(19) default ' ' not null,
  mhpdspar    varchar2(48) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint mehprda1 primary key( 
mhpdxdat,
mhpdxnum,
mhpdvisn)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index mehprda2 on mehprdaf
(
mhpdvisn,
mhpdxdat,
mhpdxnum
)
  tablespace pas_indx; 
create unique index mehprda3 on mehprdaf
(
mhpdurno,
mhpdxdat,
mhpdxnum,
mhpdvisn
)
  tablespace pas_indx; 
