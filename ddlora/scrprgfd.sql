create table scrprgaf
(
  scprpid     varchar2(8) default ' ' not null,
  scprnam     varchar2(40) default ' ' not null,
  scprnat     varchar2(40) default ' ' not null,
  scprcbf     varchar2(8) default ' ' not null,
  scprcaf     varchar2(8) default ' ' not null,
  scprisc     varchar2(2) default ' ' not null,
  scprspa     varchar2(22) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint scrprga1 primary key( 
scprpid)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
