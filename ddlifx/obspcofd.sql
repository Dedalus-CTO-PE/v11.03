create table obspcoaf
(
  obpcurno    char(8) default ' ' not null,
  obpccvis    char(8) default ' ' not null,
  obpccpid    char(4) default ' ' not null,
  obpcindt    char(8) default ' ' not null,
  obpcctyp    char(3) default ' ' not null,
  obpcintm    char(8) default ' ' not null,
  obpcinus    char(10) default ' ' not null,
  obpcfext    char(6) default ' ' not null,
  obpcmdel    char(1) default ' ' not null,
  obpcslid    char(4) default ' ' not null,
  obpcslev    char(2) default ' ' not null,
  obpccom1    char(40) default ' ' not null,
  obpccom2    char(40) default ' ' not null,
  obpccfrm    char(30) default ' ' not null,
  obpcctoo    char(30) default ' ' not null,
  obpcudf1    char(3) default ' ' not null,
  obpcudf2    char(3) default ' ' not null,
  obpcuyn1    char(1) default ' ' not null,
  obpcuyn2    char(1) default ' ' not null,
  obpcudd1    char(8) default ' ' not null,
  obpcudd2    char(8) default ' ' not null,
  obpcdtlu    char(8) default ' ' not null,
  obpctmlu    char(8) default ' ' not null,
  obpcluid    char(10) default ' ' not null,
  obpcacat    char(2) default ' ' not null,
  obpcacod    char(3) default ' ' not null,
  obpccntr    char(3) default ' ' not null,
  obpceaid    char(20) default ' ' not null,
  obpcspar    char(50) default ' ' not null,
  lf          char(1)
);
create unique index obspcoa1 on obspcoaf
(
obpcurno,
obpccvis,
obpccpid
);
create unique index obspcoa2 on obspcoaf
(
obpccvis,
obpcindt,
obpccpid,
obpcurno
);
create unique index obspcoa3 on obspcoaf
(
obpcindt,
obpcurno,
obpccvis,
obpccpid
);
create unique index obspcoa4 on obspcoaf
(
obpcctyp,
obpcindt,
obpcurno,
obpccvis,
obpccpid
);
create unique index obspcoa5 on obspcoaf
(
obpcurno,
obpcindt,
obpccvis,
obpccpid
);
create unique index obspcoa6 on obspcoaf
(
obpcurno,
obpcacat,
obpcacod,
obpccvis,
obpccpid
);
revoke all on obspcoaf from public ; 
grant select on obspcoaf to public ; 
