create table fmstcfaf
(
  fmtctled    char(2) default ' ' not null,
  fmtctacc    char(12) default ' ' not null,
  fmtcaseq    char(5) default ' ' not null,
  fmtcsled    char(2) default ' ' not null,
  fmtcsacc    char(12) default ' ' not null,
  fmtcpost    decimal(1,0) default 0 not null,
  fmtcaddt    char(1) default ' ' not null,
  fmtcprt     char(3) default ' ' not null,
  fmtcspar    char(17) default ' ' not null,
  lf          char(1)
);
create unique index fmstcfa1 on fmstcfaf
(
fmtctled,
fmtctacc,
fmtcaseq,
fmtcsled,
fmtcsacc
);
create unique index fmstcfa2 on fmstcfaf
(
fmtcsled,
fmtcsacc,
fmtctled,
fmtctacc,
fmtcaseq
);
revoke all on fmstcfaf from public ; 
grant select on fmstcfaf to public ; 
