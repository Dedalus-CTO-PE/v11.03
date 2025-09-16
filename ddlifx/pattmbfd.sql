create table pataudtb
(
pttbaudd    char(8),
pttbaudt    char(8),
pttbaudp    char(2),
pttbaudr    char(1),
pttbauds    decimal(1,0),
pttbaudo    char(4),
pttbteam    char(6),
pttbdoct    char(6),
pttbsdat    char(8),
pttbrole    char(3),
pttbspar    char(30),
lf          char(1)
);
create index pataudtb on pataudtb
(
pttbaudd,
pttbaudt,
pttbaudp,
pttbaudr
);
revoke all on pataudtb from public ; 
grant select on pataudtb to public ; 
create table pattmbaf
(
pttbteam    char(6),
pttbdoct    char(6),
pttbsdat    char(8),
pttbrole    char(3),
pttbspar    char(30),
lf          char(1)
);
create unique index pattmba1 on pattmbaf
(
pttbteam,
pttbdoct
);
create unique index pattmba2 on pattmbaf
(
pttbdoct,
pttbteam
);
revoke all on pattmbaf from public ; 
grant select on pattmbaf to public ; 
