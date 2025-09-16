create table emribhaf
(
  emibbthn    varchar2(8) default ' ' not null,
  emibbhtl    number(14,2) default 0 not null,
  emibtrib    number(6,0) default 0 not null,
  emibdtbc    varchar2(8) default ' ' not null,
  emibtmbc    varchar2(8) default ' ' not null,
  emiboper    varchar2(10) default ' ' not null,
  emibefnm    varchar2(18) default ' ' not null,
  emiblocn    varchar2(8) default ' ' not null,
  emibsnid    varchar2(60) default ' ' not null,
  emibspar    varchar2(20) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint emribha1 primary key( 
emibbthn)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index emribha2 on emribhaf
(
emibdtbc,
emibbthn
)
  tablespace pas_indx; 
