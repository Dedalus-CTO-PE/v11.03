create table pataudtc
(
pttcaudd    char(8),
pttcaudt    char(8),
pttcaudp    char(2),
pttcaudr    char(1),
pttcauds    decimal(1,0),
pttcaudo    char(4),
pttcteam    char(6),
pttcdoct    char(6),
pttcsdat    char(8),
pttcedat    char(8),
pttcrole    char(3),
pttcspar    char(30),
lf          char(1)
);
create index pataudtc on pataudtc
(
pttcaudd,
pttcaudt,
pttcaudp,
pttcaudr
);
revoke all on pataudtc from public ; 
grant select on pataudtc to public ; 
create table pattmcaf
(
pttcteam    char(6),
pttcdoct    char(6),
pttcsdat    char(8),
pttcedat    char(8),
pttcrole    char(3),
pttcspar    char(30),
lf          char(1)
);
create unique index pattmca1 on pattmcaf
(
pttcteam,
pttcsdat,
pttcdoct
);
create unique index pattmca2 on pattmcaf
(
pttcdoct,
pttcsdat,
pttcteam
);
revoke all on pattmcaf from public ; 
grant select on pattmcaf to public ; 
