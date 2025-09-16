create table emrechaf
(
  emehuniq    varchar2(10) default ' ' not null,
  emehtype    varchar2(3) default ' ' not null,
  emehnote    varchar2(6) default ' ' not null,
  emehcdat    varchar2(8) default ' ' not null,
  emehctim    varchar2(8) default ' ' not null,
  emehcuid    varchar2(10) default ' ' not null,
  emehoccg    varchar2(3) default ' ' not null,
  emehdelt    varchar2(1) default ' ' not null,
  emehddat    varchar2(8) default ' ' not null,
  emehdtim    varchar2(8) default ' ' not null,
  emehduid    varchar2(10) default ' ' not null,
  emehdocc    varchar2(3) default ' ' not null,
  emehspar    varchar2(30) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint emrecha1 primary key( 
emehuniq,
emehtype,
emehnote)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
