create table pmslrdaf
(
  pmlrvisn    char(8) default ' ' not null,
  pmlrdate    char(8) default ' ' not null,
  pmlrtime    char(8) default ' ' not null,
  pmlrward    char(3) default ' ' not null,
  pmlrlbed    char(3) default ' ' not null,
  pmlrrecs    char(1) default ' ' not null,
  pmlrcoun    char(3) default ' ' not null,
  pmlractv    char(1) default ' ' not null,
  pmlrlrcn    char(3) default ' ' not null,
  pmlrtlev    char(3) default ' ' not null,
  pmlrexrd    char(8) default ' ' not null,
  pmlrexrt    char(8) default ' ' not null,
  pmlrdest    char(100) default ' ' not null,
  pmlrrisk    char(3) default ' ' not null,
  pmlrlarr    char(3) default ' ' not null,
  pmlrudc1    char(3) default ' ' not null,
  pmlrudc2    char(3) default ' ' not null,
  pmlrudc3    char(3) default ' ' not null,
  pmlrudc4    char(3) default ' ' not null,
  pmlrmedg    char(1) default ' ' not null,
  pmlrbags    char(1) default ' ' not null,
  pmlrbals    char(1) default ' ' not null,
  pmlrudss    char(1) default ' ' not null,
  pmlrudy1    char(1) default ' ' not null,
  pmlrudy2    char(1) default ' ' not null,
  pmlrudy3    char(1) default ' ' not null,
  pmlrval1    char(10) default ' ' not null,
  pmlrval2    char(10) default ' ' not null,
  pmlrval3    char(10) default ' ' not null,
  pmlrcarn    char(100) default ' ' not null,
  pmlrcarc    char(20) default ' ' not null,
  pmlrcart    char(3) default ' ' not null,
  pmlrccnt    char(3) default ' ' not null,
  pmlrccon    char(1) default ' ' not null,
  pmlrtxt1    char(100) default ' ' not null,
  pmlrtxt2    char(100) default ' ' not null,
  pmlrtxt3    char(100) default ' ' not null,
  pmlrremn    char(2) default ' ' not null,
  pmlrwebc    char(10) default ' ' not null,
  pmlrcdat    char(8) default ' ' not null,
  pmlrctim    char(8) default ' ' not null,
  pmlrwebd    char(10) default ' ' not null,
  pmlrdatd    char(8) default ' ' not null,
  pmlrtimd    char(8) default ' ' not null,
  pmlrwebu    char(10) default ' ' not null,
  pmlrdatu    char(8) default ' ' not null,
  pmlrtimu    char(8) default ' ' not null,
  pmlrspar    char(100) default ' ' not null,
  lf          char(1)
);
create unique index pmslrda1 on pmslrdaf
(
pmlrvisn,
pmlrdate,
pmlrtime,
pmlrcoun
);
create unique index pmslrda2 on pmslrdaf
(
pmlrvisn,
pmlrdate,
pmlrtime,
pmlrrecs,
pmlrcoun
);
create unique index pmslrda3 on pmslrdaf
(
pmlrrecs,
pmlrvisn,
pmlrdate,
pmlrtime,
pmlrcoun
);
create unique index pmslrda4 on pmslrdaf
(
pmlrdate,
pmlrtime,
pmlrrecs,
pmlrvisn,
pmlrcoun
);
revoke all on pmslrdaf from public ; 
grant select on pmslrdaf to public ; 
