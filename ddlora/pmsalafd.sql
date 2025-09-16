create table pmsalaaf
(
  pmanurno    varchar2(8) default ' ' not null,
  pmanacat    varchar2(2) default ' ' not null,
  pmanacod    varchar2(3) default ' ' not null,
  pmancntr    varchar2(3) default ' ' not null,
  pmanlnno    varchar2(3) default ' ' not null,
  pmancomm    varchar2(70) default ' ' not null,
  pmanspar    varchar2(37) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint pmsalaa1 primary key( 
pmanurno,
pmanacat,
pmanacod,
pmancntr,
pmanlnno)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
