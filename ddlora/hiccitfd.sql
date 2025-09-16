create table hiccitaf
(
  hcciclmn    varchar2(8) default ' ' not null,
  hccivisn    varchar2(8) default ' ' not null,
  hccitran    varchar2(2) default ' ' not null,
  hccipmci    varchar2(8) default ' ' not null,
  hccipyee    varchar2(10) default ' ' not null,
  hccipsrv    varchar2(10) default ' ' not null,
  hccibtch    varchar2(5) default ' ' not null,
  hcciiflg    varchar2(2) default ' ' not null,
  hcciitmn    varchar2(9) default ' ' not null,
  hccisubn    varchar2(3) default ' ' not null,
  hcciidat    varchar2(8) default ' ' not null,
  hccicamt    number(14,2) default 0 not null,
  hccircva    number(14,2) default 0 not null,
  hccireja    number(14,2) default 0 not null,
  hcciwoff    number(14,2) default 0 not null,
  hccitrin    number(14,2) default 0 not null,
  hcciadjm    number(14,2) default 0 not null,
  hccirejr    varchar2(3) default ' ' not null,
  hccirejd    varchar2(8) default ' ' not null,
  hccirwof    varchar2(3) default ' ' not null,
  hcciwofd    varchar2(8) default ' ' not null,
  hccitrnd    varchar2(8) default ' ' not null,
  hccicdat    varchar2(8) default ' ' not null,
  hccictim    varchar2(8) default ' ' not null,
  hccicuid    varchar2(10) default ' ' not null,
  hcciudat    varchar2(8) default ' ' not null,
  hcciutim    varchar2(8) default ' ' not null,
  hcciuuid    varchar2(10) default ' ' not null,
  hcciides    varchar2(30) default ' ' not null,
  hccirdat    varchar2(8) default ' ' not null,
  hcciadjr    varchar2(3) default ' ' not null,
  hcciadjd    varchar2(8) default ' ' not null,
  hcciipos    varchar2(2) default ' ' not null,
  hccipuse    varchar2(20) default ' ' not null,
  hccispar    varchar2(25) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint hiccita1 primary key( 
hcciclmn,
hccivisn,
hccitran)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index hiccita2 on hiccitaf
(
hccivisn,
hccitran,
hcciclmn
)
  tablespace pas_indx; 
