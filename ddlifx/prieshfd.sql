create table prieshaf
(
  prshfbid    char(3) default ' ' not null,
  prsharid    char(20) default ' ' not null,
  prshclid    char(6) default ' ' not null,
  prshrptc    char(3) default ' ' not null,
  prshitmn    char(5) default ' ' not null,
  prshsrvc    char(3) default ' ' not null,
  prshcamt    char(9) default ' ' not null,
  prshfbam    char(9) default ' ' not null,
  prshsdte    char(8) default ' ' not null,
  prshmbam    char(9) default ' ' not null,
  prshmexc    char(3) default ' ' not null,
  prshschf    char(9) default ' ' not null,
  prshsfac    char(1) default ' ' not null,
  prshsvid    char(4) default ' ' not null,
  prshspar    char(30) default ' ' not null,
  lf          char(1)
);
create unique index priesha1 on prieshaf
(
prshfbid,
prsharid,
prshclid,
prshrptc,
prshitmn,
prshsrvc
);
revoke all on prieshaf from public ; 
grant select on prieshaf to public ; 
