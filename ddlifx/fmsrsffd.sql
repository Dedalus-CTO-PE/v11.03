create table fmsrsfaf
(
  fmrfrep     char(2) default ' ' not null,
  fmrfpos     char(5) default ' ' not null,
  fmrfseq     char(5) default ' ' not null,
  fmrfled     char(2) default ' ' not null,
  fmrfacc     char(12) default ' ' not null,
  fmrfprt     char(3) default ' ' not null,
  fmrfcrp     char(1) default ' ' not null,
  fmrfspar    char(14) default ' ' not null,
  lf          char(1)
);
create unique index fmsrsfa1 on fmsrsfaf
(
fmrfrep,
fmrfpos,
fmrfseq,
fmrfled,
fmrfacc
);
create unique index fmsrsfa2 on fmsrsfaf
(
fmrfled,
fmrfacc,
fmrfrep,
fmrfpos,
fmrfseq
);
create unique index fmsrsfa3 on fmsrsfaf
(
fmrfled,
fmrfrep,
fmrfpos,
fmrfseq,
fmrfacc
);
revoke all on fmsrsfaf from public ; 
grant select on fmsrsfaf to public ; 
