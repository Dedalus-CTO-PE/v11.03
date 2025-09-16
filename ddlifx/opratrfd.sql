create table opratraf
(
  opabuniq    char(10) default ' ' not null,
  opabtype    char(3) default ' ' not null,
  opabval1    char(6) default ' ' not null,
  opabval2    char(6) default ' ' not null,
  opabval3    char(6) default ' ' not null,
  opabval4    char(6) default ' ' not null,
  opabcod1    char(3) default ' ' not null,
  opabcod2    char(3) default ' ' not null,
  opabcod3    char(3) default ' ' not null,
  opabcod4    char(3) default ' ' not null,
  opabtxt1    char(80) default ' ' not null,
  opabtxt2    char(80) default ' ' not null,
  opabtxt3    char(80) default ' ' not null,
  opabtxt4    char(80) default ' ' not null,
  opabyn01    char(1) default ' ' not null,
  opabyn02    char(1) default ' ' not null,
  opabyn03    char(1) default ' ' not null,
  opabyn04    char(1) default ' ' not null,
  opabdelt    char(1) default ' ' not null,
  opabcuid    char(10) default ' ' not null,
  opabcdat    char(8) default ' ' not null,
  opabctim    char(8) default ' ' not null,
  opabuuid    char(10) default ' ' not null,
  opabudat    char(8) default ' ' not null,
  opabutim    char(8) default ' ' not null,
  opabfuid    char(10) default ' ' not null,
  opabfdat    char(8) default ' ' not null,
  opabftim    char(8) default ' ' not null,
  opabcod5    char(3) default ' ' not null,
  opabcod6    char(3) default ' ' not null,
  opabyn05    char(1) default ' ' not null,
  opabyn06    char(1) default ' ' not null,
  opabyn07    char(1) default ' ' not null,
  opabyn08    char(1) default ' ' not null,
  opabyn09    char(1) default ' ' not null,
  opabyn10    char(1) default ' ' not null,
  opabudd1    char(8) default ' ' not null,
  opabudt1    char(8) default ' ' not null,
  opabspar    char(42) default ' ' not null,
  lf          char(1)
);
create unique index opratra1 on opratraf
(
opabuniq,
opabtype
);
revoke all on opratraf from public ; 
grant select on opratraf to public ; 
