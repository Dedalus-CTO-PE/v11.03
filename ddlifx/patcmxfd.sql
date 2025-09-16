create table patcmxaf
(
  ptcmclmn    char(3) default ' ' not null,
  ptcmhfnd    char(6) default ' ' not null,
  ptcmcasm    char(9) default ' ' not null,
  ptcmxlos    decimal(4,0) default 0 not null,
  ptcmdifg    decimal(1,0) default 0 not null,
  ptcmcnid    char(6) default ' ' not null,
  ptcmeceq    char(11) default ' ' not null,
  ptcmects    char(2) default ' ' not null,
  ptcmtrpt    char(3) default ' ' not null,
  ptcmtlos    decimal(4,0) default 0 not null,
  ptcmehcp    char(2) default ' ' not null,
  ptcmspar    char(45) default ' ' not null,
  lf          char(1)
);
create unique index patcmxa1 on patcmxaf
(
ptcmclmn,
ptcmhfnd,
ptcmcasm,
ptcmcnid
);
create unique index patcmxa2 on patcmxaf
(
ptcmcnid,
ptcmclmn,
ptcmhfnd,
ptcmcasm
);
revoke all on patcmxaf from public ; 
grant select on patcmxaf to public ; 
