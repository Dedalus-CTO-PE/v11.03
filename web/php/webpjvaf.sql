create table webpjvaf (
  wbpjpag  varchar2(20)  default ' ' not null,
  wbpjcls  varchar2(50)  default ' ' not null,
  wbpjval  varchar2(500) default ' ' not null,
  wbpjcby  varchar2(80)  default ' ' not null,
  wbpjcdt  varchar2(8)   default ' ' not null,
  wbpjctm  varchar2(5)   default ' ' not null,
  wbpjuby  varchar2(80)  default ' ' not null,
  wbpjudt  varchar2(8)   default ' ' not null,
  wbpjutm  varchar2(5)   default ' ' not null,
  wbpjspa  varchar2(100) default ' ' not null,
  lf       varchar2(1)   default ' ' not null,
constraint webpjva1 primary key(
wbpjpag,
wbpjcls)
)
tablespace pas_data
enable primary key using index
  tablespace pas_indx;
