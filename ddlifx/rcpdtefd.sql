create table rcpdteaf
(
  rcdttdat    char(8) default ' ' not null,
  rcdtrecn    char(12) default ' ' not null,
  rcdttcnt    char(5) default ' ' not null,
  rcdtregi    char(3) default ' ' not null,
  rcdtinvn    char(12) default ' ' not null,
  rcdtvist    char(8) default ' ' not null,
  rcdturno    char(8) default ' ' not null,
  rcdtname    char(50) default ' ' not null,
  rcdtadd1    char(35) default ' ' not null,
  rcdtadd2    char(35) default ' ' not null,
  rcdtadd3    char(35) default ' ' not null,
  rcdtadd4    char(35) default ' ' not null,
  rcdtpost    char(8) default ' ' not null,
  rcdtsflg    char(1) default ' ' not null,
  rcdtrefr    char(17) default ' ' not null,
  rcdtinca    char(14) default ' ' not null,
  rcdtbnka    char(14) default ' ' not null,
  rcdtamnt    decimal(14,2) default 0 not null,
  rcdtdisc    decimal(14,2) default 0 not null,
  rcdtmhos    char(3) default ' ' not null,
  rcdtmdhs    char(2) default ' ' not null,
  rcdtgstc    char(6) default ' ' not null,
  rcdtgsta    char(14) default ' ' not null,
  rcdtallo    char(1) default ' ' not null,
  rcdtreld    char(8) default ' ' not null,
  rcdtrelt    char(8) default ' ' not null,
  rcdtprac    char(6) default ' ' not null,
  rcdtcdat    char(8) default ' ' not null,
  rcdtctim    char(8) default ' ' not null,
  rcdtcuid    char(10) default ' ' not null,
  rcdtudat    char(8) default ' ' not null,
  rcdtutim    char(8) default ' ' not null,
  rcdtuuid    char(10) default ' ' not null,
  rcdtdpty    char(3) default ' ' not null,
  rcdtglex    char(1) default ' ' not null,
  rcdtbatn    char(8) default ' ' not null,
  rcdtrelu    char(10) default ' ' not null,
  rcdtspui    char(10) default ' ' not null,
  rcdtspdt    char(8) default ' ' not null,
  rcdtsptm    char(8) default ' ' not null,
  rcdtsdoc    char(10) default ' ' not null,
  rcdteadn    char(20) default ' ' not null,
  rcdtspar    char(7) default ' ' not null,
  lf          char(1)
);
create unique index rcpdtea1 on rcpdteaf
(
rcdtrecn,
rcdttcnt
);
create unique index rcpdtea2 on rcpdteaf
(
rcdtreld,
rcdtrecn,
rcdttcnt
);
create unique index rcpdtea3 on rcpdteaf
(
rcdtinvn,
rcdtrecn,
rcdttcnt
);
create unique index rcpdtea4 on rcpdteaf
(
rcdtallo,
rcdtrecn,
rcdttcnt
);
create unique index rcpdtea5 on rcpdteaf
(
rcdturno,
rcdtrecn,
rcdttcnt
);
create unique index rcpdtea6 on rcpdteaf
(
rcdtvist,
rcdtrecn,
rcdttcnt
);
revoke all on rcpdteaf from public ; 
grant select on rcpdteaf to public ; 
