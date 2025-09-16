create table patik1af
(
ptikitm     char(9),
ptikkwd     char(15),
ptikspa     char(10),
lf          char(1)
);
create unique index patik1a1 on patik1af
(
ptikitm,
ptikkwd
);
create unique index patik1a2 on patik1af
(
ptikkwd,
ptikitm
);
revoke all on patik1af from public ; 
grant select on patik1af to public ; 
