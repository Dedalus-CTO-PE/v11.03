create table prisecaf
(
prseprac    char(6),
prseusid    char(10),
prsespar    char(30),
lf          char(1)
);
create unique index priseca1 on prisecaf
(
prseprac,
prseusid
);
create unique index priseca2 on prisecaf
(
prseusid,
prseprac
);
revoke all on prisecaf from public ; 
grant select on prisecaf to public ; 
