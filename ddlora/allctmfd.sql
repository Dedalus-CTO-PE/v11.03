create table allctmaf
(
  alctteam    varchar2(10) default ' ' not null,
  alcthcpc    varchar2(10) default ' ' not null,
  alctsdat    varchar2(8) default ' ' not null,
  alctedat    varchar2(8) default ' ' not null,
  alctcdat    varchar2(8) default ' ' not null,
  alctctim    varchar2(8) default ' ' not null,
  alctcuid    varchar2(10) default ' ' not null,
  alctudat    varchar2(8) default ' ' not null,
  alctutim    varchar2(8) default ' ' not null,
  alctuuid    varchar2(10) default ' ' not null,
  alctspar    varchar2(50) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint allctma1 primary key( 
alctteam,
alcthcpc)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index allctma2 on allctmaf
(
alcthcpc,
alctteam
)
  tablespace pas_indx; 
