create table allstsaf
(
  alstvisn    varchar2(8) default ' ' not null,
  alststat    varchar2(1) default ' ' not null,
  alstsdat    varchar2(8) default ' ' not null,
  alstcdat    varchar2(8) default ' ' not null,
  alstctim    varchar2(8) default ' ' not null,
  alstcuid    varchar2(10) default ' ' not null,
  alstudat    varchar2(8) default ' ' not null,
  alstutim    varchar2(8) default ' ' not null,
  alstuuid    varchar2(10) default ' ' not null,
  alstspar    varchar2(40) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint allstsa1 primary key( 
alstvisn,
alststat,
alstsdat)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
