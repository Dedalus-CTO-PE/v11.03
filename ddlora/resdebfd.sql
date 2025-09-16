create table resdebaf
(
  redbrdt     varchar2(8) default ' ' not null,
  redbrtm     varchar2(5) default ' ' not null,
  redbrun     varchar2(4) default ' ' not null,
  redbsid     varchar2(4) default ' ' not null,
  redblno     varchar2(3) default ' ' not null,
  redbtxt     varchar2(127) default ' ' not null,
  redbspa     varchar2(10) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint resdeba1 primary key( 
redbrdt,
redbrtm,
redbrun,
redbsid,
redblno)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
