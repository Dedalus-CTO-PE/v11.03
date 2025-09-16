create table patqmhaf
(
dptqmadm    char(8),
ptqmtoua    char(1),
ptqmemps    char(1),
ptqmpsns    char(1),
ptqmprms    char(1),
ptqmrtfc    char(2),
ptqmmlsi    char(1),
ptqmpsnt    char(1),
ptqmspar    char(23),
lf          char(1)
);
create unique index patqmha1 on patqmhaf
(
dptqmadm
);
revoke all on patqmhaf from public ; 
grant select on patqmhaf to public ; 
