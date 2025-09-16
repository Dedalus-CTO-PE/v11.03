create table fmsaudsq
(
  fmsqaudd    char(8) default ' ' not null,
  fmsqaudt    char(8) default ' ' not null,
  fmsqaudp    char(2) default ' ' not null,
  fmsqaudr    char(1) default ' ' not null,
  fmsqauds    decimal(1,0) default 0 not null,
  fmsqaudo    char(4) default ' ' not null,
  fmsqsec     char(4) default ' ' not null,
  fmsqledg    char(2) default ' ' not null,
  fmsqacct    char(12) default ' ' not null,
  fmsqseq     char(3) default ' ' not null,
  fmsqspar    char(7) default ' ' not null,
  lf          char(1)
);
create index fmsaudsq on fmsaudsq
(
fmsqaudd,
fmsqaudt,
fmsqaudp,
fmsqaudr
);
revoke all on fmsaudsq from public ; 
grant select on fmsaudsq to public ; 
create table fmssquaf
(
  fmsqsec     char(4) default ' ' not null,
  fmsqledg    char(2) default ' ' not null,
  fmsqacct    char(12) default ' ' not null,
  fmsqseq     char(3) default ' ' not null,
  fmsqspar    char(7) default ' ' not null,
  lf          char(1)
);
create unique index fmssqua1 on fmssquaf
(
fmsqsec,
fmsqledg,
fmsqseq,
fmsqacct
);
revoke all on fmssquaf from public ; 
grant select on fmssquaf to public ; 
