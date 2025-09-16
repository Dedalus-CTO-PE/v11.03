create table nzpmx1af
(
nzmxhosp    char(3),
nzmxclmc    char(3),
nzmxcntr    char(6),
nzmxftab    char(8),
nzmxmchg    char(9),
nzmxefdt    char(8),
nzmxuniq    char(3),
nzmxqnty    char(3),
nzmxitmn    char(9),
nzmxcdat    char(8),
nzmxctim    char(8),
nzmxcuid    char(10),
nzmxudat    char(8),
nzmxutim    char(8),
nzmxuuid    char(10),
nzmxspar    char(100),
lf          char(1)
);
create unique index nzpmx1a1 on nzpmx1af
(
nzmxhosp,
nzmxclmc,
nzmxcntr,
nzmxftab,
nzmxmchg,
nzmxefdt,
nzmxuniq
);
revoke all on nzpmx1af from public ; 
grant select on nzpmx1af to public ; 
