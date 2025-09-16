create table fmsgrsaf
(
  fmgscode    char(3) default ' ' not null,
  fmgsseq     char(5) default ' ' not null,
  fmgsledg    char(2) default ' ' not null,
  fmgssubj    char(12) default ' ' not null,
  fmgsspar    char(18) default ' ' not null,
  lf          char(1)
);
create unique index fmsgrsa1 on fmsgrsaf
(
fmgscode,
fmgsseq,
fmgsledg,
fmgssubj
);
revoke all on fmsgrsaf from public ; 
grant select on fmsgrsaf to public ; 
