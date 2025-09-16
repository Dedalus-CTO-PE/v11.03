create table patafeaf
(
  ptfeclmn    char(3) default ' ' not null,
  ptfehfnd    char(6) default ' ' not null,
  ptfetabt    char(3) default ' ' not null,
  ptfecasm    char(9) default ' ' not null,
  ptfebtyp    char(3) default ' ' not null,
  dptfeeda    char(4) default ' ' not null,
  ptfedes1    char(30) default ' ' not null,
  ptfedes2    char(35) default ' ' not null,
  ptfedreb    decimal(14,2) default 0 not null,
  ptfedpat    decimal(14,2) default 0 not null,
  ptfeacin    char(1) default ' ' not null,
  ptfecnid    char(6) default ' ' not null,
  ptfefigr    char(3) default ' ' not null,
  ptfenpdy    char(1) default ' ' not null,
  ptfespar    char(10) default ' ' not null,
  lf          char(1)
);
create unique index patafea1 on patafeaf
(
ptfecnid,
ptfeclmn,
ptfehfnd,
ptfetabt,
ptfecasm,
ptfebtyp,
dptfeeda
);
revoke all on patafeaf from public ; 
grant select on patafeaf to public ; 
