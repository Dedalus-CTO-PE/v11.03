create table obsbhiaf
(
  obbhvisn    varchar2(8) default ' ' not null,
  obbhline    varchar2(3) default ' ' not null,
  obbhdesc    varchar2(127) default ' ' not null,
  obbhspar    varchar2(127) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint obsbhia1 primary key( 
obbhvisn,
obbhline)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
