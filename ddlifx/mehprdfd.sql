create table mehprdaf
(
  mhpdxdat    char(8) default ' ' not null,
  mhpdxnum    char(3) default ' ' not null,
  mhpdvisn    char(8) default ' ' not null,
  mhpdurno    char(8) default ' ' not null,
  mhpdstat    char(1) default ' ' not null,
  mhpdetyp    char(1) default ' ' not null,
  mhpdecnt    char(3) default ' ' not null,
  mhpdwcnt    char(3) default ' ' not null,
  mhpderid    char(9) default ' ' not null,
  mhpdfver    char(3) default ' ' not null,
  mhpdrfid    char(10) default ' ' not null,
  mhpdsorg    char(8) default ' ' not null,
  mhpdorid    char(8) default ' ' not null,
  mhpdotyp    char(3) default ' ' not null,
  mhpdfdat    char(19) default ' ' not null,
  mhpdtdat    char(19) default ' ' not null,
  mhpddelt    char(9) default ' ' not null,
  mhpdteam    char(6) default ' ' not null,
  mhpdehcu    char(7) default ' ' not null,
  mhpdpsex    char(1) default ' ' not null,
  mhpdpdob    char(10) default ' ' not null,
  mhpdrffr    char(2) default ' ' not null,
  mhpdrfto    char(2) default ' ' not null,
  mhpdecod    char(2) default ' ' not null,
  mhpdrstr    char(19) default ' ' not null,
  mhpdrend    char(19) default ' ' not null,
  mhpdspar    char(48) default ' ' not null,
  lf          char(1)
);
create unique index mehprda1 on mehprdaf
(
mhpdxdat,
mhpdxnum,
mhpdvisn
);
create unique index mehprda2 on mehprdaf
(
mhpdvisn,
mhpdxdat,
mhpdxnum
);
create unique index mehprda3 on mehprdaf
(
mhpdurno,
mhpdxdat,
mhpdxnum,
mhpdvisn
);
revoke all on mehprdaf from public ; 
grant select on mehprdaf to public ; 
