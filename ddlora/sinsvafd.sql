create table sinsvaaf
(
  sivacod     varchar2(4) default ' ' not null,
  sivades     varchar2(30) default ' ' not null,
  sivacst     varchar2(5) default ' ' not null,
  sivaprd     varchar2(5) default ' ' not null,
  sivapn      varchar2(30) default ' ' not null,
  sivasut     varchar2(15) default ' ' not null,
  sivaled     number(4,0) default 0 not null,
  sivaqty     number(14,2) default 0 not null,
  sivaamt     number(16,4) default 0 not null,
  sivagsta    number(16,4) default 0 not null,
  sivagst     varchar2(6) default ' ' not null,
  sivaur1     varchar2(15) default ' ' not null,
  sivaur2     varchar2(15) default ' ' not null,
  sivaud1     varchar2(8) default ' ' not null,
  sivaud2     varchar2(8) default ' ' not null,
  sivauy1     varchar2(1) default ' ' not null,
  sivauy2     varchar2(1) default ' ' not null,
  sivaspa     varchar2(20) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint sinsvaa1 primary key( 
sivacod)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
