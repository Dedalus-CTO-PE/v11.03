create table rcpdteaf
(
  rcdttdat    varchar2(8) default ' ' not null,
  rcdtrecn    varchar2(12) default ' ' not null,
  rcdttcnt    varchar2(5) default ' ' not null,
  rcdtregi    varchar2(3) default ' ' not null,
  rcdtinvn    varchar2(12) default ' ' not null,
  rcdtvist    varchar2(8) default ' ' not null,
  rcdturno    varchar2(8) default ' ' not null,
  rcdtname    varchar2(50) default ' ' not null,
  rcdtadd1    varchar2(35) default ' ' not null,
  rcdtadd2    varchar2(35) default ' ' not null,
  rcdtadd3    varchar2(35) default ' ' not null,
  rcdtadd4    varchar2(35) default ' ' not null,
  rcdtpost    varchar2(8) default ' ' not null,
  rcdtsflg    varchar2(1) default ' ' not null,
  rcdtrefr    varchar2(17) default ' ' not null,
  rcdtinca    varchar2(14) default ' ' not null,
  rcdtbnka    varchar2(14) default ' ' not null,
  rcdtamnt    number(14,2) default 0 not null,
  rcdtdisc    number(14,2) default 0 not null,
  rcdtmhos    varchar2(3) default ' ' not null,
  rcdtmdhs    varchar2(2) default ' ' not null,
  rcdtgstc    varchar2(6) default ' ' not null,
  rcdtgsta    varchar2(14) default ' ' not null,
  rcdtallo    varchar2(1) default ' ' not null,
  rcdtreld    varchar2(8) default ' ' not null,
  rcdtrelt    varchar2(8) default ' ' not null,
  rcdtprac    varchar2(6) default ' ' not null,
  rcdtcdat    varchar2(8) default ' ' not null,
  rcdtctim    varchar2(8) default ' ' not null,
  rcdtcuid    varchar2(10) default ' ' not null,
  rcdtudat    varchar2(8) default ' ' not null,
  rcdtutim    varchar2(8) default ' ' not null,
  rcdtuuid    varchar2(10) default ' ' not null,
  rcdtdpty    varchar2(3) default ' ' not null,
  rcdtglex    varchar2(1) default ' ' not null,
  rcdtbatn    varchar2(8) default ' ' not null,
  rcdtrelu    varchar2(10) default ' ' not null,
  rcdtspui    varchar2(10) default ' ' not null,
  rcdtspdt    varchar2(8) default ' ' not null,
  rcdtsptm    varchar2(8) default ' ' not null,
  rcdtsdoc    varchar2(10) default ' ' not null,
  rcdteadn    varchar2(20) default ' ' not null,
  rcdtspar    varchar2(7) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint rcpdtea1 primary key( 
rcdtrecn,
rcdttcnt)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index rcpdtea2 on rcpdteaf
(
rcdtreld,
rcdtrecn,
rcdttcnt
)
  tablespace pas_indx; 
create unique index rcpdtea3 on rcpdteaf
(
rcdtinvn,
rcdtrecn,
rcdttcnt
)
  tablespace pas_indx; 
create unique index rcpdtea4 on rcpdteaf
(
rcdtallo,
rcdtrecn,
rcdttcnt
)
  tablespace pas_indx; 
create unique index rcpdtea5 on rcpdteaf
(
rcdturno,
rcdtrecn,
rcdttcnt
)
  tablespace pas_indx; 
create unique index rcpdtea6 on rcpdteaf
(
rcdtvist,
rcdtrecn,
rcdttcnt
)
  tablespace pas_indx; 
