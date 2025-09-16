create table obsreaaf
(
  obrevisn    varchar2(8) default ' ' not null,
  obreline    varchar2(3) default ' ' not null,
  obrereas    varchar2(127) default ' ' not null,
  obrespar    varchar2(127) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint obsreaa1 primary key( 
obrevisn,
obreline)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
