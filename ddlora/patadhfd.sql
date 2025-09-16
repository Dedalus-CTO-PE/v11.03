create table pathaud
(
  sector      varchar2(10) default ' ' not null,
  data        varchar2(255) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint pathaud1 primary key(
sector)
)
tablespace pas_data
enable primary key using index
  tablespace pas_indx;
