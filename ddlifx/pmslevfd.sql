create table pmslevaf
(
  pmlvuniq    char(10) default ' ' not null,
  pmlvadmn    char(8) default ' ' not null,
  pmlvdate    char(8) default ' ' not null,
  pmlvtime    char(8) default ' ' not null,
  pmlvtype    char(2) default ' ' not null,
  pmlvetyp    char(3) default ' ' not null,
  pmlvstat    char(3) default ' ' not null,
  pmlvdes1    char(50) default ' ' not null,
  pmlvdes2    char(50) default ' ' not null,
  pmlvspar    char(80) default ' ' not null,
  pmlvwebc    char(10) default ' ' not null,
  pmlvdatc    char(8) default ' ' not null,
  pmlvtimc    char(8) default ' ' not null,
  pmlvwebu    char(10) default ' ' not null,
  pmlvdatu    char(8) default ' ' not null,
  pmlvtimu    char(8) default ' ' not null,
  lf          char(1)
);
create unique index pmsleva1 on pmslevaf
(
pmlvuniq,
pmlvadmn,
pmlvdate,
pmlvtime,
pmlvtype,
pmlvetyp
);
revoke all on pmslevaf from public ; 
grant select on pmslevaf to public ; 
