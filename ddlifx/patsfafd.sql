create table patsfaaf
(
ptsfcode    char(1),
ptsfdesc    char(78),
ptsfspar    char(20),
lf          char(1)
);
create unique index patsfaa1 on patsfaaf
(
ptsfcode
);
revoke all on patsfaaf from public ; 
grant select on patsfaaf to public ; 
