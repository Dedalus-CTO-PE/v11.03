create table ccstimaf
(
  cctmdef     varchar2(1) default ' ' not null,
  cctmdat     varchar2(8) default ' ' not null,
  cctmdes     varchar2(35) default ' ' not null,
  cctmlv2     varchar2(10) default ' ' not null,
  cctmlv3     varchar2(10) default ' ' not null,
  cctmlv4     varchar2(10) default ' ' not null,
  cctmspa     varchar2(30) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint ccstima1 primary key( 
cctmdef,
cctmdat)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
