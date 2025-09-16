create table alldadaf
(
  aldavisn    varchar2(8) default ' ' not null,
  aldafhos    varchar2(5) default ' ' not null,
  aldathos    varchar2(5) default ' ' not null,
  aldaspar    varchar2(50) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint alldada1 primary key( 
aldavisn)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
