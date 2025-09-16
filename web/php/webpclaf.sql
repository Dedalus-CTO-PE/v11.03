create table webpclaf (
  wbpcpag  varchar2(20)  default ' ' not null,
  wbpccls  varchar2(50)  default ' ' not null,
  wbpcval  varchar2(500) default ' ' not null,
  wbpccby  varchar2(80)  default ' ' not null,
  wbpccdt  varchar2(8)   default ' ' not null,
  wbpcctm  varchar2(5)   default ' ' not null,
  wbpcuby  varchar2(80)  default ' ' not null,
  wbpcudt  varchar2(8)   default ' ' not null,
  wbpcutm  varchar2(5)   default ' ' not null,
  wbpcspa  varchar2(100) default ' ' not null,
  lf       varchar2(1)   default ' ' not null,
constraint webpcla1 primary key(
wbpcpag,
wbpccls)
)
tablespace pas_data
enable primary key using index
  tablespace pas_indx;
