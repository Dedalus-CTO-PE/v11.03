create table prshrdaf
(
p2hrurun    char(10),
p2hrfdat    char(8),
p2hrtdat    char(8),
p2hrcdat    char(8),
p2hrrdat    char(8),
p2hrhosp    char(3),
p2hrspar    char(47),
lf          char(1)
);
create unique index prshrda1 on prshrdaf
(
p2hrurun
);
create unique index prshrda2 on prshrdaf
(
p2hrfdat,
p2hrtdat,
p2hrurun
);
create unique index prshrda3 on prshrdaf
(
p2hrhosp,
p2hrfdat,
p2hrtdat,
p2hrurun
);
revoke all on prshrdaf from public ; 
grant select on prshrdaf to public ; 
