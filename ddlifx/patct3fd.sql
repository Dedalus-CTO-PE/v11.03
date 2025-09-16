create table oldctfaf
(
  ptctclmn    char(3) default ' ' not null,
  ptcthfnd    char(6) default ' ' not null,
  ptcttabt    char(3) default ' ' not null,
  ptctcasm    char(9) default ' ' not null,
  ptctmbsb    char(3) default ' ' not null,
  dptctdca    char(1) default ' ' not null,
  dptctitm    char(2) default ' ' not null,
  ptctdreb    decimal(14,2) default 0 not null,
  ptctdpat    decimal(14,2) default 0 not null,
  ptctcnid    char(6) default ' ' not null,
  ptctspar    char(11) default ' ' not null,
  lf          char(1)
);
create unique index patct2a1 on oldctfaf
(
ptctcnid,
ptctclmn,
ptcthfnd,
ptcttabt,
ptctcasm,
ptctmbsb,
dptctdca,
dptctitm
);
create unique index patct2a2 on oldctfaf
(
ptctcnid,
ptctclmn,
ptcthfnd,
ptcttabt,
ptctmbsb,
ptctcasm,
dptctdca,
dptctitm
);
create unique index patct2a3 on oldctfaf
(
dptctitm,
ptctclmn,
ptcthfnd,
ptcttabt,
ptctmbsb,
ptctcasm,
dptctdca,
ptctcnid
);
revoke all on oldctfaf from public ; 
grant select on oldctfaf to public ; 
