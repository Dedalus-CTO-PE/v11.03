create table emrpwdaf
(
  empwcntr    varchar2(6) default ' ' not null,
  empwurgv    varchar2(6) default ' ' not null,
  empwurgd    varchar2(80) default ' ' not null,
  empwpwei    number(14,4) default 0 not null,
  empwcdat    varchar2(8) default ' ' not null,
  empwctim    varchar2(8) default ' ' not null,
  empwcuid    varchar2(10) default ' ' not null,
  empwudat    varchar2(8) default ' ' not null,
  empwutim    varchar2(8) default ' ' not null,
  empwuuid    varchar2(10) default ' ' not null,
  empwspar    varchar2(50) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint emrpwda1 primary key( 
empwcntr,
empwurgv)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index emrpwda2 on emrpwdaf
(
empwurgv,
empwcntr
)
  tablespace pas_indx; 
