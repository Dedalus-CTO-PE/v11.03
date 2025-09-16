create table tmpdteaf
(
  tmdttdat    varchar2(8) default ' ' not null,
  tmdtrecn    varchar2(12) default ' ' not null,
  tmdttcnt    varchar2(5) default ' ' not null,
  tmdtregi    varchar2(3) default ' ' not null,
  tmdtinvn    varchar2(12) default ' ' not null,
  tmdtvist    varchar2(8) default ' ' not null,
  tmdturno    varchar2(8) default ' ' not null,
  tmdtname    varchar2(50) default ' ' not null,
  tmdtadd1    varchar2(35) default ' ' not null,
  tmdtadd2    varchar2(35) default ' ' not null,
  tmdtadd3    varchar2(35) default ' ' not null,
  tmdtadd4    varchar2(35) default ' ' not null,
  tmdtpost    varchar2(8) default ' ' not null,
  tmdtsflg    varchar2(1) default ' ' not null,
  tmdtrefr    varchar2(17) default ' ' not null,
  tmdtinca    varchar2(14) default ' ' not null,
  tmdtbnka    varchar2(14) default ' ' not null,
  tmdtamnt    number(14,2) default 0 not null,
  tmdtdisc    number(14,2) default 0 not null,
  tmdtmhos    varchar2(3) default ' ' not null,
  tmdtmdhs    varchar2(2) default ' ' not null,
  tmdtgstc    varchar2(6) default ' ' not null,
  tmdtgsta    varchar2(14) default ' ' not null,
  tmdtallo    varchar2(1) default ' ' not null,
  tmdtreld    varchar2(8) default ' ' not null,
  tmdtrelt    varchar2(8) default ' ' not null,
  tmdtprac    varchar2(6) default ' ' not null,
  tmdtcdat    varchar2(8) default ' ' not null,
  tmdtctim    varchar2(8) default ' ' not null,
  tmdtcuid    varchar2(10) default ' ' not null,
  tmdtudat    varchar2(8) default ' ' not null,
  tmdtutim    varchar2(8) default ' ' not null,
  tmdtuuid    varchar2(10) default ' ' not null,
  tmdtdpty    varchar2(3) default ' ' not null,
  tmdtprin    varchar2(1) default ' ' not null,
  tmdtprnt    varchar2(6) default ' ' not null,
  tmdttamt    number(14,2) default 0 not null,
  tmdtsdoc    varchar2(10) default ' ' not null,
  tmdtspar    varchar2(22) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint tmpdtea1 primary key( 
tmdtrecn,
tmdttcnt)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index tmpdtea2 on tmpdteaf
(
tmdtreld,
tmdtrecn,
tmdttcnt
)
  tablespace pas_indx; 
create unique index tmpdtea3 on tmpdteaf
(
tmdtinvn,
tmdtrecn,
tmdttcnt
)
  tablespace pas_indx; 
create unique index tmpdtea4 on tmpdteaf
(
tmdtallo,
tmdtrecn,
tmdttcnt
)
  tablespace pas_indx; 
create unique index tmpdtea5 on tmpdteaf
(
tmdturno,
tmdtrecn,
tmdttcnt
)
  tablespace pas_indx; 
