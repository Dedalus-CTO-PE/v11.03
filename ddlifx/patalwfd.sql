create table patallw
(
alwcode     char(2),
alwdesc     char(20),
alwamt      decimal(14,2),
ptawspar    char(10),
lf          char(1)
);
create unique index patallw1 on patallw
(
alwcode
);
revoke all on patallw from public ; 
grant select on patallw to public ; 
