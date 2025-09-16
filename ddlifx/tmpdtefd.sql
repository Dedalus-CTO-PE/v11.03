create table tmpdteaf
(
  tmdttdat    char(8) default ' ' not null,
  tmdtrecn    char(12) default ' ' not null,
  tmdttcnt    char(5) default ' ' not null,
  tmdtregi    char(3) default ' ' not null,
  tmdtinvn    char(12) default ' ' not null,
  tmdtvist    char(8) default ' ' not null,
  tmdturno    char(8) default ' ' not null,
  tmdtname    char(50) default ' ' not null,
  tmdtadd1    char(35) default ' ' not null,
  tmdtadd2    char(35) default ' ' not null,
  tmdtadd3    char(35) default ' ' not null,
  tmdtadd4    char(35) default ' ' not null,
  tmdtpost    char(8) default ' ' not null,
  tmdtsflg    char(1) default ' ' not null,
  tmdtrefr    char(17) default ' ' not null,
  tmdtinca    char(14) default ' ' not null,
  tmdtbnka    char(14) default ' ' not null,
  tmdtamnt    decimal(14,2) default 0 not null,
  tmdtdisc    decimal(14,2) default 0 not null,
  tmdtmhos    char(3) default ' ' not null,
  tmdtmdhs    char(2) default ' ' not null,
  tmdtgstc    char(6) default ' ' not null,
  tmdtgsta    char(14) default ' ' not null,
  tmdtallo    char(1) default ' ' not null,
  tmdtreld    char(8) default ' ' not null,
  tmdtrelt    char(8) default ' ' not null,
  tmdtprac    char(6) default ' ' not null,
  tmdtcdat    char(8) default ' ' not null,
  tmdtctim    char(8) default ' ' not null,
  tmdtcuid    char(10) default ' ' not null,
  tmdtudat    char(8) default ' ' not null,
  tmdtutim    char(8) default ' ' not null,
  tmdtuuid    char(10) default ' ' not null,
  tmdtdpty    char(3) default ' ' not null,
  tmdtprin    char(1) default ' ' not null,
  tmdtprnt    char(6) default ' ' not null,
  tmdttamt    decimal(14,2) default 0 not null,
  tmdtsdoc    char(10) default ' ' not null,
  tmdtspar    char(22) default ' ' not null,
  lf          char(1)
);
create unique index tmpdtea1 on tmpdteaf
(
tmdtrecn,
tmdttcnt
);
create unique index tmpdtea2 on tmpdteaf
(
tmdtreld,
tmdtrecn,
tmdttcnt
);
create unique index tmpdtea3 on tmpdteaf
(
tmdtinvn,
tmdtrecn,
tmdttcnt
);
create unique index tmpdtea4 on tmpdteaf
(
tmdtallo,
tmdtrecn,
tmdttcnt
);
create unique index tmpdtea5 on tmpdteaf
(
tmdturno,
tmdtrecn,
tmdttcnt
);
revoke all on tmpdteaf from public ; 
grant select on tmpdteaf to public ; 
