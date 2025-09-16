create table fmslxxxx
(
  fmbltled    varchar2(2) default ' ' not null,
  fmbltacc    varchar2(12) default ' ' not null,
  fmblfled    varchar2(2) default ' ' not null,
  fmblfacc    varchar2(12) default ' ' not null,
  fmblspar    varchar2(21) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint fmslbua1 primary key( 
fmbltled,
fmbltacc)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index fmslbua2 on fmslxxxx
(
fmblfled,
fmblfacc,
fmbltled,
fmbltacc
)
  tablespace pas_indx; 
