create table pmssawaf
(
  pmsacntr    char(6) default ' ' not null,
  pmsaclcd    char(3) default ' ' not null,
  pmsaasvr    char(2) default ' ' not null,
  pmsaccod    char(2) default ' ' not null,
  pmsaadsc    char(80) default ' ' not null,
  pmsaedsc    char(50) default ' ' not null,
  pmsasdov    char(1) default ' ' not null,
  pmsaalos    decimal(8,2) default 0 not null,
  pmsalbin    decimal(4,0) default 0 not null,
  pmsaubin    decimal(4,0) default 0 not null,
  pmsasdpw    decimal(14,4) default 0 not null,
  pmsassop    decimal(14,4) default 0 not null,
  pmsainpw    decimal(14,4) default 0 not null,
  pmsalsop    decimal(14,4) default 0 not null,
  pmsacdat    char(8) default ' ' not null,
  pmsactim    char(8) default ' ' not null,
  pmsacuid    char(10) default ' ' not null,
  pmsaudat    char(8) default ' ' not null,
  pmsautim    char(8) default ' ' not null,
  pmsauuid    char(10) default ' ' not null,
  pmsaspar    char(100) default ' ' not null,
  lf          char(1)
);
create unique index pmssawa1 on pmssawaf
(
pmsacntr,
pmsaclcd,
pmsaasvr,
pmsaccod
);
create unique index pmssawa2 on pmssawaf
(
pmsaclcd,
pmsaasvr,
pmsaccod,
pmsacntr
);
create unique index pmssawa3 on pmssawaf
(
pmsaccod,
pmsaclcd,
pmsaasvr,
pmsacntr
);
revoke all on pmssawaf from public ; 
grant select on pmssawaf to public ; 
