create table emrlocaf
(
  emloloca    char(3) default ' ' not null,
  emlodesc    char(25) default ' ' not null,
  emloscod    char(3) default ' ' not null,
  emlomaxp    decimal(4,0) default 0 not null,
  emlotype    char(1) default ' ' not null,
  emloactv    char(1) default ' ' not null,
  emlossin    char(1) default ' ' not null,
  emlocdat    char(8) default ' ' not null,
  emloctim    char(8) default ' ' not null,
  emlocuid    char(10) default ' ' not null,
  emloudat    char(8) default ' ' not null,
  emloutim    char(8) default ' ' not null,
  emlouuid    char(10) default ' ' not null,
  emloidat    char(8) default ' ' not null,
  emloitim    char(8) default ' ' not null,
  emloiuid    char(10) default ' ' not null,
  emlospar    char(50) default ' ' not null,
  lf          char(1)
);
create unique index emrloca1 on emrlocaf
(
emloloca
);
create unique index emrloca2 on emrlocaf
(
emlodesc,
emloloca
);
create unique index emrloca3 on emrlocaf
(
emloscod,
emlotype,
emloloca
);
revoke all on emrlocaf from public ; 
grant select on emrlocaf to public ; 
