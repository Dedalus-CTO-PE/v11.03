create table casstyaf
(
  casttoe     varchar2(3) default ' ' not null,
  caststy     varchar2(3) default ' ' not null,
  castdes     varchar2(35) default ' ' not null,
  castlen     number(3,0) default 0 not null,
  castjr      varchar2(1) default ' ' not null,
  castzf      varchar2(1) default ' ' not null,
  castde      varchar2(1) default ' ' not null,
  castdat     varchar2(1) default ' ' not null,
  castspa     varchar2(16) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint casstya1 primary key( 
casttoe,
caststy)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
