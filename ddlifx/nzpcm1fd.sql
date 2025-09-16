create table nzpcm1af
(
nzcmclmc    char(3),
nzcmcntr    char(6),
nzcmrtyp    char(1),
nzcmcprc    char(9),
nzcmityp    char(1),
dnzcmcnt    char(6),
nzcmftyp    decimal(1,0),
nzcmproc    char(9),
nzcmmigp    char(3),
nzcmspar    char(97),
lf          char(1)
);
create unique index nzpcm1a1 on nzpcm1af
(
nzcmclmc,
nzcmcntr,
nzcmrtyp,
nzcmcprc,
nzcmityp,
dnzcmcnt
);
create unique index nzpcm1a2 on nzpcm1af
(
nzcmcprc,
nzcmclmc,
nzcmcntr,
nzcmrtyp,
nzcmityp,
dnzcmcnt
);
create unique index nzpcm1a3 on nzpcm1af
(
nzcmclmc,
nzcmcntr,
nzcmrtyp,
nzcmityp,
nzcmproc,
nzcmcprc,
dnzcmcnt
);
revoke all on nzpcm1af from public ; 
grant select on nzpcm1af to public ; 
