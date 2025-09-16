create table patsaiaf
(
ptsaino     char(3),
ptibano     char(3),
ptsadesc    char(50),
ptsaspar    char(23),
lf          char(1)
);
create unique index patsaia1 on patsaiaf
(
ptsaino
);
create unique index patsaia2 on patsaiaf
(
ptibano
);
revoke all on patsaiaf from public ; 
grant select on patsaiaf to public ; 
