create table obsresaf
(
  obrsvisn    varchar2(8) default ' ' not null,
  obrsline    varchar2(3) default ' ' not null,
  obrsrest    varchar2(127) default ' ' not null,
  obrsspar    varchar2(50) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint obsresa1 primary key( 
obrsvisn,
obrsline)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
