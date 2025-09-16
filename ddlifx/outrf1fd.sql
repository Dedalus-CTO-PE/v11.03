create table outrf1af
(
  otrloutn    char(8) default ' ' not null,
  otrlurno    char(8) default ' ' not null,
  otrldate    char(8) default ' ' not null,
  otrlrdoc    char(10) default ' ' not null,
  otrlcons    char(6) default ' ' not null,
  otrldept    char(3) default ' ' not null,
  otrlprio    char(3) default ' ' not null,
  otrldiag    char(50) default ' ' not null,
  otrlusd1    char(3) default ' ' not null,
  otrlusd2    char(3) default ' ' not null,
  otrlusd3    char(3) default ' ' not null,
  otrlusd4    char(3) default ' ' not null,
  otrlbsit    char(6) default ' ' not null,
  otrlbcli    char(6) default ' ' not null,
  otrlbdte    char(8) default ' ' not null,
  otrlbstr    char(5) default ' ' not null,
  otrlbslt    char(3) default ' ' not null,
  otrlrfgp    char(10) default ' ' not null,
  otrlgppc    char(10) default ' ' not null,
  otrlrqst    char(20) default ' ' not null,
  otrlcdte    char(8) default ' ' not null,
  otrlreas    char(3) default ' ' not null,
  otrlspfc    char(3) default ' ' not null,
  otrlcad1    char(35) default ' ' not null,
  otrlcad2    char(35) default ' ' not null,
  otrlcad3    char(35) default ' ' not null,
  otrlcad4    char(35) default ' ' not null,
  otrlcpc     char(8) default ' ' not null,
  otrlecrn    char(20) default ' ' not null,
  otrlgpfh    char(20) default ' ' not null,
  otrlgppt    char(2) default ' ' not null,
  otrloper    char(4) default ' ' not null,
  otrlctyp    char(6) default ' ' not null,
  otrlsite    char(6) default ' ' not null,
  otrlsrce    char(3) default ' ' not null,
  otrlrhcp    char(10) default ' ' not null,
  otrldrec    char(8) default ' ' not null,
  otrldpri    char(8) default ' ' not null,
  otrlpurc    char(3) default ' ' not null,
  otrltref    decimal(1,0) default 0 not null,
  otrlrank    char(6) default ' ' not null,
  otrludat    char(8) default ' ' not null,
  otrlutim    char(8) default ' ' not null,
  otrluuid    char(10) default ' ' not null,
  otrlcdat    char(8) default ' ' not null,
  otrlctim    char(8) default ' ' not null,
  otrlcuid    char(8) default ' ' not null,
  otrlclam    char(3) default ' ' not null,
  otrltrgs    char(3) default ' ' not null,
  otrlspre    char(33) default ' ' not null,
  lf          char(1)
);
create unique index outrf1a1 on outrf1af
(
otrloutn
);
create unique index outrf1a2 on outrf1af
(
otrlurno,
otrldate,
otrloutn
);
create unique index outrf1a3 on outrf1af
(
otrlprio,
otrldate,
otrloutn
);
create unique index outrf1a4 on outrf1af
(
otrlrdoc,
otrldate,
otrloutn
);
create unique index outrf1a5 on outrf1af
(
otrlcons,
otrldate,
otrloutn
);
create unique index outrf1a6 on outrf1af
(
otrldate,
otrloutn
);
create unique index outrf1a7 on outrf1af
(
otrlctyp,
otrldate,
otrloutn
);
revoke all on outrf1af from public ; 
grant select on outrf1af to public ; 
