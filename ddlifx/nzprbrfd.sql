create table nzprbraf
(
nzrbhosp    char(3),
nzrbclmc    char(3),
nzrbcntr    char(6),
nzrbftab    char(8),
nzrbcprc    char(9),
nzrbefdt    char(8),
nzrbbrcd    char(3),
nzrbamnt    decimal(16,2),
nzrbspar    char(60),
lf          char(1)
);
create unique index nzprbra1 on nzprbraf
(
nzrbhosp,
nzrbclmc,
nzrbcntr,
nzrbftab,
nzrbcprc,
nzrbefdt,
nzrbbrcd
);
revoke all on nzprbraf from public ; 
grant select on nzprbraf to public ; 
