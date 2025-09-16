create table patimmaf
(
  ptimurno    varchar2(8) default ' ' not null,
  ptimdate    varchar2(8) default ' ' not null,
  ptimtype    varchar2(3) default ' ' not null,
  ptimprov    varchar2(6) default ' ' not null,
  ptimpvty    number(1,0) default 0 not null,
  ptimdued    varchar2(8) default ' ' not null,
  ptimspar    varchar2(24) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint patimma1 primary key( 
ptimurno,
ptimdate,
ptimtype)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
