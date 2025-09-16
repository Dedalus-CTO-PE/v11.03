create table pmspctaf
(
  pmpcuniq    char(10) default ' ' not null,
  pmpcadmn    char(8) default ' ' not null,
  pmpcdate    char(8) default ' ' not null,
  pmpctime    char(8) default ' ' not null,
  pmpctype    char(3) default ' ' not null,
  pmpcetyp    char(3) default ' ' not null,
  pmpcesta    char(3) default ' ' not null,
  pmpcdes1    char(50) default ' ' not null,
  pmpcdes2    char(50) default ' ' not null,
  pmpcwebc    char(10) default ' ' not null,
  pmpcdatc    char(8) default ' ' not null,
  pmpctimc    char(8) default ' ' not null,
  pmpcwebu    char(10) default ' ' not null,
  pmpcdatu    char(8) default ' ' not null,
  pmpctimu    char(8) default ' ' not null,
  pmpcrecs    char(1) default ' ' not null,
  pmpcwebd    char(10) default ' ' not null,
  pmpcdatd    char(8) default ' ' not null,
  pmpctimd    char(8) default ' ' not null,
  pmpcspar    char(60) default ' ' not null,
  lf          char(1)
);
create unique index pmspcta1 on pmspctaf
(
pmpcuniq,
pmpcadmn,
pmpcdate,
pmpctime,
pmpctype,
pmpcetyp
);
revoke all on pmspctaf from public ; 
grant select on pmspctaf to public ; 
