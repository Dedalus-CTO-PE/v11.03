create table nzpcmtaf
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
create unique index nzpcmta1 on nzpcmtaf
(
nzcmclmc,
nzcmcntr,
nzcmrtyp,
nzcmcprc,
nzcmityp,
dnzcmcnt
);
create unique index nzpcmta2 on nzpcmtaf
(
nzcmcprc,
nzcmclmc,
nzcmcntr,
nzcmrtyp,
nzcmityp,
dnzcmcnt
);
create unique index nzpcmta3 on nzpcmtaf
(
nzcmclmc,
nzcmcntr,
nzcmrtyp,
nzcmityp,
nzcmproc,
nzcmcprc,
dnzcmcnt
);
revoke all on nzpcmtaf from public ; 
grant select on nzpcmtaf to public ; 
