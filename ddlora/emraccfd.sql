create table emraccaf
(
  emaccode    varchar2(30) default ' ' not null,
  emacfdat    varchar2(8) default ' ' not null,
  emactdat    varchar2(8) default ' ' not null,
  emacclas    varchar2(6) default ' ' not null,
  emacdesc    varchar2(100) default ' ' not null,
  emacdmin    varchar2(10) default ' ' not null,
  emacmaxs    number(9,6) default 0 not null,
  emacmxsi    varchar2(1) default ' ' not null,
  emaccdat    varchar2(8) default ' ' not null,
  emacctim    varchar2(8) default ' ' not null,
  emaccuid    varchar2(10) default ' ' not null,
  emacudat    varchar2(8) default ' ' not null,
  emacutim    varchar2(8) default ' ' not null,
  emacuuid    varchar2(10) default ' ' not null,
  emacaflg    varchar2(1) default ' ' not null,
  emacspar    varchar2(100) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint emracca1 primary key( 
emaccode,
emacdmin,
emacfdat)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index emracca2 on emraccaf
(
emaccode,
emacfdat,
emacdmin
)
  tablespace pas_indx; 
