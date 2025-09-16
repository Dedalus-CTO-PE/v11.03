create table nzprpiaf
(
nzrpadmn    char(8),
nzrpinvn    char(8),
nzrprinv    char(20),
nzrpdate    char(8),
nzrpamnt    decimal(14,2),
nzrpptyp    char(3),
nzrppcod    char(10),
nzrpapis    char(1),
nzrpapdt    char(8),
nzrpcomt    char(60),
nzrpcdat    char(8),
nzrpctim    char(8),
nzrpcuid    char(10),
nzrpudat    char(8),
nzrputim    char(8),
nzrpuuid    char(10),
nzrprpis    char(8),
nzrpspar    char(92),
lf          char(1)
);
create unique index nzprpia1 on nzprpiaf
(
nzrpadmn,
nzrpinvn,
nzrprinv
);
create unique index nzprpia2 on nzprpiaf
(
nzrprpis
);
create unique index nzprpia3 on nzprpiaf
(
nzrpapis,
nzrprpis
);
revoke all on nzprpiaf from public ; 
grant select on nzprpiaf to public ; 
