create table oprcosaf
(
  opcpdate    varchar2(6) default ' ' not null,
  opcpdoct    varchar2(6) default ' ' not null,
  opcpoper    varchar2(9) default ' ' not null,
  opcpttim    number(6,0) default 0 not null,
  opcpltim    number(6,0) default 0 not null,
  opcphtim    number(6,0) default 0 not null,
  opcpncas    number(6,0) default 0 not null,
  opcpnopr    number(6,0) default 0 not null,
  opcpspar    varchar2(13) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint oprcosa1 primary key( 
opcpdate,
opcpdoct,
opcpoper)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
