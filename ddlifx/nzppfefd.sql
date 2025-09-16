create table nzppfeaf
(
nzpfhosp    char(3),
nzpfclmc    char(3),
nzpfcntr    char(6),
nzpfftab    char(8),
nzpfcprc    char(9),
nzpfefdt    char(8),
nzpfcont    decimal(1,0),
nzpfhpor    decimal(16,2),
nzpfppor    decimal(16,2),
nzpfdes1    char(50),
nzpfdes2    char(50),
nzpfrbrk    decimal(1,0),
nzpfibrk    decimal(1,0),
nzpfcdat    char(8),
nzpfctim    char(8),
nzpfcuid    char(10),
nzpfudat    char(8),
nzpfutim    char(8),
nzpfuuid    char(10),
nzpfspar    char(100),
lf          char(1)
);
create unique index nzppfea1 on nzppfeaf
(
nzpfhosp,
nzpfclmc,
nzpfcntr,
nzpfftab,
nzpfcprc,
nzpfefdt
);
revoke all on nzppfeaf from public ; 
grant select on nzppfeaf to public ; 
