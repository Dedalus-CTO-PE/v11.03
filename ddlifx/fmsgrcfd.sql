create table fmsgrcaf
(
  fmgccode    char(3) default ' ' not null,
  fmgcseq     char(5) default ' ' not null,
  fmgcledg    char(2) default ' ' not null,
  fmgccc      char(12) default ' ' not null,
  fmgcspar    char(18) default ' ' not null,
  lf          char(1)
);
create unique index fmsgrca1 on fmsgrcaf
(
fmgccode,
fmgcseq,
fmgcledg,
fmgccc
);
revoke all on fmsgrcaf from public ; 
grant select on fmsgrcaf to public ; 
