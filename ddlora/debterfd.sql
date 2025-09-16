create table debaudte
(
  dbteaudd    varchar2(8) default ' ' not null,
  dbteaudt    varchar2(8) default ' ' not null,
  dbteaudp    varchar2(2) default ' ' not null,
  dbteaudr    varchar2(1) default ' ' not null,
  dbteauds    number(1,0) default 0 not null,
  dbteaudo    varchar2(4) default ' ' not null,
  dbteter     varchar2(3) default ' ' not null,
  dbtedes     varchar2(35) default ' ' not null,
  dbteact     number(1,0) default 0 not null,
  dbteur1     varchar2(25) default ' ' not null,
  dbteur2     varchar2(25) default ' ' not null,
  dbteud1     varchar2(8) default ' ' not null,
  dbteud2     varchar2(8) default ' ' not null,
  dbteuy1     varchar2(1) default ' ' not null,
  dbteuy2     varchar2(1) default ' ' not null,
  dbteuc1     varchar2(3) default ' ' not null,
  dbteuc2     varchar2(3) default ' ' not null,
  dbtespa     varchar2(20) default ' ' not null,
  lf          varchar2(1) default ' ' not null
)
tablespace pas_data; 
create index debaudte on debaudte
(
dbteaudd,
dbteaudt,
dbteaudp,
dbteaudr
)
tablespace pas_indx; 
create table debteraf
(
  dbteter     varchar2(3) default ' ' not null,
  dbtedes     varchar2(35) default ' ' not null,
  dbteact     number(1,0) default 0 not null,
  dbteur1     varchar2(25) default ' ' not null,
  dbteur2     varchar2(25) default ' ' not null,
  dbteud1     varchar2(8) default ' ' not null,
  dbteud2     varchar2(8) default ' ' not null,
  dbteuy1     varchar2(1) default ' ' not null,
  dbteuy2     varchar2(1) default ' ' not null,
  dbteuc1     varchar2(3) default ' ' not null,
  dbteuc2     varchar2(3) default ' ' not null,
  dbtespa     varchar2(20) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint debtera1 primary key( 
dbteter)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
