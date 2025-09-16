create table fmsoxxxx
(
  fmsltled    varchar2(2) default ' ' not null,
  fmsltsub    varchar2(12) default ' ' not null,
  fmslfsub    varchar2(12) default ' ' not null,
  fmslspar    varchar2(23) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint fmsslba1 primary key( 
fmsltled,
fmsltsub)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index fmsslba2 on fmsoxxxx
(
fmsltled,
fmslfsub,
fmsltsub
)
  tablespace pas_indx; 
