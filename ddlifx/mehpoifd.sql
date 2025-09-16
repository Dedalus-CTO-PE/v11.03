create table mehpoiaf
(
  mhpixdat    char(8) default ' ' not null,
  mhpixnum    char(3) default ' ' not null,
  mhpivisn    char(8) default ' ' not null,
  mhpiurno    char(8) default ' ' not null,
  mhpiocur    char(3) default ' ' not null,
  mhpiocot    char(3) default ' ' not null,
  mhpiocoi    char(3) default ' ' not null,
  mhpierid    char(9) default ' ' not null,
  mhpioitm    char(3) default ' ' not null,
  mhpitype    char(2) default ' ' not null,
  mhpimadm    char(4) default ' ' not null,
  mhpicsta    char(4) default ' ' not null,
  mhpicdat    char(19) default ' ' not null,
  mhpiival    char(1) default ' ' not null,
  mhpispar    char(21) default ' ' not null,
  lf          char(1)
);
create unique index mehpoia1 on mehpoiaf
(
mhpixdat,
mhpixnum,
mhpivisn,
mhpiurno,
mhpiocur,
mhpiocot,
mhpiocoi
);
revoke all on mehpoiaf from public ; 
grant select on mehpoiaf to public ; 
