create table patbdeaf
(
  ptbehosp    char(3) default ' ' not null,
  ptbesdte    char(8) default ' ' not null,
  ptbeedte    char(8) default ' ' not null,
  ptbevsid    char(30) default ' ' not null,
  ptbeclmc    char(3) default ' ' not null,
  ptbehfnd    char(6) default ' ' not null,
  ptbehftb    char(8) default ' ' not null,
  ptbeilos    char(3) default ' ' not null,
  ptbetlos    decimal(3,0) default 0 not null,
  ptbecsmx    char(9) default ' ' not null,
  ptbecpay    char(1) default ' ' not null,
  ptbedrgc    char(4) default ' ' not null,
  ptbedrgv    char(3) default ' ' not null,
  ptbeadmn    char(3) default ' ' not null,
  ptbecare    char(3) default ' ' not null,
  ptbeprgm    char(8) default ' ' not null,
  ptbepill    char(3) default ' ' not null,
  ptbembsi    char(9) default ' ' not null,
  ptbealer    char(3) default ' ' not null,
  ptbecdat    char(8) default ' ' not null,
  ptbectim    char(8) default ' ' not null,
  ptbecuid    char(10) default ' ' not null,
  ptbeudat    char(8) default ' ' not null,
  ptbeutim    char(8) default ' ' not null,
  ptbeuuid    char(10) default ' ' not null,
  ptbespar    char(79) default ' ' not null,
  lf          char(1)
);
create unique index patbdea1 on patbdeaf
(
ptbehosp,
ptbeclmc,
ptbehfnd,
ptbehftb,
ptbevsid,
ptbesdte
);
revoke all on patbdeaf from public ; 
grant select on patbdeaf to public ; 
