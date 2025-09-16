create table pmsprdaf
(
pmprhosp    char(3),
pmprsdat    char(8),
pmpredat    char(8),
pmprerrf    char(1),
pmprldat    char(8),
pmprspar    char(42),
lf          char(1)
);
create unique index pmsprda1 on pmsprdaf
(
pmprhosp
);
revoke all on pmsprdaf from public ; 
grant select on pmsprdaf to public ; 
