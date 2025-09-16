create table obsnddaf
(
  obndvisn    varchar2(8) default ' ' not null,
  obndndg1    varchar2(80) default ' ' not null,
  obndacp1    varchar2(80) default ' ' not null,
  obndndg2    varchar2(80) default ' ' not null,
  obndacp2    varchar2(80) default ' ' not null,
  obndndg3    varchar2(80) default ' ' not null,
  obndacp3    varchar2(80) default ' ' not null,
  obndndg4    varchar2(80) default ' ' not null,
  obndacp4    varchar2(80) default ' ' not null,
  obndndg5    varchar2(80) default ' ' not null,
  obndacp5    varchar2(80) default ' ' not null,
  obndndg6    varchar2(80) default ' ' not null,
  obndacp6    varchar2(80) default ' ' not null,
  obndspar    varchar2(80) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint obsndda1 primary key( 
obndvisn)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
