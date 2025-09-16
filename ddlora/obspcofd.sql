create table obspcoaf
(
  obpcurno    varchar2(8) default ' ' not null,
  obpccvis    varchar2(8) default ' ' not null,
  obpccpid    varchar2(4) default ' ' not null,
  obpcindt    varchar2(8) default ' ' not null,
  obpcctyp    varchar2(3) default ' ' not null,
  obpcintm    varchar2(8) default ' ' not null,
  obpcinus    varchar2(10) default ' ' not null,
  obpcfext    varchar2(6) default ' ' not null,
  obpcmdel    varchar2(1) default ' ' not null,
  obpcslid    varchar2(4) default ' ' not null,
  obpcslev    varchar2(2) default ' ' not null,
  obpccom1    varchar2(40) default ' ' not null,
  obpccom2    varchar2(40) default ' ' not null,
  obpccfrm    varchar2(30) default ' ' not null,
  obpcctoo    varchar2(30) default ' ' not null,
  obpcudf1    varchar2(3) default ' ' not null,
  obpcudf2    varchar2(3) default ' ' not null,
  obpcuyn1    varchar2(1) default ' ' not null,
  obpcuyn2    varchar2(1) default ' ' not null,
  obpcudd1    varchar2(8) default ' ' not null,
  obpcudd2    varchar2(8) default ' ' not null,
  obpcdtlu    varchar2(8) default ' ' not null,
  obpctmlu    varchar2(8) default ' ' not null,
  obpcluid    varchar2(10) default ' ' not null,
  obpcacat    varchar2(2) default ' ' not null,
  obpcacod    varchar2(3) default ' ' not null,
  obpccntr    varchar2(3) default ' ' not null,
  obpceaid    varchar2(20) default ' ' not null,
  obpcspar    varchar2(50) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint obspcoa1 primary key( 
obpcurno,
obpccvis,
obpccpid)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index obspcoa2 on obspcoaf
(
obpccvis,
obpcindt,
obpccpid,
obpcurno
)
  tablespace pas_indx; 
create unique index obspcoa3 on obspcoaf
(
obpcindt,
obpcurno,
obpccvis,
obpccpid
)
  tablespace pas_indx; 
create unique index obspcoa4 on obspcoaf
(
obpcctyp,
obpcindt,
obpcurno,
obpccvis,
obpccpid
)
  tablespace pas_indx; 
create unique index obspcoa5 on obspcoaf
(
obpcurno,
obpcindt,
obpccvis,
obpccpid
)
  tablespace pas_indx; 
create unique index obspcoa6 on obspcoaf
(
obpcurno,
obpcacat,
obpcacod,
obpccvis,
obpccpid
)
  tablespace pas_indx; 
