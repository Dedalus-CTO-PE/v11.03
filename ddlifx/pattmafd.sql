create table pataudta
(
pttaaudd    char(8),
pttaaudt    char(8),
pttaaudp    char(2),
pttaaudr    char(1),
pttaauds    decimal(1,0),
pttaaudo    char(4),
pttateam    char(6),
pttadesc    char(30),
pttatype    char(3),
pttastat    decimal(1,0),
pttaspar    char(30),
lf          char(1)
);
create index pataudta on pataudta
(
pttaaudd,
pttaaudt,
pttaaudp,
pttaaudr
);
revoke all on pataudta from public ; 
grant select on pataudta to public ; 
create table pattmaaf
(
pttateam    char(6),
pttadesc    char(30),
pttatype    char(3),
pttastat    decimal(1,0),
pttaspar    char(30),
lf          char(1)
);
create unique index pattmaa1 on pattmaaf
(
pttateam
);
create unique index pattmaa2 on pattmaaf
(
pttadesc,
pttateam
);
create unique index pattmaa3 on pattmaaf
(
pttatype,
pttadesc,
pttateam
);
revoke all on pattmaaf from public ; 
grant select on pattmaaf to public ; 
