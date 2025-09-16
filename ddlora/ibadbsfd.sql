create table ibadbsaf
(
  ibdbdbs     varchar2(3) default ' ' not null,
  ibdbdes     varchar2(35) default ' ' not null,
  ibdbdb01    varchar2(40) default ' ' not null,
  ibdbdb02    varchar2(40) default ' ' not null,
  ibdbdb03    varchar2(40) default ' ' not null,
  ibdbdb04    varchar2(40) default ' ' not null,
  ibdbdb05    varchar2(40) default ' ' not null,
  ibdbdb06    varchar2(40) default ' ' not null,
  ibdbdb07    varchar2(40) default ' ' not null,
  ibdbdb08    varchar2(40) default ' ' not null,
  ibdbdb09    varchar2(40) default ' ' not null,
  ibdbdb10    varchar2(40) default ' ' not null,
  ibdbur1     varchar2(25) default ' ' not null,
  ibdbur2     varchar2(25) default ' ' not null,
  ibdbud1     varchar2(8) default ' ' not null,
  ibdbud2     varchar2(8) default ' ' not null,
  ibdbuy1     varchar2(1) default ' ' not null,
  ibdbuy2     varchar2(1) default ' ' not null,
  ibdbspa     varchar2(20) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint ibadbsa1 primary key( 
ibdbdbs)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
