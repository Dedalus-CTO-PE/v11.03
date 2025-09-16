create table pmspwaaf
(
  pmpwcntr    varchar2(6) default ' ' not null,
  pmpwdrgc    varchar2(4) default ' ' not null,
  pmpwdrgd    varchar2(80) default ' ' not null,
  pmpwsdpy    varchar2(1) default ' ' not null,
  pmpwbicu    varchar2(1) default ' ' not null,
  pmpwalos    number(8,2) default 0 not null,
  pmpwlowb    number(4,0) default 0 not null,
  pmpwuppb    number(4,0) default 0 not null,
  pmpwpsrv    number(5,2) default 0 not null,
  pmpwpaed    number(5,2) default 0 not null,
  pmpwsday    number(14,4) default 0 not null,
  pmpwssob    number(14,4) default 0 not null,
  pmpwssop    number(14,4) default 0 not null,
  pmpwinli    number(14,4) default 0 not null,
  pmpwlsop    number(14,4) default 0 not null,
  pmpwcdat    varchar2(8) default ' ' not null,
  pmpwctim    varchar2(8) default ' ' not null,
  pmpwcuid    varchar2(10) default ' ' not null,
  pmpwudat    varchar2(8) default ' ' not null,
  pmpwutim    varchar2(8) default ' ' not null,
  pmpwuuid    varchar2(10) default ' ' not null,
  pmpwspar    varchar2(50) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint pmspwaa1 primary key( 
pmpwcntr,
pmpwdrgc)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index pmspwaa2 on pmspwaaf
(
pmpwdrgc,
pmpwcntr
)
  tablespace pas_indx; 
