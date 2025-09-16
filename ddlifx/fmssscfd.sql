create table fmssscaf
(
  fmtstled    char(2) default ' ' not null,
  fmtstacc    char(12) default ' ' not null,
  fmtsaseq    char(5) default ' ' not null,
  fmtssacc    char(12) default ' ' not null,
  fmtsaddt    char(1) default ' ' not null,
  fmtssubj    char(1) default ' ' not null,
  fmtsspar    char(19) default ' ' not null,
  lf          char(1)
);
create unique index fmsssca1 on fmssscaf
(
fmtstled,
fmtstacc,
fmtsaseq,
fmtssacc
);
create unique index fmsssca2 on fmssscaf
(
fmtstled,
fmtssacc,
fmtstacc,
fmtsaseq
);
revoke all on fmssscaf from public ; 
grant select on fmssscaf to public ; 
