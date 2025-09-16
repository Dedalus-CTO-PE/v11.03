create table fmsnrhxx
(
  fmnhrept    char(3) default ' ' not null,
  fmnhcseq    char(5) default ' ' not null,
  fmnhsseq    char(5) default ' ' not null,
  fmnhacct    char(12) default ' ' not null,
  fmnhdesc    char(35) default ' ' not null,
  fmnhtype    char(1) default ' ' not null,
  fmnhaytd    decimal(1,0) default 0 not null,
  fmnhclev    char(3) default ' ' not null,
  fmnhslev    char(3) default ' ' not null,
  fmnhcprt    char(3) default ' ' not null,
  fmnhsprt    char(3) default ' ' not null,
  fmnhdpla    char(1) default ' ' not null,
  fmnhmult    decimal(8,2) default 0 not null,
  fmnhdiv     decimal(8,2) default 0 not null,
  fmnhspar    char(20) default ' ' not null,
  lf          char(1)
);
create unique index fmsnrha1 on fmsnrhxx
(
fmnhrept,
fmnhcseq,
fmnhsseq
);
create unique index fmsnrha2 on fmsnrhxx
(
fmnhrept,
fmnhsseq,
fmnhcseq
);
revoke all on fmsnrhxx from public ; 
grant select on fmsnrhxx to public ; 
