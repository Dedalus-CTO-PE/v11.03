create table oprrciaf
(
  oprclocn    varchar2(3) default ' ' not null,
  oprcsdat    varchar2(8) default ' ' not null,
  oprcstim    varchar2(8) default ' ' not null,
  oprcedat    varchar2(8) default ' ' not null,
  oprcetim    varchar2(8) default ' ' not null,
  oprcreas    varchar2(3) default ' ' not null,
  oprccsui    varchar2(10) default ' ' not null,
  oprccdat    varchar2(8) default ' ' not null,
  oprcctim    varchar2(8) default ' ' not null,
  oprcceui    varchar2(10) default ' ' not null,
  oprccedt    varchar2(8) default ' ' not null,
  oprccetm    varchar2(8) default ' ' not null,
  oprchosp    varchar2(3) default ' ' not null,
  oprcspar    varchar2(27) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint oprrcia1 primary key( 
oprclocn,
oprcsdat,
oprcstim,
oprchosp)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index oprrcia2 on oprrciaf
(
oprcsdat,
oprclocn,
oprcstim,
oprchosp
)
  tablespace pas_indx; 
