create table watnbdaf
(
  wtndlbid    varchar2(9) default ' ' not null,
  wtndpnhi    varchar2(8) default ' ' not null,
  wtndbscd    varchar2(2) default ' ' not null,
  wtndbsdt    varchar2(8) default ' ' not null,
  wtndfaci    varchar2(4) default ' ' not null,
  wtndxdat    varchar2(8) default ' ' not null,
  wtndbtch    varchar2(5) default ' ' not null,
  wtndstat    varchar2(1) default ' ' not null,
  wtndline    varchar2(5) default ' ' not null,
  wtnderrc    varchar2(2) default ' ' not null,
  wtndakrt    varchar2(2) default ' ' not null,
  wtndmsgn    varchar2(7) default ' ' not null,
  wtndmsgt    varchar2(255) default ' ' not null,
  wtndusrs    varchar2(10) default ' ' not null,
  wtndudat    varchar2(8) default ' ' not null,
  wtndutim    varchar2(8) default ' ' not null,
  wtndrdet    varchar2(200) default ' ' not null,
  wtndspar    varchar2(100) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint watnbda1 primary key( 
wtndlbid,
wtndbscd,
wtndbsdt,
wtndline,
wtndbtch,
wtnderrc)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index watnbda2 on watnbdaf
(
wtndlbid,
wtndbscd,
wtndbsdt,
wtndline,
wtndbtch,
wtndstat,
wtnderrc
)
  tablespace pas_indx; 
create unique index watnbda3 on watnbdaf
(
wtndlbid,
wtndbscd,
wtndbsdt,
wtndline,
wtndbtch,
wtndakrt,
wtnderrc
)
  tablespace pas_indx; 
create unique index watnbda4 on watnbdaf
(
wtndbtch,
wtndlbid,
wtndbscd,
wtndbsdt,
wtndline,
wtnderrc
)
  tablespace pas_indx; 
