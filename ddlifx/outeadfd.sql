create table outeadaf
(
  otedclid    char(6) default ' ' not null,
  otedrptc    char(3) default ' ' not null,
  otedsrvi    char(4) default ' ' not null,
  otedsrvc    char(3) default ' ' not null,
  oteditmn    char(5) default ' ' not null,
  otedserb    char(9) default ' ' not null,
  otednopa    char(2) default ' ' not null,
  otedexpc    char(3) default ' ' not null,
  otedctid    char(24) default ' ' not null,
  otedrkey    char(24) default ' ' not null,
  otedspar    char(30) default ' ' not null,
  lf          char(1)
);
create unique index outeada1 on outeadaf
(
otedclid,
otedrptc,
otedsrvi,
otedsrvc,
otedrkey
);
create unique index outeada2 on outeadaf
(
otedctid,
otedclid,
otedrptc,
otedsrvi,
otedsrvc,
otedrkey
);
revoke all on outeadaf from public ; 
grant select on outeadaf to public ; 
