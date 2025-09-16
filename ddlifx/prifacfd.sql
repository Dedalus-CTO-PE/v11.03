create table prifactf
(
prfadate    char(8),
prfadebt    char(8),
dprfascn    char(2),
prfaactn    char(3),
prfacomm    char(60),
prfampra    char(6),
prfaspar    char(4),
lf          char(1)
);
create unique index prifact1 on prifactf
(
prfadate,
prfadebt,
dprfascn
);
create unique index prifact2 on prifactf
(
prfadebt,
dprfascn,
prfadate
);
revoke all on prifactf from public ; 
grant select on prifactf to public ; 
