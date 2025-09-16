create table patdnraf
(
ptdnurno    char(8),
dptdncnt    char(2),
ptdncode    char(3),
ptdnlupd    char(8),
ptdnspar    char(10),
lf          char(1)
);
create unique index patdnra1 on patdnraf
(
ptdnurno,
dptdncnt
);
revoke all on patdnraf from public ; 
grant select on patdnraf to public ; 
