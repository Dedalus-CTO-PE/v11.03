create table oprcouaf
(
  opcodate    varchar2(6) default ' ' not null,
  opcodoct    varchar2(6) default ' ' not null,
  opcotype    varchar2(1) default ' ' not null,
  opcootyp    varchar2(3) default ' ' not null,
  opcotper    varchar2(3) default ' ' not null,
  dopcoaty    varchar2(1) default ' ' not null,
  dopcoown    varchar2(1) default ' ' not null,
  opconcas    number(6,0) default 0 not null,
  opconopr    number(6,0) default 0 not null,
  opcotime    number(6,0) default 0 not null,
  opcospar    varchar2(11) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint oprcoua1 primary key( 
opcodate,
opcodoct,
opcotype,
opcootyp,
opcotper,
dopcoaty,
dopcoown)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
