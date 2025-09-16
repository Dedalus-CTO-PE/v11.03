create table patclsaf
(
ptcicode    char(2),
ptcidesc    char(40),
ptcispar    char(7),
lf          char(1)
);
create unique index patclsa1 on patclsaf
(
ptcicode
);
revoke all on patclsaf from public ; 
grant select on patclsaf to public ; 
