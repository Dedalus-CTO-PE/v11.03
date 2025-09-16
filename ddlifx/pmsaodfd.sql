create table pmsaodaf
(
pmaocode    char(6),
pmaolcnt    char(3),
pmaoline    char(100),
pmaospar    char(30),
lf          char(1)
);
create unique index pmsaoda1 on pmsaodaf
(
pmaocode,
pmaolcnt
);
revoke all on pmsaodaf from public ; 
grant select on pmsaodaf to public ; 
